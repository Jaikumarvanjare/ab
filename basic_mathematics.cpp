#include<bits/stdc++.h>
using namespace std;

int count(int n) {
    int cnt = log10(n) + 1;
    cout << cnt << endl;
    return cnt;
}

int reverse(int n) {
   int rev = 0;
    while (n > 0) {
        int last_digit = n % 10;
        rev = (rev * 10) + last_digit;
        n = n / 10;
    }
    cout << "Reverse: " << rev << endl;
    return rev;
}

void palindrome(int n) {
    
    int dup = n;
    int r = 0;
    while (n > 0) {
        int last = n % 10;
        n = n / 10;
        r = r * 10 + last;
    }
    if (r == dup) {
        cout<<"palindrome"<<endl;
    }
    cout<< "not palindrome"<<endl;
}
void armstrong(int n){
    int sum=0;
    int dup=n;
    while (n>0){
        int lastdigit =n%10;
        sum+=(lastdigit*lastdigit*lastdigit);
         n=n/10;
        
    }
    if(dup==sum){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
}
void print_divisor(int n){
    cout<<"divisor are:"<<endl;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}



void divisor_sorting(int n){
    vector<int>vect;
    cout<<"divisor are:"<<endl;
    for(int i =1;i<= sqrt (n);i++){
        if(n%i==0){
            vect.push_back(i);
            if(n/i!=i){
                vect.push_back(n/i);
            }
        }
    }
    sort(vect.begin(),vect.end());
    for(auto it:vect){
        cout<<it<<endl;
    }
}
void prime (int n){
    int count=0;
    for(int i=0;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}

int main() {
    int t;
    cout << "Enter the value of t: ";
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        count(n);
        reverse(n);
        palindrome(n);
        armstrong(n);
        print_divisor(n);
        divisor_sorting(n);
        prime(n);
    
        
    }
    return 0;
}
