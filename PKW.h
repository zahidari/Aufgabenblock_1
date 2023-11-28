#pragma once
#include "Fahrzeug.h"

class PKW : public Fahrzeug
{
private:
public:
	PKW();
	~PKW();
	void vAusgabe() const override;
	void vSimulieren()  override;
};

