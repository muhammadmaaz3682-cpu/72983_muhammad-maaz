#include<iostream>
	using namespace std;
	
	int main() {
		int fact,n,limit;
		cout<<"how many wnt to acrotat:";
		cin>>limit;
		for(int n=1; n<=limit;n++)
			long long fact=1;
		for (int i = 1; i <= n; i++)
		fact=fact*i;
	
		
          cout <<"factorial "<<n<<" is= " <<fact<< endl;
	return 0;
}
