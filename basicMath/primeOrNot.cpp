#include<bits/stdc++.h>
using namespace std;
bool primeOrNot(int n){
   int count=0;
    for(int i=1;i*i<=n;i++){
    if(n%i==0){
     count++;
     if(n/i != i) count++;      
    }
    if(count>2) return false;
                             }
if(count==2) return true;
return false;
}

int main(){
    int n; 
    cin>>n;
    cout<<primeOrNot(n);
 }


 //TC: sqrt(n) in the case when no. is prime