#include<iostream>
using namespace std;


    int area(int side,int h) {                      // Square
    return side * side;
    }
    int area(int length, int breadth) {       // Rectangle
        return length * breadth;
    }
    double area(double radius) {              // Circle
        return 3.14159 * radius * radius;
    }

    int main() {
        cout << "Square(5): " << area(5) << endl;          // 25
        cout << "Rectangle(4,6): " << area(4, 6) << endl;  // 24
        cout << "Circle(3.0): " << area(3.0) << endl;      // 28.27
        return 0;
    }
    