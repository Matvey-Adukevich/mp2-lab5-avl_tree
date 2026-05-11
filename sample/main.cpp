//#include <iostream>
//#include "MapAVL.h"
//
//int main() {
//	MapAVL<std::string, int> exprs;
//	exprs["x"] = 9;
//	exprs["y"] = 10 + 26;
//	std::cout << exprs["x"] + exprs["y"];
//	return 0;
//}

#include <iostream>
#include <fstream>
#include <sstream>
#include "antlr4-runtime.h"
#include "../parser/C2Lexer.h"
#include "../parser/C2Parser.h"
#include "../parser/C2UserVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "mylang <file>" << endl;
        return 1;
    }

    ifstream file(argv[1]);
    if (!file) {
        cerr << "Не могу открыть файл: " << argv[1] << endl;
        return 1;
    }

    stringstream buf;
    buf << file.rdbuf();
    string source = buf.str();
    file.close();

    ANTLRInputStream input(source);
    C2Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    C2Parser parser(&tokens);

    C2Parser::ProgramContext* tree = parser.program();

    if (parser.getNumberOfSyntaxErrors() > 0) {
        cerr << "Ошибки синтаксиса!" << endl;
        return 1;
    }

    C2UserVisitor visitor;
    visitor.visitProgram(tree);

    return 0;
}