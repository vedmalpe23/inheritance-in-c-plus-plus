#include <iostream>
#include <string>
using namespace std;

// Base class
class Shape {
public:
    string color = "Blue";
    void displayColor() {
        cout << "Color: " << color << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void area() {
        cout << "Area formula: πr^2" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void area() {
        cout << "Area formula: length × width" << endl;
    }
};

int main() {
    Circle c1;
    Rectangle r1;

    // From Shape
    c1.displayColor(); // inherited
    r1.displayColor(); // inherited

    // From derived classes
    c1.area();
    r1.area();

    return 0;
}
/*OUTPUT:
Color: Blue
Color: Blue
Area formula: πr^2
Area formula: length × width
