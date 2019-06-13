#pragma once
#include <string>
#include <stdexcept>
using namespace std;
class shifr
{
	char** value;
	int m, n;
	string getValidText(const string& s);
public:
	shifr() = delete;
	shifr(int key, const string& s);
	string encrypt(const string& open_text);
	string decrypt(const string& cipher_text);
	~shifr();
};
class Error: public invalid_argument
{
public:
	explicit Error (const string& what_arg):
		invalid_argument(what_arg) {}
	explicit Error (const char* what_arg):
		invalid_argument(what_arg) {}
};
