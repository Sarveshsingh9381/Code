// Friend function = It is a function which access the private and protected function.

#include<iostream>
using namespace std;
class sum{
	int a,b;//private data.
	public:
		void get_number(void);
		friend int add(void);// it is a friend function, it is non-menber function.
};
void sum :: get_number(void)
{
	cout<<"enter any two number =";
	cin>>a>>b;
}
int add(void)
{
	sum s;
	int num;
	s.get_number();
	num = s.a + s.b; //accessing private data(a,b).
	return num;
}
int main()
{
	int result;
	result=add();
	cout<<"sum = "<<result<<endl;
	return 0;
}
