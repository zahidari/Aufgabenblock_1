#pragma once
#include<iostream>
#include <iomanip>
#include <string>
using namespace std;


extern double dGlobaleZeit;

class Fahrzeug
{
protected:
	double p_dGesamtStraecke = 0;
	double p_dGesamtZeit = 0; // gesamte zeit des Fahrzeugs
	double p_dZeit = 0; // die zeit die zuletzt simuliert ist.
private:
	const string  p_sName; // default "noName"
	const int  p_iID;
	const double p_dMaxGeschwindigkeit; // default 100

	static int p_iMaxID;//initalized in fahrzeug.cpp begins with 0

	


public:
	string testString = "public test string.";

	//constructor
	Fahrzeug(
		string name = "noName",
		double maxGeschwindigkeit = 100
	);

	// copy constractor gelöscht wegen dynamische elemente
	Fahrzeug(const Fahrzeug&) = delete; 

	//destructor
	virtual ~Fahrzeug();

	// getter
	string getName() {return p_sName;}
	int getID() {return p_iID;}
	double getMaxGeschwindigkeit() {return p_dMaxGeschwindigkeit;}
	double getGesamtStraeke() {return p_dGesamtStraecke;}
	double getGesamtZeit() { return p_dGesamtZeit; }
	double getZeit() { return p_dZeit; }
	// Setter
	void setGesamtStraeke(double x) {  p_dGesamtStraecke = x; }
	void setGesamtZeit(double x) {  p_dGesamtZeit = x; }
	void setZeit(double x) {  p_dZeit = x; }

	// Methoden
	virtual void vAusgabe() const;
	static void vKopf() ; // weil es static ist cosnt geht nicht!
	virtual void vSimulieren();
	virtual double dTanken(double menge);
};




