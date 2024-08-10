#include<iostream>
using namespace std;

int multiply(int, int);

int main() {
	int a,b,product;
	cout<<"Enter Two Numbers : "<<endl;
	cin>>a>>b;
	
	product = multiply(a, b);
	cout<<"Product : "<< product << endl;
	return 0;
}

int multiply(int x, int y) 
{
	int p;
	p = x * y;
	return (p);
}
