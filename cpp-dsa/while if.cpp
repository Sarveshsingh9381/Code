#include<iostream>
using namespace std;
int main() {
	int i;
	cout<< "enter 0 to exit"<<endl;
	while(1) {
	cout<< "enter the values"<<endl;
	cin>>i;
	if(i==0){
		cout<<"program exit"<<endl;
		break;
	}	
	cout<<"you entered:"<<i<<endl;
	}
}
