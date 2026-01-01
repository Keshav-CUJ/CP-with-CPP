#include<bits/stdc++.h>
using namespace std;
bool primeOrNot(int n){
    int count=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if(n/i != i){
                count++;
            }
            if(count>2) return false;
        }
    }
    if(count==2) return true;
    return false;      //if n =1
}

list<int> bruteForce(int n){
    list<int>li;
    for(int i=1; i*i<=n;i++){
        if(n%i==0){
            if(primeOrNot(i)) li.emplace_back(i); 
            
             if(n/i != i){
                if(primeOrNot(n/i)) li.emplace_back(n/i);
             }
        }
    }
    return li; 

// takes approx sqrt(n)*2*sqrt(n) not exact coz for each i  primeOrNot does not being checked.    
}

list<int> primeFactorization(int n){
     list<int>li;
     for(int i = 2;i<=n;i++){
        if(n%i == 0){
            li.emplace_back(i);
            while(n%i ==0){  //reduction in log(n)
                n = n/i;
            }
        }
     }
     return li;
     // but for prime numbers loop will run for o(n) so not much optimized
}

list<int> primeFactorizationOptimized(int n){
    list<int> li;
    for(int i=2; i*i<=n; i++){
       if(n%i==0){
        li.emplace_back(i);
        while(n%i==0){
            n=n/i;
        }
       }
    } if(n!=1) li.emplace_back(n);
    return li;
//TC: sqrt(n)*log(n)  when no. is prime then only outer loop will run sqrt(n) times otherwise eg. 780 it is only running 5-6 times which is highly optimized

}
int main(){
    int n;
    cin>>n;
    list<int>li;
    li= primeFactorizationOptimized(n);  
    list<int>::iterator it;
    for(it= li.begin();it!=li.end();it++){
        cout<<*it<<" ";
    }
}