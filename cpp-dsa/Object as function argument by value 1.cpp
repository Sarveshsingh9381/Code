#include<iostream>
using namespace std;

class matrix{
	int item[3][3];
	public:
		void getdata(void);
		void putdata(void);
		void add(matrix, matrix);
};
void matrix :: getdata(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> item[i][j];
		}
	}
}
void matrix :: putdata(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<item[i][j]<<" ";
		}
	 	cout<<endl;
	}
}
void matrix :: add(matrix a, matrix b)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			item[i][j] = a.item[i][j] + b.item[i][j];
		}
	}
}
int main() {
	matrix m,n,result;
	cout<<"matrix M : "<<endl;
	m.getdata();
	cout<<"matrix N : "<<endl;
	n.getdata();
	cout<<"You entered matrix M : "<<endl;;
	m.putdata();
	cout<<"You entered matrix N : "<<endl;
	n.putdata();
	result.add(m,n);
	cout<<"Addition of matrix : "<<endl;
	result.putdata();
}
