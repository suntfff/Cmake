#pragma once
#include <fstream>
#include <vector>
#include <string>
namespace func {
	void number(std::ifstream& in, std::ofstream& out, std::vector<std::string> v);
	void date(std::ofstream& out);
}