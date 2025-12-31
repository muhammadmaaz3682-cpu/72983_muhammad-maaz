#include <iostream>
using namespace std;

int main() {
    int num, sum = 0; 

    cout << "Enter 10 numbers: " << endl;
 
    for (int i = 1; i <= 10; i++) {
        cout << "Number " << i << ": ";
        cin >> num;

       if (num % 2 != 0) {
            sum = sum + num; 
        }
    }

    cout << "\nSum of all odd numbers: " << sum << endl;

    return 0;
}
 	
