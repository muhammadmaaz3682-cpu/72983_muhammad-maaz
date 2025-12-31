#include <iostream>
using namespace std;

int main() {
    int salary[6];

    // Input
    cout << "Enter salaries of 6 employees:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
    }

    // Output
    cout << "\nSalaries of Employees:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Employee " << i + 1 << ": " << salary[i] << endl;
    }

    return 0;
}

