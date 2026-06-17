#include<iostream>

using namespace std;

main(){
	
	int a;
	
	cout<<"Enter a number: ";
	cin>>a;
	
	if (a>0 && (a & (a - 1)) ==0){
		cout<<"Is a power of 2";
		
	} else {
		cout<<"Not a power of 2";
	}
	
	return 0;
}
