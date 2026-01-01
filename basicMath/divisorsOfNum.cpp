#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> st;
    
    for(int i=1; i*i<=n;i++){  //takes rootN
        if(n%i == 0){
            st.emplace(i); // takes logn
            if(n/i != i)
            st.emplace(n/i);
        }
    }
    set<int>::iterator it;
    for(it = st.begin(); it != st.end();it++){
        cout<<*it<<" ";  //takes n
    }

}

//TC = rootN*logn + n == rootN*logn