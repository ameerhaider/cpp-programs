#include<iostream>
using namespace std;

int main() {
	
	int running = 1;
	
	while(running == 1) {
		//1 loop iteration should do one calculation and then repeat.
		cout<<endl<<"Welcome. Follow the instructions"<<endl;
		cout<<" 1 = sum "<<endl;
		cout<<" 2 = minus "<<endl;
		cout<<" 3 = multiply "<<endl;
		cout<<" 4 = terminate "<<endl;
		
		int command = 0;
		cin>>command;
		
		if(command == 1) {
			int num1, num2;
			cout<<"Enter 1st num"<<endl;
			cin>>num1;
			
			cout<<"Enter 2st num"<<endl;
			cin>>num2;
			
			cout<<"Result of sum = "<<num1+num2<<endl;
			
		}else if(command == 2){
		    int num1, num2;
			cout<<"Enter 1st num"<<endl;
			cin>>num1;
			
			cout<<"Enter 2st num"<<endl;
			cin>>num2;
			
			cout<<"Result of minus = "<<num1-num2<<endl;
			
		}else if(command == 3) {
		     int num1, num2;
			cout<<"Enter 1st num"<<endl;
			cin>>num1;
			
			cout<<"Enter 2st num"<<endl;
			cin>>num2;
			
			cout<<"Result = "<<num1*num2<<endl;
		}else if(command == 4){
			running = 2;
		}else {
			cout<<"You idiot read my message!!!!"<<endl;
		}
		
	}
	return 0;
}