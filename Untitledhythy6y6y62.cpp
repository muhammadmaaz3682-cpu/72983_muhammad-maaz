#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"==== MENU ===="<<endl;
    cout<<"1. Check even or odd"<<endl;
    cout<<"2. Check prime or not"<<endl;
    cout<<"3. Check alphabet (uppercase/lowercase)"<<endl;
    cout<<"4. Reverse multiplication table"<<endl;
    cout<<"5. Descending right-angle triangle pattern"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){

        //******** OPTION 1: EVEN / ODD ********
        case 1:{
            int num;
            cout<<"Enter a number: ";
            cin>>num;

            if(num % 2 == 0)
                cout<<num<<" is EVEN";
            else
                cout<<num<<" is ODD";
            break;
        }

        //******** OPTION 2: PRIME CHECK ********
        case 2:{
            int num;
            cout<<"Enter a number: ";
            cin>>num;

            bool isPrime = true;

            if(num <= 1){
                isPrime = false;
            } 
            else {
                for(int i = 2; i <= num/2; i++){
                    if(num % i == 0){
                        isPrime = false;
                        break;
                    }
                }
            }

            if(isPrime)
                cout<<num<<" is PRIME";
            else
                cout<<num<<" is NOT PRIME";

            break;
        }

        //******** OPTION 3: ALPHABET CHECK ********
        case 3:{
            char ch;
            cout<<"Enter a character: ";
            cin>>ch;

            if(ch >= 'A' && ch <= 'Z')
                cout<<"Uppercase Alphabet";
            else if(ch >= 'a' && ch <= 'z')
                cout<<"Lowercase Alphabet";
            else
                cout<<"Not an alphabet";

            break;
        }

        //******** OPTION 4: REVERSE TABLE ********
        case 4:{
            int num, limit;
            cout<<"Enter number: ";
            cin>>num;
            cout<<"Enter limit: ";
            cin>>limit;

            for(int i = limit; i >= 1; i--){
                cout<<num<<" x "<<i<<" = "<<num*i<<endl;
            }
            break;
        }

        //******** OPTION 5: DESCENDING TRIANGLE ********
        case 5:{
            int rows;
            cout<<"Enter number of rows: ";
            cin>>rows;

            for(int i = rows; i >= 1; i--){
                for(int j = 1; j <= i; j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            break;
        }

        default:
            cout<<"Invalid choice!";
    }

    return 0;
}
      
