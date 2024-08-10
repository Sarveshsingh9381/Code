// Call by address
#include<iostream>
using namespace std;
void age(int* , int*);

int main() {
	int rani=10, amit=20;
	age(&rani , &amit);
	cout<<"Rani age : " << rani << endl;
	cout<<"Amit age : " << amit << endl;
	return 0;
}
void age ( int*r, int*a)
{
	*r=20;
	*a=10;
}
