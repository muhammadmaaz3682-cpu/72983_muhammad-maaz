#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;
int main() {
 int choice;
 bool running = true;
 while (running) {
 cout << "\n========= CALCULATOR MENU =========\n";
 cout << "1. Addition of two integers\n";
 cout << "2. Subtraction of two integers\n";
 cout << "3. Multiplication of two integers\n";
 cout << "4. Division of two integers\n";
 cout << "5. Addition of two floating point numbers\n";
 cout << "6. Subtraction of two floating point numbers\n";
 cout << "7. Multiplication of two floating point numbers\n";
 cout << "8. Division of two floating point numbers\n";
 cout << "9. Sine\n";
 cout << "10. Cosine\n";
 cout << "11. Tangent\n";
 cout << "12. Square root\n";
 cout << "13. Square\n";
 cout << "14. Cube\n";
 cout << "15. Exit\n";
 cout << "===================================\n";
 cout<<"muhammad maaz 72983"<<endl;
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1: {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 cout << "Result = " << a + b << endl;
 break;
 }
 case 2: {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 cout << "Result = " << a - b << endl;
 break;
 }
 case 3: {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 cout << "Result = " << a * b << endl;
 break;
 }
 case 4: {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 if (b != 0)
 cout << "Result = " << a / b << endl;
 else
 cout << "Error! Division by zero." << endl;
 break;
 }
 case 5: {
 float x, y;
 cout << "Enter two floating point numbers: ";
 cin >> x >> y;
 cout << "Result = " << x + y << endl;
 break;
 }
 case 6: {
 float x, y;
 cout << "Enter two floating point numbers: ";
 cin >> x >> y;
 cout << "Result = " << x - y << endl;
 break;
 }
 case 7: {
 float x, y;
 cout << "Enter two floating point numbers: ";
 cin >> x >> y;
 cout << "Result = " << x * y << endl;
 break;
 }
 case 8: {
 float x, y;
 cout << "Enter two floating point numbers: ";
 cin >> x >> y;
 if (y != 0)
 cout << "Result = " << x / y << endl;
 else
 cout << "Error! Division by zero." << endl;
 break;
 }
 case 9: {
 double angle;
 cout << "Enter angle in degrees: ";
 cin >> angle;
 angle = angle * M_PI / 180;
 cout << "Sine = " << sin(angle) << endl;
 break;
 }
 case 10: {
 double angle;
 cout << "Enter angle in degrees: ";
 cin >> angle;
 angle = angle * M_PI / 180;
 cout << "Cosine = " << cos(angle) << endl;
 break;
 }
 case 11: {
 double angle;
 cout << "Enter angle in degrees: ";
 cin >> angle;
 angle = angle * M_PI / 180;
 cout << "Tangent = " << tan(angle) << endl;
 break;
 }
 case 12: {
 double num;
 cout << "Enter number: ";
 cin >> num;
 if (num >= 0)
 cout << "Square Root = " << sqrt(num) << endl;
 else
 cout << "Error! Square root of negative number not defined." <<
endl;
 break;
 }
 case 13: {
 double num;
 cout << "Enter number: ";
 cin >> num;
 cout << "Square = " << pow(num, 2) << endl;
 break;
 }
 case 14: {
 double num;
 cout << "Enter number: ";
 cin >> num;
 cout << "Cube = " << pow(num, 3) << endl;
 break;
 }
 case 15:
 cout << "Exiting the calculator. Goodbye!" << endl;
 running = false;
 break;
 default:
 cout << "Invalid choice! Please select a valid option." << endl;
 }
 }
 return 0;
}
