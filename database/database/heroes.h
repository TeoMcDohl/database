#ifndef HEROES
#define HEROES
#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
using std::string;

class heroes
{
public:
	void Raynor()
	{
		string jimmy;
		int jimmyint;
		cout << "This is Jimmy!\n";
		cout << endl;
		cout << "Any key to return...\n";
		getline(cin, jimmy);
		stringstream topMenuStream(jimmy);
		if (topMenuStream >> jimmyint)
		{
			return;
		}
		else
		{
			return;
		}
	}
};

#endif