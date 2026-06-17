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
 cout<<"\n Decimal Equivalent is: "<<decimal;
 cout<<"\n Hexadecimal Equivalent is: "<<hex<<uppercase<<decimal;
 cout<<"\n Octal Equivalent is: "<<oct<<decimal;
		
	
	return 0;
	
}
