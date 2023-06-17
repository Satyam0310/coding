#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100],n,min=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                min=a[i];
                a[i]=a[j];
                a[j]=min;
            }
        }
    cout<<a[i];
    }

}