#pragma once
#include "Nokta.h"
#include "DogruParcasi.h"

class Ucgen {
private:
    Nokta noktaA;
    Nokta noktaB;
    Nokta noktaC;

public:
    Ucgen(const Nokta& NoktaA, const Nokta& NoktaB, const Nokta& NoktaC);

//Getters n Setters
    Nokta getA()const;
    void setA(const Nokta& a);

    Nokta getB() const;
    void setB(const Nokta& b);

    Nokta getC() const;
    void setC(const Nokta& c);

//Returning triangles info as string.
    string toString() const;
    double alan() const;
    double cevre() const;

//Returning the interior angles of a triangle as array.
    double* acilar() const;
};