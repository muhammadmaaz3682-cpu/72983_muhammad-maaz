#include<iostream>
using namespace std;
int main(){
	int num,evensum=0,oddsum=0;
	cout<<"number enter ka"<<endl;
	cin>>num;
	for(int i=1; i<=num; i++){
		if(i%2!=0){
			oddsum=oddsum+i;
		}
	else{
		evensum=evensum+i;	
	}
	 
	}
	cout<<"add odd number from 1 to " << " is= " << oddsum << endl;
	cout<<"add even number from 1 to " << " is= " << evensum << endl;
	return 0;
	}
