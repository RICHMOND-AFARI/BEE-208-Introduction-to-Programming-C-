# include<iostream>

using namespace std;

main(){
	
	string input;
	cout<<"Enter string ";
	cin>>input;
	
	if (input.find('a') != string::npos){
		cout<<"Contains 'a'";
	} else {
		cout<<"Does not contain 'a'";
	}
	
	
}
