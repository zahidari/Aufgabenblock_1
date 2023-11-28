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
	p_dMaxGeschwindigkeit((maxGeschwindigkeit>=0)? maxGeschwindigkeit:0)
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
void Fahrzeug::vAusgabe() const{

	std::cout
		<< setw(2) << p_iID << " "
		<< setw(10) << p_sName << " "
		<< std::setw(20) << std::fixed << std::setprecision(2) << p_dMaxGeschwindigkeit << " "
		<< std::setw(12) << p_dGesamtStraecke;
}

void Fahrzeug::vKopf()  {
	std::cout
		<< setiosflags(ios::right)
		<< std::setw(2) << "ID" << " "
		<< std::setw(10) << "Name" << " "
		<< std::setw(20) << "MaxGeschwindigkeit" << " "
		<< std::setw(13) << "Gesamtstrecke" << " " 
		<< std::setw(10) << "TankInhalt" << " "
		<< std::endl;
	std::cout <<
		 "-----------------------------------------------------------"
		<< resetiosflags(ios::right)
		<<std::endl;
}
 
 void Fahrzeug::vSimulieren()  {
	// Überprüfen, ob die Simulation bereits für diese Zeiteinheit durchgeführt wurde
	if (p_dZeit < dGlobaleZeit) {
		// Zeit seit der letzten Simulation berechnen
		double deltaTime = dGlobaleZeit - p_dZeit;

		// Berechnung der Strecke basierend auf der maximalen Geschwindigkeit
		double distanz = p_dMaxGeschwindigkeit * deltaTime;

		// Aktualisierung der Gesamtstrecke des Fahrzeugs
		p_dGesamtStraecke += distanz;

		// Aktualisierung der Gesamtzeit des Fahrzeugs und der letzten Abfertigungszeit
		p_dGesamtZeit += deltaTime;
		p_dZeit = dGlobaleZeit; // Aktualisieren der letzten Abfertigungszeit

	}
	else {
		
		std::cout << "Fahrzeug " << Fahrzeug::getName() << " wurde bereits in dieser Zeiteinheit bearbeitet." << std::endl;
	}
}
 double Fahrzeug::dTanken(double menge) {
	 return 0;
 }
