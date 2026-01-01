// Finding prime factorisation Qury based 
// Q queries
// n1, n2, n3         n or N<=10^5

#include<bits/stdc++.h>
using namespace std;
vector<int> primeFactorisation(int n){
  
vector<int> p;
for(int i=2;  i*i<=n;i++){
   if(n%i == 0){
      while( n%i == 0){
         n= n/i;
         p.emplace_back(i);
      }
   }
} if(n>1) p.emplace_back(n);
  

return p;
                        
} 
//in this case the TC : O(Q*sqrt(N)) when N is a prime (obviously N != 10^5 in this case but nearest prime number to it).
vector<int> getSieve(int k){
   
   vector<int> v(k+1);

   for(int i=2; i<=k; i++) v[i]=i;

   for(int i=2; i*i<=k ; i++){
      if(v[i]==i){
         for(int j= i*i ;j<=k;j=j+i){
            if(v[j] == j)
            v[j]=i;
         }
      }
   }
   return v;
}

int main(){
   int q;
   cin>>q;
   map<int,vector<int>> qrs;
   
   for(int i=0;i<q; i++){
      int key;
      cin>>key;
      qrs[key]= vector<int>(); //initialization by empty vector
   }

   // map<int, vector<int>>::iterator it = qrs.begin();
   // for(; it!= qrs.end();it++){
   //    qrs[it->first] = primeFactorisation(it->first);
   // }
    
    vector<int> SPF = getSieve(100000);
    map<int, vector<int>>::iterator it = qrs.begin();
    for(; it!= qrs.end();it++){
      int n= it->first;

      vector<int> fctr;
      while(n!=1){
         fctr.emplace_back(SPF[n]);
         n=n/SPF[n];
               }
       qrs[it->first] = fctr;
   }// In this optimal solution TC will be O(Q*log2N) when N= 10^5;
   
   

   it= qrs.begin();
   for(; it!=qrs.end();it++){
      vector<int>::iterator pt = it->second.begin();
      for(; pt!= it->second.end();pt++){
         cout<<*pt<<" ";
      }
      cout<<endl;
   }
}




