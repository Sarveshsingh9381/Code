#include<iostream>
using namespace std;
int main() {
	int a;
	cout<<"1 or 2"<<endl;
	cin>>a;
	switch(a) {
		case 1: {
			cout<<"i am perfect";
			break;
		}
		case 2:{	cout<<"yes i know";
			break;
		}
		default:{
			cout<<"wrong choice dude"<<endl;
			
			break;
		}
		}
	}

