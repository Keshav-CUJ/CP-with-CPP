#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r,rv=0;
    cin>>n;
    while(n>0){
      r= n%10;
      n=n/10;
      rv = rv*10 + r;
    }
    cout<<rv;
}

// TC : log10(n)