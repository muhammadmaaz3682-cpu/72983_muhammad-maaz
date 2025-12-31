#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int choice,bread,milk,eggs,juice,quantity;
	int price,totalprice,finalamount,final,total,discount,Rs;
	bread=100;
	milk=150;
	eggs=200;
	juice=300;
	cout<<"-----------menu----------"<<endl;
	cout<<"1.bread\t Rs.100"<<endl;
	cout<<"2.milk \t Rs. 150"<<endl;
	cout<<"3.eggs \t Rs.200"<<endl;
	cout<<"4.juice\tRs.300"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	cout<<"enter quantity"<<endl;
	cin>>quantity;
	switch(choice){
		case 1:
			total=bread*quantity;
			cout<<"bread"<<setw(10)<<quantity<<setw(10)<<bread<<setw(10)<<totalprice<<endl;
			break;
		case 2:
			total=milk*quantity;
				cout<<"milk"<<setw(10)<<quantity<<setw(10)<<milk<<setw(10)<<totalprice<<endl;
				break;
		case 3:
			total=eggs*quantity;
			cout<<"eggs"<<setw(10)<<quantity<<setw(10)<<eggs<<setw(10)<<totalprice<<endl;
			break;
		case 4:
			total=juice*quantity;
			cout<<"juice"<<setw(10)<<quantity<<setw(10)<<juice<<setw(10)<<totalprice<<endl;
			break;
		default:
			cout<<"enter valid choice"<<endl;
			break;
			total=price*quantity;
			if(total>1000){
			
				discount=(total/100)*10;
		}
			finalamount=total-discount;
			cout<<"setw(15)price:"<<price<<endl;
			cout<<"setw(15)quantity:"<<quantity<<endl;
			cout<<"setw(15)discount:"<<finalamount<<endl;
			cout<<"setw(15)total:"<<total<<endl;
	}
return 0;
}
