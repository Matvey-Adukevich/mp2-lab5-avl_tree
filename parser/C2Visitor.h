
// Generated from C2.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "C2Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by C2Parser.
 */
class  C2Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by C2Parser.
   */
    virtual std::any visitProgram(C2Parser::ProgramContext *context) = 0;

    virtual std::any visitVar_line(C2Parser::Var_lineContext *context) = 0;

    virtual std::any visitExpr_line(C2Parser::Expr_lineContext *context) = 0;

    virtual std::any visitIf_line(C2Parser::If_lineContext *context) = 0;

    virtual std::any visitWhile_line(C2Parser::While_lineContext *context) = 0;

    virtual std::any visitPrint_line(C2Parser::Print_lineContext *context) = 0;

    virtual std::any visitBrackets_line(C2Parser::Brackets_lineContext *context) = 0;

    virtual std::any visitVoid_line(C2Parser::Void_lineContext *context) = 0;

    virtual std::any visitIf_instr(C2Parser::If_instrContext *context) = 0;

    virtual std::any visitWhile_instr(C2Parser::While_instrContext *context) = 0;

    virtual std::any visitPrint(C2Parser::PrintContext *context) = 0;

    virtual std::any visitBrackets(C2Parser::BracketsContext *context) = 0;

    virtual std::any visitVar(C2Parser::VarContext *context) = 0;

    virtual std::any visitAssignExpr(C2Parser::AssignExprContext *context) = 0;

    virtual std::any visitToCompare(C2Parser::ToCompareContext *context) = 0;

    virtual std::any visitCompareExpr(C2Parser::CompareExprContext *context) = 0;

    virtual std::any visitAddSubExpr(C2Parser::AddSubExprContext *context) = 0;

    virtual std::any visitMulDivExpr(C2Parser::MulDivExprContext *context) = 0;

    virtual std::any visitUnaryMinusExpr(C2Parser::UnaryMinusExprContext *context) = 0;

    virtual std::any visitToPrimary(C2Parser::ToPrimaryContext *context) = 0;

    virtual std::any visitIntExpr(C2Parser::IntExprContext *context) = 0;

    virtual std::any visitDoubleExpr(C2Parser::DoubleExprContext *context) = 0;

    virtual std::any visitVarExpr(C2Parser::VarExprContext *context) = 0;

    virtual std::any visitParenExpr(C2Parser::ParenExprContext *context) = 0;


};

