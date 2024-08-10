//Pass by Refrence 
#include<iostream>
using namespace std;
void age ( int&, int&);
int main() {
	int sarvesh=10, suraj=20;
	age(sarvesh, suraj);
	cout<<"Sarvesh age : " << sarvesh << endl;
	cout<<"Suraj age : " << suraj << endl;
}
void age (int&s, int&su) 
{
	s = 30;
	su = 50;
}
