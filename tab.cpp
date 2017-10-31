#include <iostream>
using namespace std;

int table (int n) 
{
    int t = 1;
    for (int i = 1;i <=100; i++){
        for (int j = 1; j<=10;j++){
            cout<<endl<<i << " *"<< j <<"="<< i*j ;   
        }
        cout << endl <<endl;
        t=n*i;
        
    }
    return(t);
        
}
int main() {
        int j = 1; 
   while (j==1){ 
        int n;
        cout << "plz enter 1 for sea tables of 1 to 100 :s";
        cin>> n;
    if (n==1){
        int c= table(n);
    }else{
        cout <<"you enters the wrong number";
      }
   }
   
    
    
    
    return 0;
}