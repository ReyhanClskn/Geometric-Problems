#pragma once
#include "Nokta.h"

class DogruParcasi {
private:
    Nokta a;
    Nokta b;

public:
    DogruParcasi(Nokta a, Nokta b); //Constructor that takes two extremes.
    DogruParcasi(DogruParcasi& dogruParcasi); //Copying constructor.
    DogruParcasi(Nokta ortaNokta, double uzunluk, double slope); //Constructor that takes midpoint, length and slope.

//Getter
    Nokta getA();
    Nokta getB();

//Setter
    void setA(Nokta point);
    void setB(Nokta point);
  
//Methods
    double uzunluk(); //Method to calculate the length of a line segment
    Nokta kesisimNoktasi(Nokta nokta); //Method that calculates the intersection point of a line segment drawn perpendicular to a line segment from a point
    Nokta ortaNokta(); //Method that calculates the midpoint of a line segment

    string toString();
    void yazdir();
};