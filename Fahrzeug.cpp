#include "Fahrzeug.h"

//Initializierung des static members der Klasse Fahrzeug
int Fahrzeug::p_iMaxID = 0;


//constractor
Fahrzeug::Fahrzeug(
	string name,
	double maxGeschwindigkeit
)
	:p_sName(name),
	p_iID(++p_iMaxID),
	p_iMaxGeschwindigkeit((maxGeschwindigkeit>=0)? maxGeschwindigkeit:0)
{

	cout << "ID:" << p_iID
		<< " Fahrzeug: " << p_sName
		<< "  wurde erstellt." << endl;

}

// destructor
Fahrzeug::~Fahrzeug(){
	cout << "ID:" << p_iID
		<< " Fahrzeug: " << p_sName
		<< "  wurde GELOESCHT." << endl;
}

// Methoden
void Fahrzeug::vAusgabe() {


	cout << Fahrzeug::getID()
		<< Fahrzeug::getName()
		<< Fahrzeug::getMaxGeschwindigkeit()
		<< Fahrzeug::getGesamtStraeke()
		<<endl;
}

