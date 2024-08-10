// STRUCTURE //
/* Structure is a collection of different datatypes */

#include<iostream>
using namespace std;

struct student
{
	int roll;
	char name[15];
	
};
int main() {
	struct student str;
	cout<<"Enter name: " << endl;
	cin >> str.name;
	
	cout<<"Enter roll: " << endl;
	cin >> str.roll;
	
	cout<<"Name: " << str.name << endl;
	cout<<"Roll: " << str.roll <<endl;
	return 0;
}

// DONE >>//
