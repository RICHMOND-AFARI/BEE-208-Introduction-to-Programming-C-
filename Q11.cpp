#include<iostream>
using namespace std;

main(){
	
	int a;
	int b;
	
	
	cout<<"Enter first variable: ";
	cin>>a;
	
	cout<<"Enter second variable: ";
	cin>>b;
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout<<"After swap: \n a = "<<a<<"\n b = "<<b;
	
	return 0;
}
