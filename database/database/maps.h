#ifndef MAPS
#define MAPS
#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
using std::string;

class maps
{
public:

	static int bhb()
	{
		string bhb;
		string bhbint;
		cout << "This will talk about Blackheart's Bay\n";
		cout << endl;
		cout << "Any key to return...\n";
		getline(cin, bhb);
		stringstream topMenuStream(bhb);
		if (topMenuStream >> bhbint)
		{
			return 1;
		}
		else
		{
			return 1;
		}
	}
	
};

#endif
