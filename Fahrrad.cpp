#include "Fahrrad.h"
Fahrrad::Fahrrad(string name, double maxGeschwindigkeit)
    : Fahrzeug(name, maxGeschwindigkeit) {
    // Additional initialization for a bicycle, if necessary
}

Fahrrad::~Fahrrad()
{
    Fahrzeug::~Fahrzeug();
}

void Fahrrad::vAusgabe(ostream& o) const
{
    Fahrzeug::vAusgabe(o);
}

void Fahrrad::vSimulieren()
{
    Fahrzeug::vSimulieren();

}

double Fahrrad::dTanken(double dMenge) {
    //Fahrrad::setGeschwindigkeit(20);
	return 0;
}

double Fahrrad::dGeschwindigkeit() {
    // Berechne die aktuelle Geschwindigkeit basierend auf der zurückgelegten Strecke
    double abnahmeProzent = (getGesamtStraeke() / 20) * 10;
    double reduzierteGeschwindigkeit = getMaxGeschwindigkeit() * (1 - (abnahmeProzent / 100));
    if (reduzierteGeschwindigkeit < 12)
        reduzierteGeschwindigkeit = 12;
    setGeschwindigkeit(reduzierteGeschwindigkeit);

    //return (reduzierteGeschwindigkeit > 12) ? reduzierteGeschwindigkeit : 12;
    return reduzierteGeschwindigkeit;
}
