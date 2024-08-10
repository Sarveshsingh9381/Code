#include<iostream>
using namespace std;
class dell;
class acer{
	int product;
	public:
		void getdata(void)
		{
			cout<<"Enter number : ";
			cin>>product;
		}
		friend dell;
};
class dell{
	public:
		void lap(acer a)
		{
			cout<<"Laptop : "<<a.product<<endl;
		}
		void key(acer);
};
void dell :: key(acer m)
{
	cout<<"Keyboard : "<<m.product<<endl;
}
int main()
{
	acer x;
	dell y;
	x.getdata();
	y.lap(x);
	y.key(x);
	return 0;
}
