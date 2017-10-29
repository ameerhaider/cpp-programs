#include <iostream>
using namespace std;

int main() {
    int a ;
    cout << " please enter the opreater" << endl ;
    cout << " note :"<< endl ;
    cout << " enter # 1 for + opreater : "<< endl ;
    cout << " enter the # 2 for - opreater : " << endl ;
    cout << " enter the # 3 for * opreater : " << endl ;
    cout << " enter the # 4 for / opreater : " << endl ;
    cout << " enter the # 5 for  exit the program : " << endl ;
    cin >> a;
    int i = 10;
    if ( a == 1)
 {   
    while (i > 1)
        
   {  
      int a , b ;
      cout << "please enter the 1st value"<<endl ;
      cin >> a;
      cout << "please enter the 2nd value" << endl;
      cin >> b; 
	  cout << " ans iz =" << a+b  << endl ;
	  break ;
    }
 }
    if ( a == 2)
	{
		while ( i>1 )
		{ 
	    int a,b ;
		cout << "please enter the 1st value"<<endl ;
      cin >> a;
      cout << "please enter the 2nd value" << endl;
      cin >> b; 
	  cout << " ans iz =" << a-b  << endl ;
	  break ; 
		}
	}
	if ( a == 3 )
	{ 
       while (i>1)
	   {
		   int a , b ;
		   cout << "please enter the 1st value"<<endl ;
      cin >> a;
      cout << "please enter the 2nd value" << endl;
      cin >> b; 
	  cout << " ans iz =" << a*b  << endl ;
	  break ;
	   }
	}
	if ( a== 4 )
	{
		while (i>1)
		{
			int a , b ;
			cout << "please enter the 1st value"<<endl ;
      cin >> a;
      cout << "please enter the 2nd value" << endl;
      cin >> b; 
	  cout << " ans iz =" << a/b  << endl ;
	  break ;
		}
	}
	if ( a == 5)
	{
		while ( i>1 )
		{
			cout << "please exit the program"<<endl ;
      
	  break ;
		}
	}
	return 0;
}