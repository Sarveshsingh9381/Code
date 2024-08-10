#include<iostream>
using namespace std;
class total{
	int n;
	public:
		void getdata(void);
		void putdata(void);
		void add(total&, total&);
};
void total ::getdata(void)
{
	cout<<"enter number :";
	cin>>n;
}
void total :: putdata(void)
{
	cout<< n <<endl;
}
void total :: add(total &x , total &y)
{
	n= x.n + y.n;
}
int main() {
	total a,b,result;
	a.getdata();
	b.getdata();
	cout<<"value of a : ";
	a.putdata();
	cout<<"value of b : ";
	b.putdata();
	result.add(a,b);
	cout<<"Total : ";
	result.putdata();
}
