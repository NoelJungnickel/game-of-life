#pragma once


#include<iostream>
#include <stdlib.h>
#include<string>
#include<vector>
#include<time.h>
#include <Windows.h>


using namespace std;


class World {

public:

	/*Konstruktor von World
	erstellt einen Vektor grid
	zufällig gefüllt mit Lebenden und Toten Zellen*/
	World(int size, int rows); 

	//Zeigt auf der Konsole die Welt an
	void see();

	/*Ruft die livingNeigbours Funktion auf für jedes Feld.
	Berechnet ein neues Grid basierend auf den Regeln 
	und überschreibt das alte Grid damit*/
	void update();

private:

	int rows;
	vector<string> grid;

	/*berechnet für ein Feld i des Vectors grid
	die Anzahl lebender Nachbarn*/
	int livingNeigbours(int i);
};



