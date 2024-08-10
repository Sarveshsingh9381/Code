#include<iostream>
#include<conio.h>
using namespace std;

class office{
	char id[10];
	char name[20];
	char dep[20];
	
	public:
		void getdata(void);
		void display(void);
};
void office :: getdata(void)
{
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter ID : ";
	cin>>id;
	cout<<"Enter Department : ";
	cin>>dep;
}

void office :: display(void)
{
	cout<<"Name : " << name << endl;
	cout<<"ID : " << id << endl;
	cout<<"Department  : " << dep << endl;
	getch ();
}
int main() {
	office manager[3] , proffesor[5];
	for(int i=0; i<3; i++)
	{
		cout<<"Enter details of manager : " <<" " << i+1;
		manager[i].getdata();
	}
	for(int i=0; i<5; i++)
	{
		cout<<"Enter details of proffesor : "<<" "<<i+1;
		proffesor[i].getdata();
	}
	cout<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<"Details of manager : " << " " << i+1;
		manager[i].display();
	}
	for(int i=0; i<5; i++)
	{
		cout<<"Details of proffesor : "<<" " << i+1;
		proffesor[i].display();
	}
	return 0;
}

