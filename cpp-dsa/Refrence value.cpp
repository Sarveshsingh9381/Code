// REFRENCE VALUE
// A reference is an allias, or an alternate name, for a variable.
#include<iostream>
using namespace std;
int main() {
	int a= 10;
	int &sarvesh = a;
	cout<<"Value of a : " << a << endl;
	cout<<"Value of sarvesh : " << sarvesh << endl;
	cout<<"Address of a : " << &a << endl;
	cout<<"Address of sarvesh : " << &sarvesh << endl;
	return 0;
}
