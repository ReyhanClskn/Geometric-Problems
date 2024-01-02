#include "DogruParcasi.h"
#include <cmath>
#include <iostream>
using namespace std;


DogruParcasi::DogruParcasi(Nokta a, Nokta b) {
    setA(a); //Start
    setB(b); //End
}

DogruParcasi::DogruParcasi(DogruParcasi& dogruParcasi) {
    setA(dogruParcasi.getA()); //Copy start
    setB(dogruParcasi.getB()); //Copy end
}

//Construtor that uses "ortaNokta" "uzunluk" and "slope" to create "DogruParcasi" object.
DogruParcasi::DogruParcasi(Nokta ortaNokta, double uzunluk, double slope) {
    double DistanceX = uzunluk / (2 * sqrt(1 + pow(slope, 2)));
    double DistanceY = slope * DistanceX;

    setA(Nokta(ortaNokta.getX() - DistanceX, ortaNokta.getY() - DistanceY));
    setB(Nokta(ortaNokta.getX() + DistanceX, ortaNokta.getY() + DistanceY));
}

Nokta DogruParcasi::getA() {
    return this->a;
}

Nokta DogruParcasi::getB() {
    return this->b;
}

void DogruParcasi::setA(Nokta nokta) {
    this->a = nokta;
}

void DogruParcasi::setB(Nokta nokta) {
    this->b = nokta;
}

//Lenght of "DogruParcasi"
double DogruParcasi::uzunluk() {
    return sqrt(pow(getB().getX() - getA().getX(), 2) + pow(getB().getY() - getA().getY(), 2));
}

//Function that finds the intersection point with the given point.
Nokta DogruParcasi::kesisimNoktasi(Nokta nokta) {
    double slope = (getB().getY() - getA().getY()) / (getB().getX() - getA().getX());

    double x = (nokta.getY() - getA().getY()) / slope;

    double y = slope * x + getA().getY();

    return Nokta(x, y);
}

//Function that returns the midpoint of "DogruParcasi"
Nokta DogruParcasi::ortaNokta() {
    return Nokta((getA().getX() + getB().getX()) / 2, (getA().getY() + getB().getY()) / 2);
}

//Function that returns a string containing the properties of "DogruParcasi".
string DogruParcasi::toString() {
    return getA().toString() + "-" + getB().toString();
}

//Print "DogruParcasi"s properties.
void DogruParcasi::yazdir() {
    cout << toString() << endl;
}