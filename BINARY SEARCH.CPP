#include<iostream>
using namespace std;
int main(){
    int a[100],n,min=0,s,e,key;
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
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    int mid=n/2;
    cin>>key;
    //for(int i=0;i<n;i++){
        if(a[mid]==key){
            cout<<mid;
        }
        else if(a[mid]>key){
            for(int i=0;i<mid;i++){
                if(a[i]==key){
                    cout<<i;
                }  
            }
        }
      else {
          for(int i=n;i>mid;i--){
              if(a[i]==key){
                  cout<<i;
              }
      }
    }
}
