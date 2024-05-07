#include <iostream>
#include "PLAYERDRAFT.h"
using namespace std; 
#pragma once

// 1 = boston
// 2 = minnesota
// 3 = los angeles
// 4 = orlando



/*vector <string> teams{"Boston", "Minnesota", "Los Angeles", "Orlando"};

vector <int> enemyshooting{ 9, 4, 7, 4 };
vector <int> enemyscoring{ 10, 8, 7, 6 };
vector <int> enemyrebounding{ 7, 9, 5, 7 };
vector <int> enemydefense{ 6, 7, 4, 8 };*/

/*vector <string> teams{"Los Angeles", "Dallas", "Minnesota", "Boston"};
vector <int> enemyshooting{4, 7, 4, 9};
vector <int> enemyscoring{ 6, 7, 8, 10 };
vector <int> enemyrebounding{ 7, 5, 9, 7 };
vector <int> enemydefense{ 8, 4, 7, 6 };*/



struct Opponents {
	string ename;
	int eshooting;
	int escoring;
	int erebounding;
	int edefense;
};
 
Opponents Lakers =
{
 "Lakers", 4, 6, 7, 6
};

Opponents Mavericks =
{
 "Dallas", 7, 7, 5, 4
};

Opponents Timberwolves =
{
 "Minnesota", 4, 8, 9, 7
};

Opponents Celtics =
{
 "Boston", 9, 10, 7, 6
};

int z;

int selector = Players[x - 1];

int y = (rand() % 4) + 1;
int reboundselector = Players[y];



void opponentoffensiverebound(const Opponents& opponent)
{
	int rebounddecider = ((rand() % 30) + 1);

	if (rebounddecider <= opponent.erebounding)
	{
		cout << opponent.ename << " snagged the offensive board!" << endl;
	}

	if (rebounddecider > Rebound[reboundselector])
	{
		cout << playernames[reboundselector] << " missed the board...";
	}

}


void offensivetwo(int selector)
{
	int twodecider = (rand() % 30) + 1;

	int y = (rand() % 4) + 1;
	int reboundselector = Players[y];

	if (teamscore > 25 && opponentscore > 25)
	{
		if (Clutch[selector] == true)
		{
			int twodecider = ((rand() % 23) + 1);
		}
	}

	if (twodecider <= Score[selector])
	{
		cout << playernames[selector] << " hit a layup!" << endl;
		teamscore + 2;
	}

	if (twodecider > Score[selector])
	{
		cout << playernames[selector] << " missed the shot...";
	}

	UpdatePlayerStamina(selector);
	offensiverebound(reboundselector);
}

void offensivethree(int selector)
{
	int threedecider = ((rand() % 30) + 1);

	int y = (rand() % 4) + 1;
	int reboundselector = Players[y];

	if (threedecider <= Shoot[selector])
	{
		cout << playernames[selector] << " hit the three!" << endl;
		++teamscore;
	}

	if (threedecider > Shoot[selector])
	{
		cout << playernames[selector] << " missed it badly...";
	}

	UpdatePlayerStamina(selector);
	offensiverebound(reboundselector);
}


void steal(int selector)
{
	int stealdecider = ((rand() % 30) + 1);

	if (stealdecider <= Defense[selector])
	{
		cout << playernames[selector] << " stripped the ball!" << endl;
		++teamscore;
	}

	if (stealdecider > Rebound[selector])
	{
		cout << playernames[selector] << " overcommitted...";
	}

	UpdatePlayerStamina(selector);
}

void block(int selector)
{
	int blockdecider = ((rand() % 30) + 1);
	int blockmaker = ((Defense[selector] + Rebound[selector]) / 1.5);

	if (blockdecider <= blockmaker)
	{
		cout << " REJECTED BY " << playernames[selector] << endl;
		++teamscore;
	}

	if (blockdecider > blockmaker)
	{
		cout << playernames[selector] << " overcommitted...";
	}

	UpdatePlayerStamina(selector);
}