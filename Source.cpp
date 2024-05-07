#include <iostream>
#include <ctime>

#include <fstream>
#include <vector>
#include <string>

#include "PLAYERDRAFT.h";

#include "PLAYER.h" //PLAYER HEADER
 // TEAMS HEADER
#include "gameplay.h" // GAMEPLAY HEADER

#include "playerdata.txt"
#include "playernamesandpositions.txt"
#include "playerattributes.txt"

using namespace std;



int main()
{
	std::ifstream gamefile("playerdata.txt");
	std::ifstream namefile("playernamesandpositions.txt");
	std::ifstream attributefile("playerattributes.txt");


	srand(time(NULL));

	mainmenu();

	int menuchoice;

	std::cout << endl << endl << "[1] ----------------- CONTINUE" << endl;
	std::cout << "[2] ----------------- NEW GAME" << endl;
	std::cout << "[3] ----------------- EXIT GAME" << endl;


	std::cin >> menuchoice;



	switch (menuchoice)
	{
		
	
		case 1:
		{
			std::ifstream gamefile("playerdata.txt");
			std::ifstream namefile("playernamesandpositions.txt");
			std::ifstream attributefile("playerattributes.txt");
			break;
		}
		case 2:
		{
		
		std::ofstream gamefile("playerdata.txt");
		std::ofstream namefile("playernamesandpositions.txt");
		std::ofstream attributefile("playerattributes.txt");

			if (!gamefile.is_open())
			{
				cerr << "UNABLE TO OPEN FILE." << endl;
			}

			else
			{
				int case1choice;
				std::cout << endl << endl << "WOULD YOU LIKE TO RESET YOUR DATA? " << endl << endl;;
				std::cout << "[1] ----------------- YES" << endl;
				std::cout << "[2] ----------------- NO" << endl;
				cin >> case1choice;

					switch (case1choice)
					{
						case 1:
						{
							resetdataoption();

							PLAYERDRAFT(0);
							
							break;
						}

						case 2:
						{
							break;
						}
					}

			}
			break;
		}

		case 3:
		{
			return 0;
		}

	}

	std::cout << "                                 | |           | | | " << std::endl;
	std::cout << "  __ _  __ _ _ __ ___   ___   ___| |_ __ _ _ __| | |" << std::endl;
	std::cout << " / _` |/ _` | '_ ` _ \\ / _ \\ / __| __/ _` | '__| __|" << std::endl;
	std::cout << "| (_| | (_| | | | | | |  __/ \\__ \\ || (_| | |  | |_ " << std::endl;
	std::cout << " \\__, |\\__,_|_| |_| |_|\\___| |___/\\__\\__,_|_|__|" << std::endl;
	std::cout << "  __/ |                                              " << std::endl;
	std::cout << " |___/  " << std::endl;



}






