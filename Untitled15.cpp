#include<iostream>
	using namespace std;
	
	int main() {
		int n;
		long long fact=1;
		cout<<"enter a number"<<endl;
		cin>>n;
		for (int i = 1; i <= n; i++){
		
		cout<<i<<endl;
			fact= fact*i;}
          cout << "factorial "<<n<<" is = " << fact << endl;
	return 0;
}
