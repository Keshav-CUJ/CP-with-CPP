#include<bits/stdc++.h>

using namespace std;
bool primeOrNot(int n){
   int count=0;
    for(int i=1;i*i<=n;i++){
    if(n%i==0){
     count++;
     if(n/i != i) count++;      
    }
    if(count>3) return false;
}
if(count==2) return true;
return false;
}

int main(){
    int n;
    
    cin>>n;
    cout<<sizeof(int)<<endl;
    int count=0;
    for(int i = 0; i<n;i++){
        if(primeOrNot(i)) count++;
    }

    //takes N*sqrt(N) time which is more
    cout<<count;
 }