#include <iostream>
using namespace std;

int table (int n) 
{
    int t = 1;
    for (int i = 1;i <=10; i++){
        t=n*i;
        cout<<endl<<n << " *"<< i <<"="<< n*i<<endl ;
    }
    return(t);
        
}
int main() {
	int a = 1;
	while (a==1){
    int n;
    cout<<" plz enter a number for table";
    cin>> n;
   int c= table(n);
    }
    
   
    
    
    
    return 0;
}