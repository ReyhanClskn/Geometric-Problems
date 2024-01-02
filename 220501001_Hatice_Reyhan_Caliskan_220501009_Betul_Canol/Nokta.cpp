#include "Nokta.h"
#include <iomanip>
#include <iostream>
using namespace std;

//Constructor without parameters: The coordinates of the point are set to the origin.
Nokta::Nokta() : x(0), y(0) {}

//Single parameter constructor: Two coordinates are assigned the same value.
Nokta::Nokta(double xy) : x(xy), y(xy) {}

//Two-parameter constructor: Two double variables are assigned for x and y coordinates, respectively.
Nokta::Nokta(double x, double y) : x(x), y(y) {}

//Constructor that copies another point.
Nokta::Nokta(const Nokta& other) : x(other.x), y(other.y) {}

//Constructor that creates a new point with another point and offset values.
Nokta::Nokta(const Nokta& other, double offset_x, double offset_y) : x(other.x + offset_x), y(other.y + offset_y) {}

//set and get methods for X coordinate.
void Nokta::setX(double x) {
    this->x = x;
}

double Nokta::getX() const {
    return x;
}

//set and get methods for Y coordinate.
double Nokta::getY() const {
    return y;
}

void Nokta::setY(double y) {
    this->y = y;
}

//Method that sets two coordinates at the same time.
void Nokta::set(double x, double y) {
    this->x = x;
    this->y = y;
}

//Method that returns a String representation of point coordinates.
string Nokta::toString() const {
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}

//Method that prints coordinates on the screen.
void Nokta::yazdir() const {
    cout << toString() << endl;
}