#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[100],grade,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<38){
            cout<<a[i]<<"\n";
        }
        else if(a[i]%5==4){
            cout<<a[i]+1<<"\n";
        }
        else if(a[i]%5==3){
            cout<<a[i]+2<<"\n";
        }
        else
        cout<<a[i]<<"\n";
    }
    return 0;
}
