#include<iostream>

using namespace std;

main(){
	
	float m;
	float n;
	float y;
	
	
	cout<<"Input first number: ";
	cin>>m;
	
	cout<<"Input second number: ";
	cin>>n;
	
	
	y = (m > n)? m : n;
	cout<<"The larger number is: "<<y;
	
	return 0;
}
