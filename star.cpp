#include <iostream>
using namespace std;

int main() {
     for (int colum =0;colum < 10 ;colum++){
       
         for (int row = 0; row <10; row++){
             
             if ( (colum+row == 9) || (row == colum) ){
                 cout << "5";
             } else {
                cout <<"*";
             }
         }
         
         
         cout << endl;
     }
    
    return 0;
}