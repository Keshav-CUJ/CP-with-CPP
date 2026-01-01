// Armstrong numn=ber
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt,cmp=0;
    n=153;
    int dup=n;
    cnt = log10(n)+1;      //Count the no. of digits
    while(n>0){
        int r= n%10;
        cmp= cmp + pow(r,cnt);
        n=n/10;
    }
    if(dup==cmp) cout<<true;
    else cout<<false;
    return 0;
}

// TC : log10(n)