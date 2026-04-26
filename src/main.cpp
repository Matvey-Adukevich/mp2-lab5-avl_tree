#include <iostream>
#include "MapAVL.h"

int main() {
	MapAVL<std::string, int> exprs;
	exprs["x"] = 9;
	exprs["y"] = 10 + 26;
	std::cout << exprs["x"] + exprs["y"];
	return 0;
}