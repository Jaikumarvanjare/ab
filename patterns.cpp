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
void show2(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
    cout<<endl;
    }
}
void show3(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void show4(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void show5(int n){
     for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void show6(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void show7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i*2+1;j++){
            cout<<"*";
        }
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }cout<<endl;
    }
}
void show8(int n){
      for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }cout<<endl;
     }
      for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }cout<<endl;
      }  
}
void show9(int n){
int a=1;
   for(int i=0;i<n;i++){
       if(i%2==0){
           a=1;
       }
       else{
           a=0;
       }
       for(int j=0;j<=i;j++){
           cout<<a<<" ";
           a=1-a;
       }cout<<endl;
   }
}
void show10(int n){
    int a=2*(n-1);
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
          cout<<j;
      }
       for(int j=1;j<=a;j++){
          cout<<" ";
      }
      for (int j = i; j >= 1; j--) {
          cout << j;
      }
      cout << endl;
      a-=2;
   }
} 
void show11(int n){
    int a=1;
    for(int i=1;i<=n;i++){
      for (int j = 1; j <= i; j++) {
        cout << a<<" ";
        a += 1;
      }
      cout << endl;
    }
}
void show12(int n){
     for(int i=0;i<=n;i++){
        for(char j='A'; j<='A'+(n-i-1);j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}
void show13(int n){
    for(int i=0;i<n;i++){
        for(char j='A'; j<='A'+i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}
void show14(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(char j=0; j<=i;j++){
            cout<<ch<<" ";
        }cout<<endl;
    }
}
void show15(int n){
 for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
        cout<<"  ";
        }
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        for(char ch='A'+i-2;ch>='A';ch--){
            cout<<ch<<" ";
        }
cout<<endl;
    }
}
void show16(int n){
 for(int i=0;i<n;i++){
        for(char ch='E';ch<'E'-i;ch++){
        cout<<ch<<"  ";
        }
cout<<endl;
    }
}
void show17(int n){
    int is=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<is;j++){
            cout<<"  ";
        }
        for(int j=1; j<=n-i;j++){
            cout<<"* ";
    
    }
    is+=2;
    cout<<endl;
}
     is=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=0;j<is;j++){
            cout<<"  ";
        }
        for(int j=1; j<=i;j++){
            cout<<"* ";
    
    }
    is-=2;
    cout<<endl;
    }
}
void show18(int n){
 int space =2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n) 
        stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"* ";
        }
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            ;
        space += 2;
    }
}
void show19(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==0 || i==n-1 ||j==0 ||j==n-1 )
           cout<<"*";
        else
           cout<<" ";
        }cout<<endl;
       }
}
void show20(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
        int top =i;
        int left =j;
        int bottom =2*n-2-i;
        int right =2*n-2-j;
        cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
          
        }cout<<endl;
       }
}
int main(){
    int t;
    cout<<"enter the value of t:"<<endl;
    cin>>t;
    for(int i=0; i<t; i++){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    show(n);
    show2(n);
    show3(n);
    show4(n);
    show5(n);
    show6(n);
    show7(n);
    show8(n);
    show9(n);
    show10(n);
    show11(n);
    show12(n);
    show13(n);
    show14(n);
    show15(n);
    show16(n);
    show17(n);
    show18(n);
    show19(n);
    show20(n);
    }

    return 0;
}