#include <iostream>
#include <cmath>

using namespace std;

double TriangleArea(double base, double height) {
    double T_rea =0.5 * base * height;
    return T_rea;
}

double RectangleArea(double length, double width) {
    double R_Area =length * width;
    return R_Area;
}

double SquareArea(double side) {
    double S_Area = side * side;
    return S_Area;
}

int main() {
    while (true) {
        cout << "Please select the area of the shape to calculate : " << endl;
        cout << "1. Triangle \n" ;
        cout << "2. Rectangle \n" ;
        cout << "3. Square \n" ;
        cout << "4. Quit Program \n";

        int select;
        cout << "Enter Selection : ";
        cin >> select;

        if (select == 1) {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double area = TriangleArea(base, height);
            cout << "The area of the triangle is: " << area << endl;
        } else if (select == 2) {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double area = RectangleArea(length, width);
            cout << "The area of the rectangle is: " << area << "\n\n";
        } else if (select == 3) {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            double area = SquareArea(side);
            cout << "The area of the square is: " << area << endl;
        } else if (select == 4) {
            cout << "Exiting the program..." << endl;
            break;
        } else {
            cout << "Your input was : " << select<<" which is an invalid input \n";
            cout <<"Please enter a valid input!!!";
        }
    }

    return 0;
}
