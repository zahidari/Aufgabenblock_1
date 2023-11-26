#include "Fahrzeug.h"

//Initializierung des static members der Klasse Fahrzeug
int Fahrzeug::p_iMaxID = 0;


//constractor
Fahrzeug::Fahrzeug(string name) :p_sName(name), p_iID(++p_iMaxID) {
	cout <<"ID:"<< p_iID 
		<< " Fahrzeug: " << p_sName 
		<<"  wurde erstellt." << endl;
	
}
Fahrzeug::~Fahrzeug(){
	cout << "ID:" << p_iID
		<< " Fahrzeug: " << p_sName
		<< "  wurde GELOESCHT." << endl;
}

