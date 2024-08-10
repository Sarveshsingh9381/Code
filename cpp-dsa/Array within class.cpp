//ARRAY WITHIN A CLASS
#include<iostream>
#include<conio.h>
#define size 3
using namespace std;

class student {
	int roll[size];  //array within a class
	char name[size][20];   // array within a class
	
	public: 
	void getdata(void);
	void display(void);
};
void student :: getdata(void)
{
	for(int i=0; i<size; i++)
	{
		cout<<"Enter name : ";
		cin>>name[i];
		cout<<"Enter roll : ";
		cin>>roll[i];
	}
}
void student :: display(void)
{
	for(int i=0; i<size; i++)
	{
		cout<<"Name : "<< name[i] << endl;
		cout<<"Roll : "<< roll[i] << endl;
		getch();
	}
}
int main() 
{
	student st;
	st.getdata();
	st.display();
	return 0;
}
