#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"enter a number<<\n";
	cin>>num;
	for(int i=1; i<=num; i++){
	
	if(i%2!=0){
		sum=sum+i;
	}
     }
    cout<<"add odd num" << "is" <<endl;
    return 0;
}
