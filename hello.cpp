#include<iostream>
using namespace std;
/*
1. After inputting 2 numbes, ask user what operation you want (sum, multiply, minus, terminate)
2. Do the operation
*/
int sum (int a, int b){
	return  a+b;
}
int main () {
  int number1 = 0;
  int number2 = 0;
  
  while(1){
	  cout<<"Enter first number"<<endl;
	  cin>>number1;
	  
	  cout<<"Enter second number"<<endl;
	  cin>>number2;
	  /*
	    cout to ask user what operation he wants e.g enter 1 for sum, enter 2 for multiply, enter 3 for minus or 4 to exit calculator
		cin>>operation
		if(operation == 4){
			break;
		}
	  */
	  cout<<endl<<"Your result is: "<<sum(number1,number2)<<endl;
  }
    
	  
  return 0;
}
