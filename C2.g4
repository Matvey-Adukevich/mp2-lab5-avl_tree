grammar C2;

INT     : [0-9]+ ;
DOUBLE  : [0-9]+ '.' [0-9]+ ;
NAME    : [a-zA-Z][a-zA-Z0-9]* ;
WS      : [ \t\r\n]+ -> skip ;

program
    : instruction* EOF
    ;

instruction
    : var ';'              # Var_line
    | expr ';'             # Expr_line
    | if_instr             # If_line
    | while_instr          # While_line
    | print ';'            # Print_line
    | brackets             # Brackets_line
    | ';'                  # Void_line
    ;

if_instr
    : 'if' '(' expr ')' instruction ('else' instruction)?
    ;

while_instr
    : 'while' '(' expr ')' instruction
    ;

print
    : 'print' '(' expr (',' expr)* ')'
    ;

brackets
    : '{' instruction* '}'
    ;

var
    : 'int' NAME ('=' expr)?
    | 'double' NAME ('=' expr)?
    ;

expr
    : NAME '=' expr        # AssignExpr
    | compare              # ToCompare
    ;

compare
    : addsub (('>' | '<' | '>=' | '<=' | '==' | '!=') addsub)?   # CompareExpr
    ;

addsub
    : muldiv (('+' | '-') muldiv)*   # AddSubExpr
    ;

muldiv
    : unary (('*' | '/') unary)*     # MulDivExpr
    ;

unary
    : '-' unary             # UnaryMinusExpr
    | primary               # ToPrimary
    ;

primary
    : INT                   # IntExpr
    | DOUBLE                # DoubleExpr
    | NAME                  # VarExpr
    | '(' expr ')'          # ParenExpr
    ;