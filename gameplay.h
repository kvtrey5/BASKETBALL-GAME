#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PLAYER.h"
#include "playerdata.txt"

using namespace std; 

int teamscore;
int opponentscore;





void mainmenu()
{
	std::cout << "  ___    _ _ _  ___ _    _____          __  __ ______  _____ \n"
		<< " |__ \\  ( | ) |/ ( | )  / ____|   /\\   |  \\/  |  ____|/ ____|\n"
		<< "    ) |  V V| ' / V V  | |  __   /  \\  | \\  / | |__  | (___  \n"
		<< "   / /      |  <       | | |_ | / /\\ \\ | |\\/| |  __|  \\___ \\ \n"
		<< "  / /_      | . \\      | |__| |/ ____ \\| |  | | |____ ____) |\n"
		<< " |____|     |_|\\_\\      \\_____/_/    \\_\\_|  |_|______|_____/ " << std::endl << std::endl;

	std::cout << "  _____  _____  ______  _____ ______ _   _ _______ _____ \n"
		<< " |  __ \\|  __ \\|  ____|/ ____|  ____| \\ | |__   __/ ____|\n"
		<< " | |__) | |__) | |__  | (___ | |__  |  \\| |  | | | (___  \n"
		<< " |  ___/|  _  /|  __|  \\___ \\|  __| | . ` |  | |  \\___ \\ \n"
		<< " | |    | | \\ \\| |____ ____) | |____| |\\  |  | |  ____) |\n"
		<< " |_|    |_|  \\_\\______|_____/|______|_| \\_|  |_| |_____/ " << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;

	std::cout << "        _                             _                                                  _ ___  _  _   \n"
		<< "       | |                           (_)                                         /\\     ( )__ \\| || |  \n"
		<< "  _ __ | | ___  __ _ ___  ___    __ _ ___   _____   _   _ ___    __ _ _ __      /  \\    |/   ) | || |_ \n"
		<< " | '_ \\| |/ _ \\/ _` / __|/ _ \\  / _` | \\ \\ / / _ \\ | | | / __|  / _` | '_ \\    / /\\ \\       / /|__   _|\n"
		<< " | |_) | |  __/ (_| \\__ \\  __/ | (_| | |\\ V /  __/ | |_| \\__ \\ | (_| | | | |  / ____ \\     / /_   | |  \n"
		<< " | .__/|_|\\___|\\__,_|___/\\___|  \\__, |_| \\_/ \\___|  \\__,_|___/  \\__,_|_| |_| /_/    \\_\\   |____|  |_|  \n"
		<< " | |                             __/ |                                                                   \n"
		<< " |_|                            |___/                                                                    " << std::endl;
}


void resetdataoption()
{
	fstream gamefile, namefile;
	gamefile.open("playerdata.txt");
	namefile.open("playernamesandpositions.txt");
	std::ofstream deletestats("playerdata.txt", std::ofstream::out | std::ofstream::trunc);
	std::ofstream deletenames("playernamesandpositions.txt", std::ofstream::out | std::ofstream::trunc);
	deletestats.close();
	deletenames.close();
}



void structuremaker()
{
	cout << playernames[0] << "----------------" << playerpositions[0] << endl;
	cout << playernames[1] << "----------------" << playerpositions[1] << endl;
	cout << playernames[2] << "----------------" << playerpositions[2] << endl;
	cout << playernames[3] << "----------------" << playerpositions[3] << endl;
	cout << playernames[4] << "----------------" << playerpositions[4] << endl;
}








int x;

int selector = Players[x - 1];

int y = (rand() % 4) + 1;
int reboundselector = Players[y];

void UpdatePlayerStamina(int i)
{
	stamina[i] = stamina[i] - 3;
}

void offensiverebound(int reboundselector)
{
	int rebounddecider = ((rand() % 30) + 1);

	if (rebounddecider <= Rebound[reboundselector])
	{
		cout << playernames[reboundselector] << " snagged the offensive board!" << endl;
	}

	if (rebounddecider > Rebound[reboundselector])
	{
		cout << playernames[reboundselector] << " missed the board...";
	}

}


void offensivetwo(int selector)
{
	int twodecider = (rand() % 30) +1;

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











