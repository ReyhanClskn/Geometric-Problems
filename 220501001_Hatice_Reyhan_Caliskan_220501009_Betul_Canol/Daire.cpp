#define _USE_MATH_DEFINES //makes mathematical constants (M_PI, M_E, etc.) usable.
#include "Daire.h"
#include <cmath>
#include <iostream>
using namespace std;

//Constructors
Daire::Daire(Nokta merkez, double yaricap) : merkez(merkez), yaricap(yaricap) { //Constructor implementation
}

Daire::Daire(const Daire& other) : merkez(other.merkez), yaricap(other.yaricap) { //Copy constructor implementation
}

Daire::Daire(const Daire& other, int x) : merkez(other.merkez), yaricap(other.yaricap* x) { //Another constructor implementation
}

//Getters
Nokta Daire::getMerkez() {
    return this->merkez;
}

double Daire::getYaricap() {
    return this->yaricap;
}

//Setters
void Daire::setMerkez(Nokta nokta) {
    this->merkez = nokta;
}

void Daire::setYaricap(double yaricap) {
    this->yaricap = yaricap;
}

//Area
double Daire::alan() {
    return M_PI * pow(getYaricap(), 2); //Pi*r^2
}

//Perimeter
double Daire::cevre() { 
    return 2 * M_PI * getYaricap(); //2*Pi*r
}

//Intersection
int Daire::kesisim(Daire other) {
    //Distance between 2 points. sqrt((x2 -x1)^2 + (y2 - y1)^2)  Euclidean distance
    double distance = sqrt(pow(other.merkez.getX() - merkez.getX(), 2) + pow(other.merkez.getY() - merkez.getY(), 2));

    if (distance > yaricap + other.yaricap) {
        return 2; //No intersection.
    }
    else if (distance < abs(yaricap - other.yaricap)) { //abs = Absolute Value
        return 0; //One circle is inside another.
    }
    else {
        return 1; //Circles intersect.
    }
}

string Daire::toString() const {
    return "Merkez: (" + to_string(merkez.getX()) + ", " + to_string(merkez.getY()) + "), \nYaricap: " + to_string(yaricap);
}

void Daire::yazdir() const {
    cout << toString() << endl;
}