#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"enter the no. of elements:"<<endl;
    cin>>n;
    cout<<"enter the element of the Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    
    int q;
    cout<<"No. of query"<<endl;
    cin>>q;
    int num;
    cout<<"num"<<endl;
    while(q--){
        cin>>num;
        cout<<"the no."<<num<<" have-->"<<hash[num]<<" repeatation"<<endl;;
    }
    return 0;
}