/*
Pointer= pointer holds the address of any another variable.
sign of pointer is (*). 
*/


/*  
#include<iostream>
using namespace std;
int main() {
	int  a;
	cout<<"Enter the value of a: "<<endl;  
	cin>>a;
	int *p;
	p = &a;  
	cout<<"Adress of a: "<< p <<endl;
	cout<<"Value of a: " << *p <<endl;
	return 0;
}
*/
#include<iostream>
using namespace std;
int main() {
	int a=10;
	int *p;
	p = &a;
	*p= 20; // If we will assign the value of pointer it will change the value of (a) which was 10.
	cout<< "Address of a: " <<p << endl;
	cout<< "Value of a:" << *p <<endl;
	return 0;
}

