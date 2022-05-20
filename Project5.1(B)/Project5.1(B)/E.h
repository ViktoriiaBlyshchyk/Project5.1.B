#pragma once
#include <string>

using namespace std;

class E
{
	string message;

public:
	string What() const { return message; }
	E(string a) { message = a; }
};
