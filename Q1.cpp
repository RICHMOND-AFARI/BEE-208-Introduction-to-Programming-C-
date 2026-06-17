# include<iostream>
using namespace std;

main() {
	
	int m;
	int n;
	int sum;
	int product;
	int difference;
	float quotient;
	
	cout<<"Value of first integer: ";
	cin>>m;
	
	cout<<"Value of second integer: ";
	cin>>n;
	
	sum = m + n;
	cout<<"\n Sum is: "<<sum;
	
	product = m*n;
	cout<<"\n Product is: "<<product;
	
	difference = m-n;
	cout<<"\n Difference is: "<<difference;
	
	quotient = (float)m/n;
	cout<<"\n Quotient is: "<<quotient;
}
