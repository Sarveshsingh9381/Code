#include<iostream>
using namespace std;
class matrix{
	int item[3][3];
	public:
		void getdata(void);
		void putdata(void);
		void add(matrix , matrix);
};
void matrix :: getdata(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>item[i][j];
		}
	}
}
void matrix :: putdata(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<item[i][j]<<"  ";
		}
		cout<<endl;
	}
}
void matrix :: add(matrix x, matrix y)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			item[i][j] = x.item[i][j] + y.item[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	matrix a,b,result;
	cout<<"Enter matrix A : "<<endl;
	a.getdata();
	cout<<"Enter matrix B : "<<endl;
	b.getdata();
	cout<<"You entered matrix A : "<<endl;
	a.putdata();
	cout<<"You entered matrix B : "<<endl;
	b.putdata();
	result.add(a,b);
	cout<<"Addition : "<<endl;
	result.putdata();
	return 0;	
}

