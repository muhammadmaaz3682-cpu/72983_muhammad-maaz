#include<iostream>
using namespace std;
int main(){
    int num,mun;
	cout<<"entr a num"<<endl;
	cin>>num>>mun;
 
	
	for(int a=num; a<=mun; a++){
		for(int b=num; b<=mun; b++){
			cout<<num<<mun<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
