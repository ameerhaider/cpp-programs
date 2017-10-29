#include <iostream>
#include "cal.h"
using namespace std;

int main() {
   int value;
   value = 1;
   while (value == 1 ) {
     
     int a;
     cout << "enter 1 num for sum" << endl ;
     cout << "enter 2nd number for -" << endl ;
     cout << " enter 3 number for *" << endl ;
     cout << " enter 4 number for /" << endl ;
     cout << " enter 5 for exit " << endl ;
     cin >> a ;
        if ( a == 1) {
          int a , b;
           cout << "enter 1st numberr"<< endl;
           cin >> a;
           cout << " enter 2nd number"<<endl ;
           cin >> b ;
            int i = sumMagic(a,b);
        cout <<"result iz " << i << endl ; 
        } else if (a==2){
   
           int a , b;
           cout << "enter 1st numberr"<< endl ;
           cin >> a;
           cout << " enter 2nd number"<< endl;
           cin >> b ;
   cout << "result iz " << subtraction (a,b) << endl ; 
        } else if (a== 3){
   
           int a , b;
           cout << "enter 1st numberr"<< endl ;
           cin >> a;
           cout << " enter 2nd number"<< endl;
           cin >> b ;
   cout << "result iz " << multyply (a,b) << endl ; 
   
        }else if (a == 4){
   
           int a , b;
           cout << endl << " enter the 1st nimber " ;
           cin >> a;
           cout << " enter 2nd number"<< endl ;
           cin >> b ;
    cout << " result iz " << division(a,b) << endl ; 
        
        } else if (a == 5){
    
        cout <<endl<<" exit the program " ;   
        value = 2 ;
        
    
        } else{
           cout << " r u a stupid person"<< endl ;
        
        }
    }
    return 0;
}
