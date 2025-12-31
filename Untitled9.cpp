 #include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number:\n";
    cin >> num;

    for (int i = 10; i >= 1; i--) {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    return 0;
}

