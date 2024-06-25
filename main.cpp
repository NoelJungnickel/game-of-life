#include "Header.h"

using namespace std;

int main()
{
	// Hier den Seed fuer Zufallszahlen
	srand(time(NULL));

	// Auswahl ob zufaellige Welt oder Welt mit FORTNITE
	string choice;
	cout << "#################### WELCOME #################### \n"
		 << endl;
	while (true)
	{
		cout << "Moechtest du eine zufaellige Welt oder eine Welt mit FORTNITE erstellen? (z/f)" << endl;
		cin >> choice;
		system("cls");
		if (choice == "z" || choice == "f")
		{
			break;
		}
	}

	// Erstellt eine Instanz der Klasse Welt
	World newWorld;
	if (choice == "z")
	{
		newWorld = World(230, 60);
	}

	while (true)
	{
		// zeigt die Welt an
		newWorld.see();

		// updatet die Welt
		newWorld.update();

		// wartet 2 Sekunden
		Sleep(1000);

		// Loescht die alte Konsolenanzeige
		system("cls");
	}

	return 0;
	// compilen mit g++ -o GameOfLife.exe main.cpp World.cpp
}