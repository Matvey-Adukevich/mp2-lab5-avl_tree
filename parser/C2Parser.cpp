
// Generated from C2.g4 by ANTLR 4.13.2


#include "C2Visitor.h"

#include "C2Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct C2ParserStaticData final {
  C2ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  C2ParserStaticData(const C2ParserStaticData&) = delete;
  C2ParserStaticData(C2ParserStaticData&&) = delete;
  C2ParserStaticData& operator=(const C2ParserStaticData&) = delete;
  C2ParserStaticData& operator=(C2ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag c2ParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<C2ParserStaticData> c2ParserStaticData = nullptr;

void c2ParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (c2ParserStaticData != nullptr) {
    return;
  }
#else
  assert(c2ParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<C2ParserStaticData>(
    std::vector<std::string>{
      "program", "instruction", "if_instr", "while_instr", "print", "brackets", 
      "var", "expr", "compare", "addsub", "muldiv", "unary", "primary"
    },
    std::vector<std::string>{
      "", "';'", "'if'", "'('", "')'", "'else'", "'while'", "'print'", "','", 
      "'{'", "'}'", "'int'", "'='", "'double'", "'>'", "'<'", "'>='", "'<='", 
      "'=='", "'!='", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "INT", "DOUBLE", "NAME", "WS", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,141,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,5,0,28,8,0,10,
  	0,12,0,31,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,3,1,48,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,57,8,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,4,1,4,1,4,1,4,1,4,5,4,70,8,4,10,4,12,4,73,9,4,1,4,1,4,1,5,1,
  	5,5,5,79,8,5,10,5,12,5,82,9,5,1,5,1,5,1,6,1,6,1,6,1,6,3,6,90,8,6,1,6,
  	1,6,1,6,1,6,3,6,96,8,6,3,6,98,8,6,1,7,1,7,1,7,1,7,3,7,104,8,7,1,8,1,8,
  	1,8,3,8,109,8,8,1,9,1,9,1,9,5,9,114,8,9,10,9,12,9,117,9,9,1,10,1,10,1,
  	10,5,10,122,8,10,10,10,12,10,125,9,10,1,11,1,11,1,11,3,11,130,8,11,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,139,8,12,1,12,0,0,13,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,0,3,1,0,14,19,1,0,20,21,1,0,22,23,148,0,29,1,
  	0,0,0,2,47,1,0,0,0,4,49,1,0,0,0,6,58,1,0,0,0,8,64,1,0,0,0,10,76,1,0,0,
  	0,12,97,1,0,0,0,14,103,1,0,0,0,16,105,1,0,0,0,18,110,1,0,0,0,20,118,1,
  	0,0,0,22,129,1,0,0,0,24,138,1,0,0,0,26,28,3,2,1,0,27,26,1,0,0,0,28,31,
  	1,0,0,0,29,27,1,0,0,0,29,30,1,0,0,0,30,32,1,0,0,0,31,29,1,0,0,0,32,33,
  	5,0,0,1,33,1,1,0,0,0,34,35,3,12,6,0,35,36,5,1,0,0,36,48,1,0,0,0,37,38,
  	3,14,7,0,38,39,5,1,0,0,39,48,1,0,0,0,40,48,3,4,2,0,41,48,3,6,3,0,42,43,
  	3,8,4,0,43,44,5,1,0,0,44,48,1,0,0,0,45,48,3,10,5,0,46,48,5,1,0,0,47,34,
  	1,0,0,0,47,37,1,0,0,0,47,40,1,0,0,0,47,41,1,0,0,0,47,42,1,0,0,0,47,45,
  	1,0,0,0,47,46,1,0,0,0,48,3,1,0,0,0,49,50,5,2,0,0,50,51,5,3,0,0,51,52,
  	3,14,7,0,52,53,5,4,0,0,53,56,3,2,1,0,54,55,5,5,0,0,55,57,3,2,1,0,56,54,
  	1,0,0,0,56,57,1,0,0,0,57,5,1,0,0,0,58,59,5,6,0,0,59,60,5,3,0,0,60,61,
  	3,14,7,0,61,62,5,4,0,0,62,63,3,2,1,0,63,7,1,0,0,0,64,65,5,7,0,0,65,66,
  	5,3,0,0,66,71,3,14,7,0,67,68,5,8,0,0,68,70,3,14,7,0,69,67,1,0,0,0,70,
  	73,1,0,0,0,71,69,1,0,0,0,71,72,1,0,0,0,72,74,1,0,0,0,73,71,1,0,0,0,74,
  	75,5,4,0,0,75,9,1,0,0,0,76,80,5,9,0,0,77,79,3,2,1,0,78,77,1,0,0,0,79,
  	82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,
  	84,5,10,0,0,84,11,1,0,0,0,85,86,5,11,0,0,86,89,5,26,0,0,87,88,5,12,0,
  	0,88,90,3,14,7,0,89,87,1,0,0,0,89,90,1,0,0,0,90,98,1,0,0,0,91,92,5,13,
  	0,0,92,95,5,26,0,0,93,94,5,12,0,0,94,96,3,14,7,0,95,93,1,0,0,0,95,96,
  	1,0,0,0,96,98,1,0,0,0,97,85,1,0,0,0,97,91,1,0,0,0,98,13,1,0,0,0,99,100,
  	5,26,0,0,100,101,5,12,0,0,101,104,3,14,7,0,102,104,3,16,8,0,103,99,1,
  	0,0,0,103,102,1,0,0,0,104,15,1,0,0,0,105,108,3,18,9,0,106,107,7,0,0,0,
  	107,109,3,18,9,0,108,106,1,0,0,0,108,109,1,0,0,0,109,17,1,0,0,0,110,115,
  	3,20,10,0,111,112,7,1,0,0,112,114,3,20,10,0,113,111,1,0,0,0,114,117,1,
  	0,0,0,115,113,1,0,0,0,115,116,1,0,0,0,116,19,1,0,0,0,117,115,1,0,0,0,
  	118,123,3,22,11,0,119,120,7,2,0,0,120,122,3,22,11,0,121,119,1,0,0,0,122,
  	125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,21,1,0,0,0,125,123,1,
  	0,0,0,126,127,5,21,0,0,127,130,3,22,11,0,128,130,3,24,12,0,129,126,1,
  	0,0,0,129,128,1,0,0,0,130,23,1,0,0,0,131,139,5,24,0,0,132,139,5,25,0,
  	0,133,139,5,26,0,0,134,135,5,3,0,0,135,136,3,14,7,0,136,137,5,4,0,0,137,
  	139,1,0,0,0,138,131,1,0,0,0,138,132,1,0,0,0,138,133,1,0,0,0,138,134,1,
  	0,0,0,139,25,1,0,0,0,14,29,47,56,71,80,89,95,97,103,108,115,123,129,138
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  c2ParserStaticData = std::move(staticData);
}

}

C2Parser::C2Parser(TokenStream *input) : C2Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

C2Parser::C2Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  C2Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *c2ParserStaticData->atn, c2ParserStaticData->decisionToDFA, c2ParserStaticData->sharedContextCache, options);
}

C2Parser::~C2Parser() {
  delete _interpreter;
}

const atn::ATN& C2Parser::getATN() const {
  return *c2ParserStaticData->atn;
}

std::string C2Parser::getGrammarFileName() const {
  return "C2.g4";
}

const std::vector<std::string>& C2Parser::getRuleNames() const {
  return c2ParserStaticData->ruleNames;
}

const dfa::Vocabulary& C2Parser::getVocabulary() const {
  return c2ParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView C2Parser::getSerializedATN() const {
  return c2ParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

C2Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C2Parser::ProgramContext::EOF() {
  return getToken(C2Parser::EOF, 0);
}

std::vector<C2Parser::InstructionContext *> C2Parser::ProgramContext::instruction() {
  return getRuleContexts<C2Parser::InstructionContext>();
}

C2Parser::InstructionContext* C2Parser::ProgramContext::instruction(size_t i) {
  return getRuleContext<C2Parser::InstructionContext>(i);
}


size_t C2Parser::ProgramContext::getRuleIndex() const {
  return C2Parser::RuleProgram;
}


std::any C2Parser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

C2Parser::ProgramContext* C2Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, C2Parser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 119548622) != 0)) {
      setState(26);
      instruction();
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(32);
    match(C2Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

C2Parser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C2Parser::InstructionContext::getRuleIndex() const {
  return C2Parser::RuleInstruction;
}

void C2Parser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_lineContext ------------------------------------------------------------------

C2Parser::ExprContext* C2Parser::Expr_lineContext::expr() {
  return getRuleContext<C2Parser::ExprContext>(0);
}

C2Parser::Expr_lineContext::Expr_lineContext(InstructionContext *ctx) { copyFrom(ctx); }


std::any C2Parser::Expr_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitExpr_line(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Print_lineContext ------------------------------------------------------------------

C2Parser::PrintContext* C2Parser::Print_lineContext::print() {
  return getRuleContext<C2Parser::PrintContext>(0);
}

C2Parser::Print_lineContext::Print_lineContext(InstructionContext *ctx) { copyFrom(ctx); }


std::any C2Parser::Print_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitPrint_line(this);
  else
    return visitor->visitChildren(this);
}
//----------------- If_lineContext ------------------------------------------------------------------

C2Parser::If_instrContext* C2Parser::If_lineContext::if_instr() {
  return getRuleContext<C2Parser::If_instrContext>(0);
}

C2Parser::If_lineContext::If_lineContext(InstructionContext *ctx) { copyFrom(ctx); }


std::any C2Parser::If_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitIf_line(this);
  else
    return visitor->visitChildren(this);
}
//----------------- While_lineContext ------------------------------------------------------------------

C2Parser::While_instrContext* C2Parser::While_lineContext::while_instr() {
  return getRuleContext<C2Parser::While_instrContext>(0);
}

C2Parser::While_lineContext::While_lineContext(InstructionContext *ctx) { copyFrom(ctx); }


std::any C2Parser::While_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitWhile_line(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Brackets_lineContext ------------------------------------------------------------------

C2Parser::BracketsContext* C2Parser::Brackets_lineContext::brackets() {
  return getRuleContext<C2Parser::BracketsContext>(0);
}

C2Parser::Brackets_lineContext::Brackets_lineContext(InstructionContext *ctx) { copyFrom(ctx); }


std::any C2Parser::Brackets_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitBrackets_line(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Var_lineContext ------------------------------------------------------------------

C2Parser::VarContext* C2Parser::Var_lineContext::var() {
  return getRuleContext<C2Parser::VarContext>(0);
}

C2Parser::Var_lineContext::Var_lineContext(InstructionContext *ctx) { copyFrom(ctx); }


std::any C2Parser::Var_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitVar_line(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Void_lineContext ------------------------------------------------------------------

C2Parser::Void_lineContext::Void_lineContext(InstructionContext *ctx) { copyFrom(ctx); }


std::any C2Parser::Void_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitVoid_line(this);
  else
    return visitor->visitChildren(this);
}
C2Parser::InstructionContext* C2Parser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 2, C2Parser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C2Parser::T__10:
      case C2Parser::T__12: {
        _localctx = _tracker.createInstance<C2Parser::Var_lineContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(34);
        var();
        setState(35);
        match(C2Parser::T__0);
        break;
      }

      case C2Parser::T__2:
      case C2Parser::T__20:
      case C2Parser::INT:
      case C2Parser::DOUBLE:
      case C2Parser::NAME: {
        _localctx = _tracker.createInstance<C2Parser::Expr_lineContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(37);
        expr();
        setState(38);
        match(C2Parser::T__0);
        break;
      }

      case C2Parser::T__1: {
        _localctx = _tracker.createInstance<C2Parser::If_lineContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(40);
        if_instr();
        break;
      }

      case C2Parser::T__5: {
        _localctx = _tracker.createInstance<C2Parser::While_lineContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(41);
        while_instr();
        break;
      }

      case C2Parser::T__6: {
        _localctx = _tracker.createInstance<C2Parser::Print_lineContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(42);
        print();
        setState(43);
        match(C2Parser::T__0);
        break;
      }

      case C2Parser::T__8: {
        _localctx = _tracker.createInstance<C2Parser::Brackets_lineContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(45);
        brackets();
        break;
      }

      case C2Parser::T__0: {
        _localctx = _tracker.createInstance<C2Parser::Void_lineContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(46);
        match(C2Parser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_instrContext ------------------------------------------------------------------

C2Parser::If_instrContext::If_instrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C2Parser::ExprContext* C2Parser::If_instrContext::expr() {
  return getRuleContext<C2Parser::ExprContext>(0);
}

std::vector<C2Parser::InstructionContext *> C2Parser::If_instrContext::instruction() {
  return getRuleContexts<C2Parser::InstructionContext>();
}

C2Parser::InstructionContext* C2Parser::If_instrContext::instruction(size_t i) {
  return getRuleContext<C2Parser::InstructionContext>(i);
}


size_t C2Parser::If_instrContext::getRuleIndex() const {
  return C2Parser::RuleIf_instr;
}


std::any C2Parser::If_instrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitIf_instr(this);
  else
    return visitor->visitChildren(this);
}

C2Parser::If_instrContext* C2Parser::if_instr() {
  If_instrContext *_localctx = _tracker.createInstance<If_instrContext>(_ctx, getState());
  enterRule(_localctx, 4, C2Parser::RuleIf_instr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(C2Parser::T__1);
    setState(50);
    match(C2Parser::T__2);
    setState(51);
    expr();
    setState(52);
    match(C2Parser::T__3);
    setState(53);
    instruction();
    setState(56);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(54);
      match(C2Parser::T__4);
      setState(55);
      instruction();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_instrContext ------------------------------------------------------------------

C2Parser::While_instrContext::While_instrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C2Parser::ExprContext* C2Parser::While_instrContext::expr() {
  return getRuleContext<C2Parser::ExprContext>(0);
}

C2Parser::InstructionContext* C2Parser::While_instrContext::instruction() {
  return getRuleContext<C2Parser::InstructionContext>(0);
}


size_t C2Parser::While_instrContext::getRuleIndex() const {
  return C2Parser::RuleWhile_instr;
}


std::any C2Parser::While_instrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitWhile_instr(this);
  else
    return visitor->visitChildren(this);
}

C2Parser::While_instrContext* C2Parser::while_instr() {
  While_instrContext *_localctx = _tracker.createInstance<While_instrContext>(_ctx, getState());
  enterRule(_localctx, 6, C2Parser::RuleWhile_instr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(C2Parser::T__5);
    setState(59);
    match(C2Parser::T__2);
    setState(60);
    expr();
    setState(61);
    match(C2Parser::T__3);
    setState(62);
    instruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

C2Parser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C2Parser::ExprContext *> C2Parser::PrintContext::expr() {
  return getRuleContexts<C2Parser::ExprContext>();
}

C2Parser::ExprContext* C2Parser::PrintContext::expr(size_t i) {
  return getRuleContext<C2Parser::ExprContext>(i);
}


size_t C2Parser::PrintContext::getRuleIndex() const {
  return C2Parser::RulePrint;
}


std::any C2Parser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

C2Parser::PrintContext* C2Parser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 8, C2Parser::RulePrint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(C2Parser::T__6);
    setState(65);
    match(C2Parser::T__2);
    setState(66);
    expr();
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C2Parser::T__7) {
      setState(67);
      match(C2Parser::T__7);
      setState(68);
      expr();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(74);
    match(C2Parser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BracketsContext ------------------------------------------------------------------

C2Parser::BracketsContext::BracketsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C2Parser::InstructionContext *> C2Parser::BracketsContext::instruction() {
  return getRuleContexts<C2Parser::InstructionContext>();
}

C2Parser::InstructionContext* C2Parser::BracketsContext::instruction(size_t i) {
  return getRuleContext<C2Parser::InstructionContext>(i);
}


size_t C2Parser::BracketsContext::getRuleIndex() const {
  return C2Parser::RuleBrackets;
}


std::any C2Parser::BracketsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitBrackets(this);
  else
    return visitor->visitChildren(this);
}

C2Parser::BracketsContext* C2Parser::brackets() {
  BracketsContext *_localctx = _tracker.createInstance<BracketsContext>(_ctx, getState());
  enterRule(_localctx, 10, C2Parser::RuleBrackets);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(C2Parser::T__8);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 119548622) != 0)) {
      setState(77);
      instruction();
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(83);
    match(C2Parser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

C2Parser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C2Parser::VarContext::NAME() {
  return getToken(C2Parser::NAME, 0);
}

C2Parser::ExprContext* C2Parser::VarContext::expr() {
  return getRuleContext<C2Parser::ExprContext>(0);
}


size_t C2Parser::VarContext::getRuleIndex() const {
  return C2Parser::RuleVar;
}


std::any C2Parser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

C2Parser::VarContext* C2Parser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 12, C2Parser::RuleVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C2Parser::T__10: {
        enterOuterAlt(_localctx, 1);
        setState(85);
        match(C2Parser::T__10);
        setState(86);
        match(C2Parser::NAME);
        setState(89);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == C2Parser::T__11) {
          setState(87);
          match(C2Parser::T__11);
          setState(88);
          expr();
        }
        break;
      }

      case C2Parser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(91);
        match(C2Parser::T__12);
        setState(92);
        match(C2Parser::NAME);
        setState(95);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == C2Parser::T__11) {
          setState(93);
          match(C2Parser::T__11);
          setState(94);
          expr();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

C2Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C2Parser::ExprContext::getRuleIndex() const {
  return C2Parser::RuleExpr;
}

void C2Parser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToCompareContext ------------------------------------------------------------------

C2Parser::CompareContext* C2Parser::ToCompareContext::compare() {
  return getRuleContext<C2Parser::CompareContext>(0);
}

C2Parser::ToCompareContext::ToCompareContext(ExprContext *ctx) { copyFrom(ctx); }


std::any C2Parser::ToCompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitToCompare(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignExprContext ------------------------------------------------------------------

tree::TerminalNode* C2Parser::AssignExprContext::NAME() {
  return getToken(C2Parser::NAME, 0);
}

C2Parser::ExprContext* C2Parser::AssignExprContext::expr() {
  return getRuleContext<C2Parser::ExprContext>(0);
}

C2Parser::AssignExprContext::AssignExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any C2Parser::AssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitAssignExpr(this);
  else
    return visitor->visitChildren(this);
}
C2Parser::ExprContext* C2Parser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 14, C2Parser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<C2Parser::AssignExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(99);
      match(C2Parser::NAME);
      setState(100);
      match(C2Parser::T__11);
      setState(101);
      expr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<C2Parser::ToCompareContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(102);
      compare();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareContext ------------------------------------------------------------------

C2Parser::CompareContext::CompareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C2Parser::CompareContext::getRuleIndex() const {
  return C2Parser::RuleCompare;
}

void C2Parser::CompareContext::copyFrom(CompareContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompareExprContext ------------------------------------------------------------------

std::vector<C2Parser::AddsubContext *> C2Parser::CompareExprContext::addsub() {
  return getRuleContexts<C2Parser::AddsubContext>();
}

C2Parser::AddsubContext* C2Parser::CompareExprContext::addsub(size_t i) {
  return getRuleContext<C2Parser::AddsubContext>(i);
}

C2Parser::CompareExprContext::CompareExprContext(CompareContext *ctx) { copyFrom(ctx); }


std::any C2Parser::CompareExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitCompareExpr(this);
  else
    return visitor->visitChildren(this);
}
C2Parser::CompareContext* C2Parser::compare() {
  CompareContext *_localctx = _tracker.createInstance<CompareContext>(_ctx, getState());
  enterRule(_localctx, 16, C2Parser::RuleCompare);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<C2Parser::CompareExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(105);
    addsub();
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1032192) != 0)) {
      setState(106);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1032192) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(107);
      addsub();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddsubContext ------------------------------------------------------------------

C2Parser::AddsubContext::AddsubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C2Parser::AddsubContext::getRuleIndex() const {
  return C2Parser::RuleAddsub;
}

void C2Parser::AddsubContext::copyFrom(AddsubContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<C2Parser::MuldivContext *> C2Parser::AddSubExprContext::muldiv() {
  return getRuleContexts<C2Parser::MuldivContext>();
}

C2Parser::MuldivContext* C2Parser::AddSubExprContext::muldiv(size_t i) {
  return getRuleContext<C2Parser::MuldivContext>(i);
}

C2Parser::AddSubExprContext::AddSubExprContext(AddsubContext *ctx) { copyFrom(ctx); }


std::any C2Parser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
C2Parser::AddsubContext* C2Parser::addsub() {
  AddsubContext *_localctx = _tracker.createInstance<AddsubContext>(_ctx, getState());
  enterRule(_localctx, 18, C2Parser::RuleAddsub);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<C2Parser::AddSubExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(110);
    muldiv();
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C2Parser::T__19

    || _la == C2Parser::T__20) {
      setState(111);
      _la = _input->LA(1);
      if (!(_la == C2Parser::T__19

      || _la == C2Parser::T__20)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(112);
      muldiv();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MuldivContext ------------------------------------------------------------------

C2Parser::MuldivContext::MuldivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C2Parser::MuldivContext::getRuleIndex() const {
  return C2Parser::RuleMuldiv;
}

void C2Parser::MuldivContext::copyFrom(MuldivContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<C2Parser::UnaryContext *> C2Parser::MulDivExprContext::unary() {
  return getRuleContexts<C2Parser::UnaryContext>();
}

C2Parser::UnaryContext* C2Parser::MulDivExprContext::unary(size_t i) {
  return getRuleContext<C2Parser::UnaryContext>(i);
}

C2Parser::MulDivExprContext::MulDivExprContext(MuldivContext *ctx) { copyFrom(ctx); }


std::any C2Parser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
C2Parser::MuldivContext* C2Parser::muldiv() {
  MuldivContext *_localctx = _tracker.createInstance<MuldivContext>(_ctx, getState());
  enterRule(_localctx, 20, C2Parser::RuleMuldiv);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<C2Parser::MulDivExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(118);
    unary();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C2Parser::T__21

    || _la == C2Parser::T__22) {
      setState(119);
      _la = _input->LA(1);
      if (!(_la == C2Parser::T__21

      || _la == C2Parser::T__22)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(120);
      unary();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

C2Parser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C2Parser::UnaryContext::getRuleIndex() const {
  return C2Parser::RuleUnary;
}

void C2Parser::UnaryContext::copyFrom(UnaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToPrimaryContext ------------------------------------------------------------------

C2Parser::PrimaryContext* C2Parser::ToPrimaryContext::primary() {
  return getRuleContext<C2Parser::PrimaryContext>(0);
}

C2Parser::ToPrimaryContext::ToPrimaryContext(UnaryContext *ctx) { copyFrom(ctx); }


std::any C2Parser::ToPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitToPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusExprContext ------------------------------------------------------------------

C2Parser::UnaryContext* C2Parser::UnaryMinusExprContext::unary() {
  return getRuleContext<C2Parser::UnaryContext>(0);
}

C2Parser::UnaryMinusExprContext::UnaryMinusExprContext(UnaryContext *ctx) { copyFrom(ctx); }


std::any C2Parser::UnaryMinusExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitUnaryMinusExpr(this);
  else
    return visitor->visitChildren(this);
}
C2Parser::UnaryContext* C2Parser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 22, C2Parser::RuleUnary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C2Parser::T__20: {
        _localctx = _tracker.createInstance<C2Parser::UnaryMinusExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(126);
        match(C2Parser::T__20);
        setState(127);
        unary();
        break;
      }

      case C2Parser::T__2:
      case C2Parser::INT:
      case C2Parser::DOUBLE:
      case C2Parser::NAME: {
        _localctx = _tracker.createInstance<C2Parser::ToPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(128);
        primary();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

C2Parser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C2Parser::PrimaryContext::getRuleIndex() const {
  return C2Parser::RulePrimary;
}

void C2Parser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoubleExprContext ------------------------------------------------------------------

tree::TerminalNode* C2Parser::DoubleExprContext::DOUBLE() {
  return getToken(C2Parser::DOUBLE, 0);
}

C2Parser::DoubleExprContext::DoubleExprContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any C2Parser::DoubleExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitDoubleExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarExprContext ------------------------------------------------------------------

tree::TerminalNode* C2Parser::VarExprContext::NAME() {
  return getToken(C2Parser::NAME, 0);
}

C2Parser::VarExprContext::VarExprContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any C2Parser::VarExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitVarExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntExprContext ------------------------------------------------------------------

tree::TerminalNode* C2Parser::IntExprContext::INT() {
  return getToken(C2Parser::INT, 0);
}

C2Parser::IntExprContext::IntExprContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any C2Parser::IntExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitIntExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

C2Parser::ExprContext* C2Parser::ParenExprContext::expr() {
  return getRuleContext<C2Parser::ExprContext>(0);
}

C2Parser::ParenExprContext::ParenExprContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any C2Parser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C2Visitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
C2Parser::PrimaryContext* C2Parser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 24, C2Parser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C2Parser::INT: {
        _localctx = _tracker.createInstance<C2Parser::IntExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(131);
        match(C2Parser::INT);
        break;
      }

      case C2Parser::DOUBLE: {
        _localctx = _tracker.createInstance<C2Parser::DoubleExprContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(132);
        match(C2Parser::DOUBLE);
        break;
      }

      case C2Parser::NAME: {
        _localctx = _tracker.createInstance<C2Parser::VarExprContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(133);
        match(C2Parser::NAME);
        break;
      }

      case C2Parser::T__2: {
        _localctx = _tracker.createInstance<C2Parser::ParenExprContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(134);
        match(C2Parser::T__2);
        setState(135);
        expr();
        setState(136);
        match(C2Parser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void C2Parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  c2ParserInitialize();
#else
  ::antlr4::internal::call_once(c2ParserOnceFlag, c2ParserInitialize);
#endif
}
