#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,k;
    cin>>n;
    for( int i =0; i<n;i++) {
        cin>>k;
        v.emplace_back(k);
    }
    
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++){
     cout<<*it;

    }
    
}