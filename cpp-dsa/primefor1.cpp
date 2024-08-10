#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter the value of n" << endl;
	cin>> n;
	
	bool isprime = 1;
	
	for (int i=2; i<n; i++) {
		
		if(n%i==0) {
			isprime = 0;
			break;
		}
		
	}
	if(isprime==0) {
		cout<<"not a prime number"<<endl;
	}
	else
	{
		cout<<"is a prime number"<<endl;
	}
}

			int i=1;
		    while(i<=n){
			int j=1;
			while(j<=i) {
				cout<<"*";
				j=j+1;
			}
			cout<<endl;
			i=i+1;
		}
	

	

