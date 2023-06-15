#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cout<<"\n";
    cin>>b;
    for(int i=a;i<=b;i++){
     if(i==1)
       {
           cout<<"one";
           i++;
       }
        else if(i==2)
       {
           cout<<"two";
        i++;
        }
       else if(i==3)
       {
           cout<<"three";
            i++;
       } 
       else if(i==4)
       {
           cout<<"four";
        i++;
        } 
       else if(i==5)
       {
           cout<<"five";
        i++;
        } 
       else if(i==6)
       {
           cout<<"six";
        i++;
        } 
       else if(i==7)
       {
           cout<<"seven";
        i++;
        } 
        else if(i==8)
       {
           cout<<"eight";
        i++;
        } 
        else if(i==9)
       {
           cout<<"nine";
        i++;
        } 
       else 
       {
           if(i%2==0){
           cout<<"even";
         i++;
            }
           else {
           cout<<"odd";
          i++;
            }
       } 
  
        
        
        return 0;
}
}
