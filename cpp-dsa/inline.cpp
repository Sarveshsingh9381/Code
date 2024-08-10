#include<iostream>
using namespace std;

inline int multiply(int a , int b) //inline funtion
{
	return ( a * b);
}

int main() {
	int x=20, y=3;
	cout<< multiply(x,y)<< endl; //funtion call
	return 0;
}
