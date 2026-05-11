#pragma once
#include <iostream>
#include <string>
#include "antlr4-runtime.h"
#include "C2BaseVisitor.h"
#include "MapAVL.h"

using namespace std;
using namespace antlr4;

class C2UserVisitor : public C2BaseVisitor {
public:
    MapAVL<string, int> vars;

    int calcExpr(C2Parser::ExprContext* ctx) {
        C2Parser::AssignExprContext* a = (C2Parser::AssignExprContext*)ctx;
        if (ctx->getText().find("=") != string::npos) {
            string name = a->NAME()->getText();
            int value = calcExpr(a->expr());
            vars[name] = value;
            return value;
        }
        C2Parser::ToCompareContext* c = (C2Parser::ToCompareContext*)ctx;
        if (c) {
            return calcCompare(c->compare());
        }
        return 0;
    }

    int calcCompare(C2Parser::CompareContext* ctx) {
        C2Parser::CompareExprContext* c = (C2Parser::CompareExprContext*)ctx;
        if (c) {
            int left = calcAddSub(c->addsub(0));
            if (c->addsub().size() == 1) return left;

            string op = "";
            for (int i = 0; i < c->children.size(); i++) {
                string s = c->children[i]->getText();
                if (s == ">" || s == "<" || s == ">=" || s == "<=" || s == "==" || s == "!=") {
                    op = s;
                    break;
                }
            }

            int right = calcAddSub(c->addsub(1));
            if (op == ">")  return (left > right);
            if (op == "<")  return (left < right);
            if (op == ">=") return (left >= right);
            if (op == "<=") return (left <= right);
            if (op == "==") return (left == right);
            if (op == "!=") return (left != right);
        }
        return 0;
    }

    int calcAddSub(C2Parser::AddsubContext* ctx) {
        C2Parser::AddSubExprContext* a = (C2Parser::AddSubExprContext*)ctx;
        if (a) {
            int result = calcMulDiv(a->muldiv(0));
            int nextMul = 1;
            for (int i = 0; i < a->children.size(); i++) {
                string znak = a->children[i]->getText();
                if (znak == "+") {
                    result = result + calcMulDiv(a->muldiv(nextMul));
                    nextMul++;
                }
                if (znak == "-") {
                    result = result - calcMulDiv(a->muldiv(nextMul));
                    nextMul++;
                }
            }
            return result;
        }
        return 0;
    }

    int calcMulDiv(C2Parser::MuldivContext* ctx) {
        C2Parser::MulDivExprContext* m = (C2Parser::MulDivExprContext*)ctx;
        if (m) {
            int result = calcUnary(m->unary(0));
            int nextUnary = 1;
            for (int i = 0; i < m->children.size(); i++) {
                string znak = m->children[i]->getText();
                if (znak == "*") {
                    result = result * calcUnary(m->unary(nextUnary));
                    nextUnary++;
                }
                if (znak == "/") {
                    int r = calcUnary(m->unary(nextUnary));
                    nextUnary++;
                    if (r == 0) {
                        cout << "div by 0" << endl;
                        return 0;
                    }
                    result = result / r;
                }
            }
            return result;
        }
        return 0;
    }

    int calcUnary(C2Parser::UnaryContext* ctx) {
        if (ctx->getText().substr(0, 1) == "-") {
            C2Parser::UnaryMinusExprContext* u = (C2Parser::UnaryMinusExprContext*)ctx;
            return -calcUnary(u->unary());
        }
        C2Parser::ToPrimaryContext* p = (C2Parser::ToPrimaryContext*)ctx;
        return calcPrimary(p->primary());
    }

    int calcPrimary(C2Parser::PrimaryContext* ctx) {
        string text = ctx->getText();

        if (text[0] == '(') {
            C2Parser::ParenExprContext* p = (C2Parser::ParenExprContext*)ctx;
            return calcExpr(p->expr());
        }

        if (isalpha(text[0])) {
            if (vars.inMap(text) == false) {
                cout << "no x" << text << endl;
                return 0;
            }
            return vars[text];
        }

        if (text.find(".") != string::npos) {
            return (int)stod(text);
        }
        return stoi(text);
    }

    virtual std::any visitVar_line(C2Parser::Var_lineContext* ctx) override {
        C2Parser::VarContext* v = ctx->var();
        string name = v->NAME()->getText();
        if (v->expr()) {
            vars[name] = calcExpr(v->expr());
        }
        else {
            vars[name] = 0;
        }
        return 0;
    }

    virtual std::any visitExpr_line(C2Parser::Expr_lineContext* ctx) override {
        calcExpr(ctx->expr());
        return 0;
    }

    virtual std::any visitIf_line(C2Parser::If_lineContext* ctx) override {
        C2Parser::If_instrContext* info = ctx->if_instr();
        if (calcExpr(info->expr()) != 0) {
            visit(info->instruction(0));
        }
        else {
            if (info->instruction().size() > 1) {
                visit(info->instruction(1));
            }
        }
        return 0;
    }

    virtual std::any visitWhile_line(C2Parser::While_lineContext* ctx) override {
        C2Parser::While_instrContext* info = ctx->while_instr();
        while (calcExpr(info->expr()) != 0) {
            visit(info->instruction());
        }
        return 0;
    }

    virtual std::any visitPrint_line(C2Parser::Print_lineContext* ctx) override {
        C2Parser::PrintContext* p = ctx->print();
        for (int i = 0; i < p->expr().size(); i++) {
            cout << calcExpr(p->expr(i)) << " ";
        }
        cout << endl;
        return 0;
    }

    virtual std::any visitBrackets_line(C2Parser::Brackets_lineContext* ctx) override {
        C2Parser::BracketsContext* b = ctx->brackets();
        for (int i = 0; i < b->instruction().size(); i++) {
            visit(b->instruction(i));
        }
        return 0;
    }

    virtual std::any visitVoid_line(C2Parser::Void_lineContext* ctx) override { return 0; }
    virtual std::any visitProgram(C2Parser::ProgramContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitIf_instr(C2Parser::If_instrContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitWhile_instr(C2Parser::While_instrContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitPrint(C2Parser::PrintContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitBrackets(C2Parser::BracketsContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitVar(C2Parser::VarContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitAssignExpr(C2Parser::AssignExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitToCompare(C2Parser::ToCompareContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitCompareExpr(C2Parser::CompareExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitAddSubExpr(C2Parser::AddSubExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitMulDivExpr(C2Parser::MulDivExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitUnaryMinusExpr(C2Parser::UnaryMinusExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitToPrimary(C2Parser::ToPrimaryContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitIntExpr(C2Parser::IntExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitDoubleExpr(C2Parser::DoubleExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitVarExpr(C2Parser::VarExprContext* ctx) override { return visitChildren(ctx); }
    virtual std::any visitParenExpr(C2Parser::ParenExprContext* ctx) override { return visitChildren(ctx); }
};
