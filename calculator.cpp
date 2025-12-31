#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"enter two number"<<endl;
	cin>>num1>>num2;
	char op;
	cout<<"input operator"<<endl;
	cin>>op;
	switch(op)
	{
		case'+':
			cout<<num1+num2<<endl;
			break;
			case'-':
			cout<<num1-num2<<endl;
			break;
			case'*':
			cout<<num1*num2<<endl;
			break;
			case'/':
			cout<<num1/num2<<endl;
			break;
			default:
				cout<<"enter another operator:";
				break;
				return 0;
	}
}
