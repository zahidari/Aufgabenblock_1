#pragma once
#include<iostream>
#include <string>
using namespace std;

//globales 
//#define p_iMaxID 0;

class Fahrzeug
{
private:
	string const p_sName;
	int const p_iID;
	static int p_iMaxID;
	

public:
	string testString = "public test string.";

	//constructor
	Fahrzeug(string name = "");// default name is empty
	//destructor
	virtual ~Fahrzeug();

	// getter setter
	string getName() {
		return p_sName;
	}
	int getID() {
		return p_iID;
	}


	// Methoden
	void vAusgabe() {
		cout << "ID:" << getID()
			<< " Fahrzeug: " << getName()
			<< endl;
	}
};
