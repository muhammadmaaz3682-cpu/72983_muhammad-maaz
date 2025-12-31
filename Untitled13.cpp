#include<iostream>
using namespace std;

int main() {
    int num, evensum = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "even numbers from 1 to " << num << " are: ";

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {  
            cout << i << " ";
            evensum = evensum + i;
        }
    }

    cout << "\nSum of even numbers from 1 to " << num << " is = " << evensum << endl;

    return 0;
}

