Write a program using functions: 
Create 2 functions to calculate the area and
perimeter of a rectangle, and the functions should return values. Pass sides of
the rectangle as arguments to function.Call functions and print results in
console. No need to take user inputs, just write down the values of sides in the code.

#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
double calculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

int main() {
    // Define the sides of the rectangle
    double length = 5.0;  // Length of the rectangle
    double width = 3.0;   // Width of the rectangle

    // Calculate the area and perimeter using functions
    double area = calculateArea(length, width);
    double perimeter = calculatePerimeter(length, width);

    // Print the results
    cout << "Rectangle with length " << length << " and width " << width << ":" << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
