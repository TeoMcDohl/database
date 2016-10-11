#include "stdafx.h"
#include <iostream>
#include "maps.h"

int main()
{
	using namespace std;
	menu coreMenu;
	heroes coreHeroes;
	maps coreMap;
	coreMenu.mainTitle();
	int topmenu;
	topmenu = coreMenu.topMenu();
	while (topmenu != 4)
	{
		if (topmenu == 1)
		{
			coreMenu.heroMenu(coreHeroes);
		}
		else if(topmenu == 2)
		{
			coreMenu.mapMenu(coreMap);
		}
		else if (topmenu == 3)
		{
			cout << "Will be another menu for roles!";
		}

		topmenu = coreMenu.topMenu();
	}
    return 0;
}

