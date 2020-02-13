// LAB4_6.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double radius,
area,
circum;
const float PI = 3.14159;

int main()
{
    cout << "Enter radius of circle: ";
    cin >> radius;

    circum = 2 * PI * radius;
    area = PI * pow(radius, 2);

    cout << "\nCircumference of circle is: " << circum << endl;
    cout << "Area of circle is: " << area << endl;

}


