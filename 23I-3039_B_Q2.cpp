// Abdul Saboor   Roll NO: 23I-3039   Assignment=1
#include<iostream>
using namespace std;
int main(){
		
	int a,b,c;
	int num1,num2,num3;
	bool check, check1;
	cout<<"Enter first Number: ";
	cin>>a;
	cout<<"Enter second Number: ";
	cin>>b;
	cout<<"Enter third Number: ";
	cin>>c;
	
	num1 = (a%10);
	num2 = (b%10);
	num3 = (c%10);
	
	check = (num1==num2) || num2==num3 || num1==num3;
	
	
	cout<<"The Result is: "<<boolalpha<<check;
	
	
	
	return 0;                     
}
