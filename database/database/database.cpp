#include "stdafx.h"
#include <iostream>
#include "maps.h"

int main()
{
	using namespace std;
	menu::mainTitle();
	int topmenu;
	topmenu = menu::topMenu();
	while (topmenu != 4)
	{
		if (topmenu == 1)
		{
			menu::heroMenu();
		}
		else if(topmenu == 2)
		{
			menu::mapMenu();
		}
		else if (topmenu == 3)
		{
			cout << "Will be another menu for roles!";
		}

		topmenu = menu::topMenu();
	}
    return 0;
}

