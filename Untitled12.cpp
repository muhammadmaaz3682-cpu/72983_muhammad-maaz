#include <iostream>
using namespace std;

int main() {
    int sum = 0, num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }

    cout << "Sum of all odd numbers from 1 to " << num << " is " << sum << endl;

    return 0;
}

