
// Generated from C2.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "C2Visitor.h"


/**
 * This class provides an empty implementation of C2Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  C2BaseVisitor : public C2Visitor {
public:

  virtual std::any visitProgram(C2Parser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_line(C2Parser::Var_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_line(C2Parser::Expr_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_line(C2Parser::If_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_line(C2Parser::While_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_line(C2Parser::Print_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBrackets_line(C2Parser::Brackets_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVoid_line(C2Parser::Void_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_instr(C2Parser::If_instrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_instr(C2Parser::While_instrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(C2Parser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBrackets(C2Parser::BracketsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar(C2Parser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignExpr(C2Parser::AssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitToCompare(C2Parser::ToCompareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompareExpr(C2Parser::CompareExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpr(C2Parser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpr(C2Parser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryMinusExpr(C2Parser::UnaryMinusExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitToPrimary(C2Parser::ToPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntExpr(C2Parser::IntExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleExpr(C2Parser::DoubleExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarExpr(C2Parser::VarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(C2Parser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

