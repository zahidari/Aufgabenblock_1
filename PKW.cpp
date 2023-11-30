#include "PKW.h"

PKW::PKW(string name,
	double maxGeschwindigkeit,
	double tankVerbrauch,
	double tankVolumen
	)
	:Fahrzeug::Fahrzeug(name, maxGeschwindigkeit),
	p_dVerbrauch(tankVerbrauch),
	p_dTankVolumen(tankVolumen),
	p_dTankInhalt(tankVolumen/2)
{}
PKW::~PKW() { Fahrzeug::~Fahrzeug(); }
double PKW::getVerbrauch() { return p_dVerbrauch; }
double PKW::getTankVolumen() { return p_dTankVolumen; }
double PKW::getTankInhalt() { return p_dTankInhalt; }
void   PKW::setTankInhalt(double x) { p_dTankInhalt = x; }



void PKW::vAusgabe(ostream& o) const
{
	Fahrzeug::vAusgabe(o);
	cout << std::setw(10) << p_dTankInhalt;
}

void PKW::vSimulieren() 
{
	if (p_dTankInhalt > 0) {
		double deltaTime1 = dGlobaleZeit - p_dZeit;
		PKW::setGeschwindigkeit(PKW::getMaxGeschwindigkeit());
		// Berechnung der Strecke basierend auf der maximalen Geschwindigkeit
		double distanz = Fahrzeug::getMaxGeschwindigkeit() * deltaTime1;
		double verbrauchInLiter = PKW::p_dVerbrauch *(distanz / 100);
		if (p_dTankInhalt >= verbrauchInLiter)
			p_dTankInhalt -= verbrauchInLiter;
		else 
			p_dTankInhalt = 0;
		Fahrzeug::vSimulieren();
	}
	else
		PKW::setGeschwindigkeit(0);
}

double PKW::dTanken(double dMenge) {
	double wieVielLeer = PKW::p_dTankVolumen - PKW::p_dTankInhalt;
	if (dMenge >= wieVielLeer) {
		PKW::p_dTankInhalt += wieVielLeer;
		return wieVielLeer;
	}
		
	
	else {
		PKW::p_dTankInhalt += dMenge;
		return dMenge;
	}
		
	}

double PKW::dGeschwindigkeit()
{
	return Fahrzeug::dGeschwindigkeit();
}
