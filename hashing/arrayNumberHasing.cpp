#include<bits/stdc++.h>
using namespace std;

int hashh[10000000];
int main(){
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(vector<int>::iterator it = v.begin(); it<v.end();it++){
        cin>>*it;
        hashh[*it]++;   // pre computing
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>n;            //fetching will be from here
        cout<<hashh[n]<<"\n";
    }
    
}

