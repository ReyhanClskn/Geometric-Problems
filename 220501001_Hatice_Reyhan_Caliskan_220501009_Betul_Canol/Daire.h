#pragma once
#include "Nokta.h"
#include <iostream>
using namespace std;

class Daire {
private:
    Nokta merkez;
    double yaricap;

public:
//Constructors
    Daire(Nokta merkez, double yaricap); //Constructor that takes center and radius as parameters
    Daire(const Daire& other); //Constructor that copies another circle object
    Daire(const Daire& other, int x); //Constructor function that takes center and a number as parameters

//Getter
    Nokta getMerkez();
    double getYaricap();

//Setter
    void setMerkez(Nokta nokta);
    void setYaricap(double yaricap);

//Methods
    double alan();
    double cevre();
    int kesisim(Daire other);

    string toString() const;
    void yazdir() const;
};