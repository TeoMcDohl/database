#ifndef INPUT
#define INPUT
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
using std::string;

class input
{
public:
	static int cinput()
	{
		string inputstring;
		int inputint;
		getline(cin, inputstring);
		stringstream inputStream(inputstring);
		if (inputStream >> inputint)
		{
			return inputint;
		}
		else
			return 0;
	}
};

#endif