// Abdul Saboor   Roll NO: 23I-3039   Assignment=1
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double N;
	float i;
	const int c=30;
	int b,p;
	
	cout<<"Enter the Balance: ";
	cin>>b;
	cout<<"Enter the Monthly Payment: ";
	cin>>p;
	cout<<"Enter the Interest Rate: ";
	cin>>i;
	
	i = (i/365.0);
	N = -(1.0/c) * (log(1 + ((b / p) * (1 - pow(1+i,c) ) ) ) )/ (log(1+i));  
	
	cout<<"The Answer is: "<<N;
	
	return 0;
}
