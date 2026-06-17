#include<iostream>

using namespace std;
main(){
	
	int z;
	
	cout<<"Enter number: ";
	cin>>z;
	
	if ((z % 2 !=0) && (z % 3 ==0)){
		
		cout<<"Number is Odd and Divisible by 3";
		
	} else {
		cout<<"Condition mismatch";
	}
	
	return 0;
}
