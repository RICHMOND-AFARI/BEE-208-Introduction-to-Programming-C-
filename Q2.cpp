# include<iostream>
# include<cmath>

using namespace std;

main() {
	
	double radius;
	const double pi=std::acos(-1.0);
	double area;
	
	cout<<"Enter Radius(mm): ";
	cin>>radius;
	
	area = pi*pow(radius, 2);
	cout<<"Area Of The Circle Is: "<<area<<"mm^2"; 
	
	return 0;
	
}
