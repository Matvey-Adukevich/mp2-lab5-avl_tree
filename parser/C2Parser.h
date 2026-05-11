
// Generated from C2.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  C2Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, INT = 24, DOUBLE = 25, NAME = 26, 
    WS = 27, LINE_COMMENT = 28
  };

  enum {
    RuleProgram = 0, RuleInstruction = 1, RuleIf_instr = 2, RuleWhile_instr = 3, 
    RulePrint = 4, RuleBrackets = 5, RuleVar = 6, RuleExpr = 7, RuleCompare = 8, 
    RuleAddsub = 9, RuleMuldiv = 10, RuleUnary = 11, RulePrimary = 12
  };

  explicit C2Parser(antlr4::TokenStream *input);

  C2Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~C2Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class InstructionContext;
  class If_instrContext;
  class While_instrContext;
  class PrintContext;
  class BracketsContext;
  class VarContext;
  class ExprContext;
  class CompareContext;
  class AddsubContext;
  class MuldivContext;
  class UnaryContext;
  class PrimaryContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstructionContext() = default;
    void copyFrom(InstructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_lineContext : public InstructionContext {
  public:
    Expr_lineContext(InstructionContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Print_lineContext : public InstructionContext {
  public:
    Print_lineContext(InstructionContext *ctx);

    PrintContext *print();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  If_lineContext : public InstructionContext {
  public:
    If_lineContext(InstructionContext *ctx);

    If_instrContext *if_instr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  While_lineContext : public InstructionContext {
  public:
    While_lineContext(InstructionContext *ctx);

    While_instrContext *while_instr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Brackets_lineContext : public InstructionContext {
  public:
    Brackets_lineContext(InstructionContext *ctx);

    BracketsContext *brackets();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Var_lineContext : public InstructionContext {
  public:
    Var_lineContext(InstructionContext *ctx);

    VarContext *var();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Void_lineContext : public InstructionContext {
  public:
    Void_lineContext(InstructionContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstructionContext* instruction();

  class  If_instrContext : public antlr4::ParserRuleContext {
  public:
    If_instrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_instrContext* if_instr();

  class  While_instrContext : public antlr4::ParserRuleContext {
  public:
    While_instrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    InstructionContext *instruction();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_instrContext* while_instr();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  BracketsContext : public antlr4::ParserRuleContext {
  public:
    BracketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracketsContext* brackets();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarContext* var();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ToCompareContext : public ExprContext {
  public:
    ToCompareContext(ExprContext *ctx);

    CompareContext *compare();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignExprContext : public ExprContext {
  public:
    AssignExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  CompareContext : public antlr4::ParserRuleContext {
  public:
    CompareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CompareContext() = default;
    void copyFrom(CompareContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CompareExprContext : public CompareContext {
  public:
    CompareExprContext(CompareContext *ctx);

    std::vector<AddsubContext *> addsub();
    AddsubContext* addsub(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompareContext* compare();

  class  AddsubContext : public antlr4::ParserRuleContext {
  public:
    AddsubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AddsubContext() = default;
    void copyFrom(AddsubContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AddSubExprContext : public AddsubContext {
  public:
    AddSubExprContext(AddsubContext *ctx);

    std::vector<MuldivContext *> muldiv();
    MuldivContext* muldiv(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AddsubContext* addsub();

  class  MuldivContext : public antlr4::ParserRuleContext {
  public:
    MuldivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MuldivContext() = default;
    void copyFrom(MuldivContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MulDivExprContext : public MuldivContext {
  public:
    MulDivExprContext(MuldivContext *ctx);

    std::vector<UnaryContext *> unary();
    UnaryContext* unary(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MuldivContext* muldiv();

  class  UnaryContext : public antlr4::ParserRuleContext {
  public:
    UnaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnaryContext() = default;
    void copyFrom(UnaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ToPrimaryContext : public UnaryContext {
  public:
    ToPrimaryContext(UnaryContext *ctx);

    PrimaryContext *primary();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryMinusExprContext : public UnaryContext {
  public:
    UnaryMinusExprContext(UnaryContext *ctx);

    UnaryContext *unary();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnaryContext* unary();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryContext() = default;
    void copyFrom(PrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoubleExprContext : public PrimaryContext {
  public:
    DoubleExprContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarExprContext : public PrimaryContext {
  public:
    VarExprContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntExprContext : public PrimaryContext {
  public:
    IntExprContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public PrimaryContext {
  public:
    ParenExprContext(PrimaryContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryContext* primary();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

