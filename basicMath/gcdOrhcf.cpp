#include<bits/stdc++.h>
using namespace std;

int bruteForce(int n1, int n2){         //takes o(n)
    int gcd =1;
    int min = n1<=n2 ? n1: n2;
    for(int i = min ; i > 1;i--){
        if(n1%i ==0 && n2%i ==0){
            gcd =i;
            break;
        }
    }
    return gcd;
}

int gcdInSqrt(int n1, int n2 ){             //takes 0(sqrt(min(n1,n2)))
    int gcd=1;
    int temp=n1;
    n1 = n1<=n2?n1:n2;
    if(n1 != temp) n2 = temp;
    for(int i=1; i*i<= n1;i++){
        if(n1%i==0 && n2%i==0){
            gcd= i;
            if(n1/i != i)
            {
                if( n2%(n1/i) ==0 ){
                    gcd=n1/i;
                break;  
                }
                          
            } 
        }

    }
    return gcd;

}

int gcdByEuclidianAlgo(int n1,int n2){
   int gcd=1;
   while(n1>0 && n2 > 0){
    if(n1>n2)  n1=n1%n2;
    else n2= n2%n1;
   }
   if(n1==0) return n2;
   return n1;      // it will take O(logphi(min(n1,n2))) as division happening so log, but denominator is not const so phi
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd=bruteForce(n1,n2);
    cout<<gcd;
    return 0;
}