#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <ctime>
#include <func.hpp>
namespace func {
	void number(std::ifstream& in, std::ofstream& out, std::vector<std::string> v) {
		while (!in.eof()) {
			char s[100];
			in >> s;
			v.push_back(s);
		}
		const char* b = &v[v.size() - 1][0];
		out<< std::endl<<atoi(b) + 1 << "-";
	}
	void date(std::ofstream& out) {
		struct tm newtime;
		time_t now = time(0);
		localtime_s(&newtime, &now);
		out << newtime.tm_year + 1900 << "-" << newtime.tm_mon + 1 << "-" << newtime.tm_mday << "-" << newtime.tm_hour << "-" << newtime.tm_min << "-" << newtime.tm_sec;
	}
}