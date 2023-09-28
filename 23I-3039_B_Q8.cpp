// Abdul Saboor   Roll NO: 23I-3039   Assignment=1
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float num,a=0,b=0,c=0,d=0;
	bool num1,num2,num3,num4,sum1,sum2,sum3,sum4;
	
	cout<<"Enter the Number of Gallons: ";
	cin>>num;
	
	num1 = num <= 100;
	sum1 = (num1 == 1 ) && (a = num*0.45) && cout<<"The Toal Amount with Taxes is: "<<fixed<<setprecision(2)<<a+(a*0.14);
	sum1 = (num1 == 0) && (a = 100*0.45);
	
	num2 = num <=350 && num>100;
	sum2 = (num2 == 1) && (b = (num-100)*0.85) && cout<<"The Toal Amount with Taxes is: "<<fixed<<setprecision(2)<<(b+a)+(b+a)*0.14;
	sum2 = (num2 == 0) && (b = 250*0.85);
	
	num3 = num <=600 && num>=350;
	sum3 = (num3 == 1) && (c = (num-350)*1.45) && cout<<"The Toal Amount with Taxes is: "<<fixed<<setprecision(2)<<b+a+c+(b+a+c)*0.14;
	sum3 = (num3 == 0) && (c = 250*1.45);
	
	
	num4 = num>=600;
	sum4 = (num4 == 1) && (d = (num-600)*2.60) && cout<<"The Toal Amount with Taxes is: "<<fixed<<setprecision(2)<<b+a+c+d+(b+a+c+d)*0.14;
	

	
	return 0;
}

