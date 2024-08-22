#include<bits/stdc++.h>
using namespace std;

void show(int n){
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
int main(){
    int t;
    cout<<"enter the value of t:"<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"enter the value of n:"<<endl;
        cin>>n;
        show(n);
    }
}



