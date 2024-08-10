#include<iostream>
using namespace std;
class sum{
	int a,b;
	
		friend int add(void);
};

int add(void)
{
	sum s;
	int n;
	s.a=5;//initialised value of a.
	s.b=8;//initialised value of b.
	n = s.a + s.b;
	return n;
}
int main()
{
	int result;
	result=add();
	cout<<"Sum : "<<result<<endl;
	return 0;
}
