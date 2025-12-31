#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    
    for (int i = 1; i <= num; i++) {
    	cout<<i<<endl;
            sum = sum + i; 
	} 
	
    cout << "Sum is: " << sum << endl;

    return 0;
}

