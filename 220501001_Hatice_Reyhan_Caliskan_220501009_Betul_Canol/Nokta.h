#pragma once
#include <string>
#include <iostream>
using namespace std;

class Nokta {
private:
    double x;
    double y;

public:
    Nokta(); //No parameters
    Nokta(double xy); //Single parameter
    Nokta(double x, double y); //Double parameter
    Nokta(const Nokta& other); //Copy of another point
    Nokta(const Nokta& other, double offset_x, double offset_y); //Constructor that creates a new point with another point and offset values

//Getter
    double getX() const;
    double getY() const;

//Setter
    void setX(double x);
    void setY(double y);

    void set(double x, double y); //Method that sets two coordinates at the same time

    string toString() const;
    void yazdir() const;
};