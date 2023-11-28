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



void PKW::vAusgabe() const
{
	Fahrzeug::vAusgabe();
	cout << std::setw(10) << p_dTankInhalt;
}

void PKW::vSimulieren() 
{
	Fahrzeug::vSimulieren();
}

double PKW::dTanken(double dMenge) {
	double wieVielLeer = PKW::p_dTankVolumen - PKW::p_dTankInhalt;
	if (dMenge >= wieVielLeer)
		return PKW::p_dTankVolumen;
	
	else
		return dMenge;
}
