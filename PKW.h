#pragma once
#include "Fahrzeug.h"
#include<iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

class PKW : public Fahrzeug
{
protected:
	double const p_dVerbrauch = 5; // lt/100km
	double const p_dTankVolumen = 55;
	double p_dTankInhalt = 55;

public:
	PKW(
		string name = "noName",
		double maxGeschwindigkeit = 100,
		double tankVerbrauch = 5,
		double tankVolumen = 55
	);
	~PKW();
	//getter setter
	double getVerbrauch();
	double getTankVolumen();
	double getTankInhalt();
	void setTankInhalt(double x);

	//methoden
	void vAusgabe() const override;
	void vSimulieren()  override;
	double dTanken(double dMenge = std::numeric_limits<double>::infinity()) override;
};

