#include<iostream>
using namespace std;
int main() {
	int n;
	for(n=1;n<=10;n++)
	{
		cout<<n<<endl;
		if(n==7)
		{
			cout<<"countdown aborted"<<endl;
			break;
		}
	}
}
