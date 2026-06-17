# include<iostream>
# include<string>

using namespace std;

main(){
	string x;
	int decimal;
	
	cout<<"Enter the binary number: ";
	cin>>x;
	
for (size_t i = 0; i < x.length(); i++) {
		char bit = x[i];
		    decimal = decimal * 2 + (bit - '0');
		    
}

    cout<<"Decimal Equivalent is: "<<decimal;
		
	
	return 0;
	
}
