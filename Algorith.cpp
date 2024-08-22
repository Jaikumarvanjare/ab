#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>v1={1,2,5,8,5,3,21,3,};
int ca;
cout<<"value of case"<<endl;
cin>>ca;

case(ca){
    case 1: {
   sort(v1.begin(),v1.begin()+8);
   cout<<"sorted order"<<endl;
 
    for(auto i: v1) {
    cout<<i<<" ";
   }cout<<endl;
    }
    break;

    case 2: {
 cout<<"sorted in a specific order"<<endl;
   sort(v1.begin()+2,v1.begin()+4);
   
    for(auto iy: v1) {
    cout<<iy<<" ";

   }cout<<endl;
   }break;

case 3:  {
   sort(v1, v1+6,greater<int>);
 cout<<"in descending order"<<
for(auto iy: v1) {
    cout<<iy<<" ";
}
cout<<endl;
break;

default:
   cout<<"enter valid case number";
   return 0;
}