#include<iostream>
using namespace std;
class rahul{
	int hii;
	public:
		void disp();
};
class rani{
	private:
		int bye;
	    friend void rahul :: disp();
};
void rahul :: disp()
{
	rani love;
	rahul hate;
	love.bye = 143;
	hate.hii = 322;
	cout<<"Rani says : "<<love.bye<<endl;
	cout<<"Rahul says : "<<hate.hii<<endl;
}
int main()
{
	rahul what;
	what.disp();
	return 0;
}
