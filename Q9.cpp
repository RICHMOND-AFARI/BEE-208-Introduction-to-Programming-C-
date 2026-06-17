#include<iostream>

using namespace std;
main(){
	
	int x;
	int y;
	int larger;
	
	cout<<"Enter first integer: ";
	cin>>x;
	
	cout<<"Enter second integer: ";
	cin>>y;
	
	larger = (x > y) ? x:y;
	
	cout<<"The largest number is: "<<larger;
	
	
	return 0;
}
