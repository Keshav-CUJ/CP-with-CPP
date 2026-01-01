#include<bits/stdc++.h>
using namespace std;
void process(vector<int> &rs, vector<int> a, vector<int> b, int n){
    // cout<<"hello";
    bool step1=true;
    int it=0;
    while(step1 == true){
        step1= false;
        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                a[i]--;
                step1=true;
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                a[i]++;
                break;
            }
        }
        it++;
    }
    rs.emplace_back(it);
}
int main(){
    int t;
    cin>>t;
    
    vector<int> result;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        
        vector<int> a(n);
        vector<int> b(n);
        
        for(int i=0;i<n;i++){
          cin>>a[i];
        //   cout<<a[i];
        }
        for(int i=0;i<n;i++){
          cin>>b[i];
        }
        
        process(result,a,b,n);
    }
    for(int i=0 ;i<t;i++){
        cout<<result[i]<<endl;
    }
}