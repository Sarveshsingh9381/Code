// UNION //
/* > 	Union is defined as a collection of datatypes which is similar to structure but
    	technically different from structures.
   > 	Union show adress of single datatypes while structure shows all datatypes. */
   
#include<iostream>
using namespace std;

union student {
	char name[15];
	int roll;
};
int main() {
	union student uni;
	cout<<"Enter name" << endl;
	cin>> uni.name;
	
	cout<<"Enter roll" <<endl;
	cin>> uni.roll;
	
	cout<<"Name : "<< uni.name<<endl; // If we write this output code after its input (uni.name) it will show output alternately.
	cout<<"Roll no : "<< uni.roll <<endl;
	return 0;
} 
   
// In this code output will show only one datatype member who is at last.
