#include<iostream>
using namespace std;
int main() {
	int n;
	cout<< "enter the value of n" << endl;
	cin>> n;
	
	int i=2;
	while(i<n) {
		if(n%i==0) {
			cout<< "not prime" << endl;
		}
	}
}
