#include<iostream>
using namespace std;
int main() {
	int a,b;
	
	cout<<"enter the value of a"<<endl;
	cin>>a;
	
	cout<<"enter the value of b" << endl;
	cin>>b;
	
	int ans=1;
	for(int i=1; i<=b; i++) {
		ans=ans+1;
	}
	cout<<"answer is"<< ans << endl;
}
