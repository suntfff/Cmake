#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <ctime>
#include "func.hpp"
int main()
{
	std::vector<std::string>  v;
	std::ifstream in("output.txt");
	std::ofstream out("output.txt", std::ios::app);
	func::number(in, out, v);
	func::date(out);
	in.close();
	out.close();
	return 0;
}
