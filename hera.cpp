#include <iostream>
using namespace std;

int main() {
   
    cout << "hello"<<endl;
   // int a,b,c;
    
    int dimand=5;
    
    int spaces;
    spaces = dimand;
    int d = dimand;
    
    
    
    
    for (int a = 1; a<=dimand; a+=2){
    
           // cout << a;
        
            for (int c = 1 ; c<= spaces; c++  ){
                 cout <<" ";
            }
                 spaces --;
    
            for (int b =1; b<=a;b++){
    
                 cout << "*";
        
            }
                 cout << endl;
        
    } 
    
   
        
        for  (int a = 1 ; a<=d ; a+=2){
                
            
                 for (int c = 1; c<=spaces+1 ; c++){
                      cout <<" " ;
                 }
                      spaces++;
            
                 for (int b = 1; b<=dimand ; b++){
                      cout <<"*";
                 }
                     dimand -=2;
                      
            
                      cout << endl;
        
        }
        
      
        
           
    //hello hakeem here
    
    
    return 0;
}