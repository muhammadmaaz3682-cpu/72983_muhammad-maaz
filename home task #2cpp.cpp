#include <iostream>
using namespace std;
int main() {
    const int students= 19;
    int marks[students];
    int total = 0;
    cout << "Enter quiz marks of 10 students: " << endl;
    for(int i = 0; i < students; i++) {
        cout <<"Student "<<i+1<< ": ";
        cin >>marks[i];
    }
    for(int i= 0; i<students; i++) {
        total += marks[i];
    }
     float average = total/students;
    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
     return 0;
}

