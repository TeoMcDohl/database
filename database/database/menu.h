#ifndef MENU
#define MENU
#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include "heroes.h"
#include "maps.h"
#include "input.h"
using namespace std;
using std::string;

class menu
{
public:

	static void mainTitle()
	{
		cout << "MAIN MENU TITLE";
		cout << endl;
		cout << "Heroes of the Storm DB\n";
		cout << "This thing is shit. Sowwies.\n";
	}

	static int topMenu()
	{
		
		int topMenuint;
		cout << endl;
		cout << "1: Heroes\n";
		cout << "2: Maps\n";
		cout << "3: Roles\n";
		cout << "4: Quit\n";
		cout << endl;
		topMenuint = input::cinput();
		return topMenuint;	

	}
	static int heroMenu()
	{
		int heroMenuint;
		cout << endl;
		cout << "1: Raynor\n";
		cout << "2: Jaina\n";
		cout << "3: Return to Main Menu\n";
		cout << endl;
		heroMenuint = input::cinput();
		if (heroMenuint == 1)
			{
				heroes::Raynor();
				heroMenu();
				return 0;
			}
			else if (heroMenuint == 2)
			{
				cout << "Will be about Jaina!\n";
				heroMenu();
			}
			else if (heroMenuint == 3)
			{
			
				return 0;
			}
			else if (heroMenuint != 1 && heroMenuint != 2 && heroMenuint != 3)
			{
				heroMenu();
			}
		}
		
	

	static int mapMenu()
	{
		string mapMenustring;
		int mapMenuint;
		cout << endl;
		cout << "1: Blackheart's Bay\n";
		cout << "2: Towers of Doom\n";
		cout << "3: Return to Main Menu\n";
		cout << endl;
		getline(cin, mapMenustring);
		stringstream topMenuStream(mapMenustring);
		if (topMenuStream >> mapMenuint)
		{
			if (mapMenuint == 1)
			{
				maps::bhb();
				mapMenu();
				return 0;
			}
			else if (mapMenuint == 2)
			{
				cout << "Will be about Towers of Doom!\n";
				mapMenu();
			}
			else if (mapMenuint == 3)
			{

				return 0;
			}
		}
		else
		{
			cout << "\n*Invalid*\n";
			return -1;
		}
	}
};
#endif

