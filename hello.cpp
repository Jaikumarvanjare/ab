#include<iostream>
using namespace std;

void function(int arr[],int n){
    arr[0]+=5;
    cout<<arr[0]<<"function"<<endl;
    

}

int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    function (arr,n);

    cout<<arr[0]<<"main"<<endl;
    return 0;

}