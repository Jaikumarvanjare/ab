#include<bits/stdc++.h>
using namespace std;
void print(int n,int count) {
   if(count==n) {
      return;
   }
   cout<<count<<endl;
   count++;
   print(n,count);
}

void print_name(int i, int n ){
   if(i>n) return;
   cout<<"Jai"<<endl;
   print_name(i+1,n);
}

void print_no(int i, int n){
   if(i>n){
      return;
   }
   cout<<i<<endl;
   print_no(i+1,n);
}

void print_reverse_nos(int i, int n){
   if(i<1)
   return;
   cout<<i<<endl;
   print_reverse_nos(i-1,n);

}

void backtracking(int i, int n){
   if(i<1)
   return;
   backtracking(i-1,n);
   cout<<i<<endl;
}

void backtracking_reverse(int i, int n){
   if(i>n)
   return;
   backtracking_reverse(i+1,n);
   cout<<i<<endl;
}

void sum1(int n, int sum2){
   if(n<1){
      cout<<sum2<<endl;
      return;
   }
   sum1(n-1,sum2+n);
}

void fact(int n, int fac){
   if(n<1){
      cout<<fac<<endl;
      return;
   }
   fact(n-1,fac*n);
}

int summation(int n){
   if(n==0){
      return 0;
   }
   return n+summation(n-1);
}

int Factorial(int n){
   if(n==0)
   return 1;
   return n*Factorial(n-1);
}

bool Palindrome(int i, string  &r){
      if(i>r.length()/2){
         return true;
      }
      if(r[i]!=r[r.length()-i-1]){
         return false;
      }
      return Palindrome(i+1,r);
}
int fibonacci (int n){
   if(n<=1)
   return n;
   return  fibonacci(n-1)+fibonacci(n-2);
}

int main() {
  int t;
  cout<<"enter the value of T:"<<endl;
  cin>>t;
  for(int i=0;i<t;i++){
   int sum2 =0;
    int count=0;
    int fac=1;
    int n;
    string r;
    cout<<"Enter the name "<<endl;
    cin>>r;

    cout<<"value of n"<<endl;
    cin>>n;
    cout<<"Name :"<<endl;
    print_name(1,n);
    cout<<"value :"<<endl;
    print(n,count);
    cout<<"NOS:"<<endl;
    print_no(1,n);
    cout<<"Reverse No."<<endl;
    print_reverse_nos(n,n);
    cout<<"backtracking"<<endl;
    backtracking(n,n);
    cout<<"reverse Backtracking"<<endl;
    backtracking_reverse(1,n);
    cout<<"sum"<<endl;
    sum1(n,sum2);
    cout<<"factorial"<<endl;
    fact(n,fac);
    cout<<"sum using functional recursion"<<endl;
    cout<<summation(n)<<endl;
    cout<<"Factorial using functional recursion"<<endl;
    cout<<Factorial(n)<<endl;
    cout<<"Palindrome of String using functional recursion"<<endl;
    cout<<Palindrome(0,r)<<endl;
    cout<<"Fibonacci series using functional recursion"<<endl;
    cout<<fibonacci(n)<<endl;


  }
    return 0;
}