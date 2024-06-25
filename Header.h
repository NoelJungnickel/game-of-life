#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <time.h>
#include <Windows.h>

using namespace std;

class World
{

public:
	/*Konstruktor von World
	erstellt einen Vektor grid
	zufaellig gefuellt mit Lebenden und Toten Zellen*/
	World(int size, int rows);

	// Zeigt auf der Konsole die Welt an
	void see();

	/*Ruft die livingNeigbours Funktion auf fuer jedes Feld.
	Berechnet ein neues Grid basierend auf den Regeln
	und Ueberschreibt das alte Grid damit*/
	void update();

private:
	vector<string> grid;

	/*berechnet fuer ein Feld i des Vectors grid
	die Anzahl lebender Nachbarn*/
	int livingNeigbours(int i, int j);
};
