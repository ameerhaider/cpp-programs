#include <iostream>
using namespace std;

int main() {
    cout << "hello"<<endl;
    
    int a = 9;
    int spaces=a-3;
        
   if (a % 2 != 0 ){
    
      for (int stars = 0 ; stars < a ;stars = stars+2) {
          
          for(int s = 0; s < spaces; s++) {
              cout<<" ";
          }
          
          for(int x = 0; x <= stars; x++) {
              cout<<"*";
          }
          
          cout<<endl;
          spaces--; 
      }
          spaces = a-6;
          
     for (int b =1; b < a ; b=b+2){
         
         for (int c=0; c < spaces ; c++ ){
             
              cout <<" ";
          }
            for ( int s= a-2 ; s>=b;s--){
                cout << "*";
            }
               
         cout << endl;
         spaces ++;
     }  
         
    
   } else {
            
        cout << "plz enter an odd number thanks";
    }
    
    return 0;
}