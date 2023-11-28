#pragma once
#include "Fahrzeug.h"
class Fahrrad : public Fahrzeug
{
private:
public:
	void vAusgabe() const override;
	void vSimulieren() override;
};

