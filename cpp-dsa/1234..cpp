#include<iostream>
using namespace std;
int main() {
	int n=234;
	
	int prod = 1;
	int sum = 0;
	
	while(n!=0) {
		int digit= n%10;
		prod = prod * digit;
	 	cout<<"prod"<<endl;
		sum = sum + digit;
     	cout<<"sum"<<endl;
		 n= n/10; 
	}
	int answer = prod - sum;
	cout<<"answer"<<endl;
}
