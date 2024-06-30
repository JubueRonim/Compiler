#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "jp/primitive.h"

using namespace jp;

int main(i32 argc, char* argv[]) {
	std::vector<std::string> args(argv + 1, argv + argc);

	// load text from file from args[0]
	std::string path = args[0];
	std::cout << "File: " << path << std::endl;

	std::ifstream in = std::ifstream(path);
	if(!in.is_open()){
		std::cerr << "Could not open file: " << path << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(in, line)) {
		std::cout << line << std::endl;
	}


	return 0;
}
