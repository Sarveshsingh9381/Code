#include<iostream>
#include<conio.h>
#define size 2
using namespace std;

class student {
	int roll;
	char name[20];
	
	public:
		void getdata(void);
		void display(void);
};
void student :: getdata(void)
{
	cout<<"Enter the name : ";
	cin>>name;
	cout<<"Enter Roll no : ";
	cin>>roll;
}
void student :: display(void)
{
	cout<<"Name : " << name << endl;
	cout<<"Roll no :"<< roll << endl;
	cout<<"Press enter to continue..."<<endl;
	getch();
}
int main() {
 	student st[size];
 	for(int i =0; i<size; i++){
 		cout<<"Enter details of student"<< " "<< i+1 << endl;
 		st[i].getdata();
	 }
	cout<<endl;
	for(int i=0; i<size; i++){
		cout<<"Details of student"<<" " << i+1 << endl;
		st[i].display();
	}
	return 0;
}
