#include<iostream>
#include<conio.h>
using namespace std;
class uit{
	int id;
	char name[20];
	public:
		void getdata(void);
		void display(void);
};
void uit :: getdata(void)
{
	cout<<"enter name :";
	cin>>name;
	cout<<"enter id : ";
	cin>>id;
}
void uit :: display(void)
{
	cout<<"name : " << name << endl;
	cout<<"id : " << id << endl;
	cout<<"press enter....."<<endl;
	getch ();
}
int main() {
	uit hod[2], proffesor[3];
	for(int i=0;i<2;i++)
	{
		cout<<"enter detail of hod"<<" "<<i+1 <<endl;
		hod[i].getdata();
	}
	for(int i=0;i<3;i++)
	{
		cout<<"enter detail of proffesor"<<" "<<i+1 << endl;
		proffesor[i].getdata();
	}
	cout<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<"details of hod"<<" "<<i+1<<endl;
		hod[i].display();
	}
	for(int i=0;i<3;i++)
	{
		cout<<"detail of proffesor"<<" "<<i+1<< endl;
		proffesor[i].display();
	}
	return 0;
}
