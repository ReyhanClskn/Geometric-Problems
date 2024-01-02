#define _USE_MATH_DEFINES
#include "Ucgen.h"
#include "DogruParcasi.h" 
#include <cmath>
#include <iostream>
using namespace std;

Ucgen::Ucgen(const Nokta& noktaA, const Nokta& noktaB, const Nokta& noktaC) {
    setA(noktaA);
    setB(noktaB);
    setC(noktaC);
}

void Ucgen::setA(const Nokta& nokta) {
    noktaA = nokta;
}

void Ucgen::setB(const Nokta& nokta) {
    noktaB = nokta;
}

void Ucgen::setC(const Nokta& nokta) {
    noktaC = nokta;
}

Nokta Ucgen::getA() const {
    return noktaA;
}

Nokta Ucgen::getB() const {
    return noktaB;
}

Nokta Ucgen::getC() const {
    return noktaC;
}

std::string Ucgen::toString() const {
    return "Ucgen: " + noktaA.toString() + " " + noktaB.toString() + " " + noktaC.toString();
}

double Ucgen::alan() const {
    double x1 = noktaA.getX(), y1 = noktaA.getY();
    double x2 = noktaB.getX(), y2 = noktaB.getY();
    double x3 = noktaC.getX(), y3 = noktaC.getY();

    double alan = 0.5 * abs((x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3));
    return alan;
}

double Ucgen::cevre() const {
    Nokta A(noktaA);
    Nokta B(noktaB);
    Nokta C(noktaC);

    DogruParcasi dogru1(A, B);
    DogruParcasi dogru2(A, C);
    DogruParcasi dogru3(B, C);

    double cevre = dogru1.uzunluk() + dogru2.uzunluk() + dogru3.uzunluk();
    return cevre;
}

double* Ucgen::acilar() const {
    Nokta A(noktaA);
    Nokta B(noktaB);
    Nokta C(noktaC);

    DogruParcasi side1(A, B);
    DogruParcasi side2(A, C);
    DogruParcasi side3(B, C);

    double a = side1.uzunluk();
    double b = side2.uzunluk();
    double c = side3.uzunluk();

    double* acilar = new double[3];

    acilar[0] = acos((b * b + c * c - a * a) / (2 * b * c)) * (180 / M_PI);
    acilar[1] = acos((a * a + c * c - b * b) / (2 * a * c)) * (180 / M_PI);
    acilar[2] = acos((a * a + b * b - c * c) / (2 * a * b)) * (180 / M_PI);

    return acilar;
}