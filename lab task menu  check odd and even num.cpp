#include<iostream>
using namespace std;
int main(){
int choice;
cout<<"====menu===="<<endl;
cout<<"1.check even or odd"<<endl;
cout<<"2.check prime or not"<<endl;
cout<<"3.check alphabet(upper case\lowercase)"<<endl;
cout<<"4.reverse multiplication table"<<endl;
cout<<"5.descending right-angle traingle pattern"<<endl;
cout<<"enter your choice:";
cin>>choice;
switch (choice){
 
	case 1:{
		int num;
		cout<<"enter a number:";
		cin>>num;
		if(num%2==0)
		cout<<num<<"is odd";
		break;
	}
 
	case 2:{
		int num;
		bool is prime=true;
		if(num<==1){
			is prime=false;
			}else{
				for(int i=2;i<=num\2;i++){
					if(num%i==0){
						is prime=false;
						break;}
						if(is prime)
						cout<<num<<"is prime";
						else cout<<num<<"is not prime";
						break;
					}
					case 3:
						{char ch;
						cout<<"enter character:";
						cin>>ch;
						if(ch='A'&& ch='Z')
						cout<<"uppercase":
							else if (ch='a'ch<='Z')
							cout<<"lower case";
							else cout<<"not alphabet";
							berak;
						}
						\\****option 4:reverse table ****
						case 4
						int num,limit;
						cout<<"enter number:";
						cin>>num;
						cout<<"enter limit:";
						cin>>limit;
						for(int i=limit;i>=1;i--){
							cout<<num<<"x"<<i<<"_"<<num*i<<endl;
						}
					break;
				}
				\\****option 5:descending triangle****
				case 5:{
					int rows;
					cout<<"enter number of rows:";
					cin>>rows;
					for(int i=rows;i>=1;j++){
						cout<<"*";}
						cout<<endl;}
					break;
				}
				defauld:
					cout<<invalid choice!";
			}
			return o;
			}
			}
		}
		break;
	}
}

 

