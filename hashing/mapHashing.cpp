#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mpp;
    // unordered_map<int, int>mpp;  but in this case for loop will take o(n : elements in arr) time lega
    for(auto it = v.begin(); it <v.end(); it++){
        cin>>*it;
        mpp[*it]++;  //o(logN (N is num of element in map))

    }                 // n*logN;

    for(auto it : mpp){
        cout<<it.first<<"-->"<<it.second<<"\n";
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<"\n";
    }

}

/*unorderd_map can only take primitive data type as key
it takes o(N) when all the collision occurs
when all the values goes to the same hash place whatever hashing method  they are using doesnt matter then the collission will happen.*/ 