#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "PLAYER.h"



using namespace std; 

int draftround;

int shooting; // slashing
int scoring; // finishing
int rebound; //rebound
int defense; // defense

bool clutch;
bool volumeshooter;




void PointGuardDraft(int i, ofstream& gamefile, ofstream& namefile, ofstream& attributefile)
{
	string name;
	std::cout << endl << "You have drafted a Point Guard. Choose a name. " << endl;
	cin >> name;
	
	playernames[i] = name;
	playerpositions[i] = "POINT GUARD";

	stamina[i] = 50;

	shooting = (rand() % 8) + 3;
	scoring = (rand() % 7) + 3;
	rebound = (rand() % 4) + 3;
	defense = (rand() % 5) + 3;

	Players[i] = i + 1;

	Shoot[i] = shooting;
	Score[i] = scoring;
	Rebound[i] = rebound;
	Defense[i] = defense;
	
	
	std::cout << endl << "Shooting: " << Shoot[i] << "\n";
	std::cout << "Finishing: " << Score[i] << "\n";
	std::cout << "Defense: " << Defense[i] << "\n";
	std::cout << "rebound: " <<  Rebound[i] << endl << "\n";


	namefile << endl << endl << "Point Guard" << endl;
	namefile << playernames[i] << endl;

	gamefile << endl << endl << endl << endl << Players[i] << endl;
	gamefile << Shoot[i] << endl;
	gamefile << Score[i] << endl;
	gamefile << Rebound[i] << endl;
	gamefile << Defense[i] << endl;

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		VolumeShooter[i] == true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
		attributefile << VolumeShooter[i] << endl;;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		Clutch[i] == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
		attributefile << Clutch[i] << endl;;
	}


}

void ShootingGuardDraft(int i, ofstream& gamefile, ofstream& namefile, ofstream& attributefile)
{
	string name;
	std::cout << endl << "You have drafted a Shooting Guard. Choose a name. " << endl;
	cin >> name;

	playernames[i] = name;
	playerpositions[i] = "SHOOTING GUARD";

	stamina[i] = 50;

	shooting = ((rand() % 10) + 1);
	scoring = ((rand() % 8) + 1);
	rebound = ((rand() % 6) + 1);
	defense = ((rand() % 8) + 1);

	Players[i] = i + 1;

	Shoot[i] = shooting;
	Score[i] = scoring;
	Rebound[i] = rebound;
	Defense[i] = defense;


	std::cout << endl << "Shooting: " << Shoot[i] << "\n";
	std::cout << "Finishing: " << Score[i] << "\n";
	std::cout << "Defense: " << Defense[i] << "\n";
	std::cout << "rebound: " << Rebound[i] << endl << "\n";

	namefile << endl << endl << "Shooting Guard" << endl;
	namefile << playernames[i] << endl;

	
	gamefile << endl << endl << endl << endl << Players[i] << endl;
	gamefile << Shoot[i] << endl;
	gamefile << Score[i] << endl;
	gamefile << Rebound[i] << endl;
	gamefile << Defense[i] << endl;

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		VolumeShooter[i] == true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
		attributefile << VolumeShooter[i] << endl;;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		Clutch[i] == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
		attributefile << Clutch[i] << endl;;
	}
}



void SmallForwardDraft(int i, ofstream& gamefile, ofstream& namefile, ofstream& attributefile)
{
	string name;
	std::cout << endl << "You have drafted a Small Forward. Choose a name. " << endl;
	cin >> name;

	playernames[i] = name;
	playerpositions[i] = "SMALL FORWARD";

	stamina[i] = 50;

	shooting = (rand() % 7) + 1;
	scoring = (rand() % 8) + 1;
	rebound = (rand() % 9) + 1;
	defense = (rand() % 10) + 1;

	Players[i] = i + 1;

	Shoot[i] = shooting;
	Score[i] = scoring;
	Rebound[i] = rebound;
	Defense[i] = defense;


	std::cout << endl << "Shooting: " << Shoot[i] << "\n";
	std::cout << "Finishing: " << Score[i] << "\n";
	std::cout << "Defense: " << Defense[i] << "\n";
	std::cout << "rebound: " << Rebound[i] << endl << "\n";

	namefile << endl << endl << "Small Forward" << endl;
	namefile << playernames[i] << endl;

	gamefile << endl << endl << endl << endl << Players[i] << endl ;
	gamefile << Shoot[i] << endl;
	gamefile << Score[i] << endl;
	gamefile << Rebound[i] << endl;
	gamefile << Defense[i] << endl;

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		VolumeShooter[i] == true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
		attributefile << VolumeShooter[i] << endl;;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		Clutch[i] == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
		attributefile << Clutch[i] << endl;;
	}

	

}


void PowerForwardDraft(int i, ofstream& gamefile, ofstream& namefile, ofstream& attributefile)
{
	string name;
	std::cout << endl << "You have drafted a Power Forward. Choose a name. " << endl;
	cin >> name;

	playernames[i] = name;
	playerpositions[i] = "POWER FORWARD";

	stamina[i] = 65;

	shooting = ((rand() % 7) + 1);
	scoring = ((rand() % 8) + 1);
	rebound = ((rand() % 8) + 1);
	defense = ((rand() % 10) + 1);

	Players[i] = i + 1;

	Shoot[i] = shooting;
	Score[i] = scoring;
	Rebound[i] = rebound;
	Defense[i] = defense;


	std::cout << endl << "Shooting: " << Shoot[i] << "\n";
	std::cout << "Finishing: " << Score[i] << "\n";
	std::cout << "Defense: " << Defense[i] << "\n";
	std::cout << "rebound: " << Rebound[i] << endl << "\n";

	namefile << endl << endl << "Power Forward" << endl;
	namefile << playernames[i] << endl;

	gamefile << endl << endl << endl << endl << Players[i] << endl;
	gamefile << Shoot[i] << endl;
	gamefile << Score[i] << endl;
	gamefile << Rebound[i] << endl;
	gamefile << Defense[i] << endl;

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		VolumeShooter[i] == true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
		attributefile << VolumeShooter[i] << endl;;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		Clutch[i] == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
		attributefile << Clutch[i] << endl;;
	}

}


void CenterDraft(int i, ofstream& gamefile, ofstream& namefile, ofstream& attributefile)
{
	string name;
	std::cout << endl << "You have drafted a Center. Choose a name. " << endl;
	cin >> name;

	playernames[i] = name;
	playerpositions[i] = "CENTER";

	stamina[i] = 50;

	shooting = ((rand() % 5) + 1);
	scoring = ((rand() % 9) + 1);
	rebound = ((rand() % 10) + 1);
	defense = ((rand() % 9) + 1);

	Players[i] = i + 1;

	Shoot[i] = shooting;
	Score[i] = scoring;
	Rebound[i] = rebound;
	Defense[i] = defense;

	std::cout << endl << "Shooting: " << Shoot[i] << "\n";
	std::cout << "Finishing: " << Score[i] << "\n";
	std::cout << "Defense: " << Defense[i] << "\n";
	std::cout << "rebound: " << Rebound[i] << endl << "\n";

	namefile << endl << endl << "Center" << endl;
	namefile << playernames[i] << endl;

	gamefile << endl << endl << endl << endl << Players[i] << endl;
	gamefile << Shoot[i] << endl;
	gamefile << Score[i] << endl;
	gamefile << Rebound[i] << endl;
	gamefile << Defense[i] << endl;

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		VolumeShooter[i] == true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
		attributefile << VolumeShooter[i] << endl;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		Clutch[i] == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
		attributefile << Clutch[i] << endl;
	}
}



void PLAYERDRAFT(int draftround)
{

	std::cout << "New Player Detected. Beginning DRAFT." << endl << endl;

	std::cout << "WELCOME TO THE NBA DRAFT." << endl << endl;

	std::cout << "WARNING: THIS PROGRAM IS DESIGNED TO MIMIC THE ACTUAL LEAGUE AS MUCH AS POSSIBLE." << endl;
	std::cout << "SCREWING UP THE DRAFT CAN LEAD TO THE DESTRUCTION OF A FRANCHISE'S FUTURE." << endl;
	std::cout << "WHEN DRAFTING, DO NOT SELECT ANY NUMBER APART FROM 1-5. YOU ARE A GENERAL MANAGER." << endl;
	std::cout << "SELECTING ANY NUMBER OUTSIDE THIS RANGE WILL RESULT IN SELECTING A RANDOM POSITION." << endl;

	std::cout << "DRAFT START" << endl;

	std::cout << "YOU WILL NOW DRAFT YOUR PLAYERS. THEIR STATS WILL BE RANDOMIZED. YOU CAN DRAFT 5 PLAYERS OF ANY POSITION." << "\n" << "\n" << "\n" << endl;
	

	ofstream gamefile("playerdata.txt", ios::app);

	if (!gamefile.is_open())
	{
		std::cout << "File did not open." << std::endl;
		return;
	}

	ofstream namefile("playernamesandpositions.txt", ios::app);

	if (!namefile.is_open())
	{
		std::cout << "File did not open." << std::endl;
		return;
	}

	ofstream attributefile("playerattributes.txt", ios::app);
	
	if (!attributefile.is_open())
	{
		std::cout << "File did not open" << std::endl;
	}

	for (int i = 0; i < 5; ++i)
	{
		int switchnumber;
		std::cout << endl << "PICK " << draftround + 1;
		std::cout << "------------------------------------------------------------------------";
		std::cout << endl << "Choose which position you would like to draft." << endl << endl;
		std::cout << "1 ----- POINT GUARD" << endl;
		std::cout << "2 ----- SHOOTING GUARD" << endl;
		std::cout << "3 ----- SMALL FORWARD" << endl;
		std::cout << "4 ----- POWER FORWARD" << endl;
		std::cout << "5 ----- CENTER" << endl;
		std::cin >> switchnumber;

			switch (switchnumber)
			{

			case 1: //PG

				PointGuardDraft(draftround, gamefile, namefile, attributefile);
				
				cout << draftround + 1 << " --------- PG" << endl;

				break;

			case 2: //SG

				ShootingGuardDraft(draftround, gamefile, namefile, attributefile);


				break;

			case 3: // SF

				SmallForwardDraft(draftround, gamefile, namefile, attributefile);

				break;

			case 4: //PF

				PowerForwardDraft(draftround, gamefile, namefile, attributefile);

				break;

			case 5: // C

				CenterDraft(draftround, gamefile, namefile, attributefile);

				break;

			default:
				{
					std::cout << "Invalid position choice." << std::endl;

					int draftbust = (rand() % 5) + 1;

					if (draftbust == 1)
					{
						PointGuardDraft(draftround, gamefile, namefile, attributefile);
					}

					if (draftbust == 2)
					{
						ShootingGuardDraft(draftround, gamefile, namefile, attributefile);
					}

					if (draftbust == 3)
					{
						SmallForwardDraft(draftround, gamefile, namefile, attributefile);
					}

					if (draftbust == 4)
					{
						PowerForwardDraft(draftround, gamefile, namefile, attributefile);
					}

					if (draftbust == 5)
					{
						CenterDraft(draftround, gamefile, namefile, attributefile);
					}

					break;

				}

			}
			draftround++;
		
	}

	gamefile.close();
	namefile.close();

	std::cout << std::endl << "Drafting Complete." << endl;

}



























































