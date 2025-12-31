#include<iostream>
using namespace std;
int main(){
	int x,table,starting,ending;
	cout<<"enter your table"<<endl;
	cin>>table;
	cout<<"starting"<<endl;
	cin>>starting;
	cout<<"ending"<<endl;
	cin>>ending;
		for(x=starting;x>=ending;x++)
		{
			cout<table<<"x"<<"="<<x*table<<endl;
		}
		return 0;
}
