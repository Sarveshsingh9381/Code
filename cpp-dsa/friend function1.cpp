#include<iostream>
using namespace std;
class rani;
class rahul{
	int a;
	public:
		void getdata(void);
		friend void add(rahul, rani);
};
void rahul :: getdata(void)
{
	cin>>a;
}
class rani{
	int b;
	public:
		void getdata(void);
		friend void add(rahul, rani);
};
void rani :: getdata(void)
{
	cin>>b;
}
void add(rahul m ,rani n)
{
	cout<<"Marks : "<< m.a + n.b <<endl;
}
int main()
{
	rahul k;
	rani v;
	k.getdata();
	v.getdata();
	add(k,v);
}
