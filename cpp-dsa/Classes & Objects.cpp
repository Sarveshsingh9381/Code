#include<iostream>
using namespace std;

class student {
	private: 
		char name[25];
		int roll;
	
	public: 
		void getdata();
		void display()    //when we use any funtion in public it is used as inline function.
		                  //hence remember that code should be small in public.
		{
		  	cout<<"Name: " << name << endl;
		  	cout<<"ROll no: " << roll << endl;
		}
};	
void student :: getdata(void)
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Roll no: ";
	cin>>roll;
}
int main() {
	student stu;
	
	stu.getdata();
	stu.display();
	return 0;
}
