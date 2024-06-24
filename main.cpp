#include "Header.h"

int main()
{
	// Hier den Seed fuer Zufallszahlen
	srand(time(NULL));

	// Erstellt eine Instanz der Klasse Welt
	World myWorld(120, 40);

	while (true)
	{
		// zeigt die Welt an
		myWorld.see();

		// updatet die Welt
		myWorld.update();

		// wartet 2 Sekunden
		Sleep(2000);

		// Loescht die alte Konsolenanzeige
		system("cls");
	}

	return 0;
	// compilen mit g++ -o GameOfLife.exe main.cpp World.cpp
}
