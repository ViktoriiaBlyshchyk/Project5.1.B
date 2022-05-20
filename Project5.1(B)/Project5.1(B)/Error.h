#pragma once
#include <string>

using namespace std;

class Error :
	public exception
{
	string message;
public:
	Error(string a) { message = a; }
	string What() const { return message; }
};
