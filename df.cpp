#include <iostream>
using namespace std;

int main() {
	int a = 1;
	while (a==1){
    cout <<"diamond"<<endl;
    int diamond;
    cout << "plz enter diamond size";
    cin >> diamond ;
    int spaces = diamond;
    int d=diamond;
    
    if ( diamond%2 != 0 && diamond > 0){
    
          for (int a = 1; a<= diamond; a+=2){
               for (int s= 1;s <= spaces; s++ ){
                   cout <<" ";
               }
                   spaces--;
        
               for ( int b = 1; b<=a ; b++){
                   cout << "*";
               }
        
                   cout << endl ;
          } 
        
         for ( int a = 1 ; a <= diamond; a+=2){
            
               for ( int s = 1 ; s <=spaces+1 ; s++){
                   cout <<" ";
               }
            
               for ( int b = 1 ; b<= d;b++){
                   cout << "*";
               }
                   cout << endl ;
                   spaces ++;
                   d -=2;
        }
     }else{
        
        cout << " plz enter odd number and grater then zero thanks";
    }
}	
    
    return 0;
}
