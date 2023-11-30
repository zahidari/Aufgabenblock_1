#pragma once
#include "Fahrzeug.h"
class Fahrrad :
    public Fahrzeug
{
private:
protected:
    
public:
    Fahrrad(
        string name = "noName",
        double maxGeschwindigkeit = 20
    );
    ~Fahrrad();
    Fahrrad(const Fahrrad&) = delete;


    void vAusgabe(ostream&) const override;
    void vSimulieren() override;
    double dTanken(double dMenge) override;
    double dGeschwindigkeit() override;
};

