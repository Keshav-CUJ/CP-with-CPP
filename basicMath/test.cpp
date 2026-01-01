#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void kthSmallestPrimeFraction(vector<int>& arr, int k) {
        map<double,vector<int>> fraction;
        int s = arr.size();
        for(int i = 0 ; i<s-1; i++){
            for(int j = i+1; j<s;j++){
                vector<int> r;
                r.emplace_back(arr[i]);
                r.emplace_back(arr[j]);
                double key = (double)arr[i]/arr[j];
                fraction.emplace(key,r);
                
            }
        }

        map<double, vector<int>>::iterator it = fraction.begin();
        
        
        while(k>1){
            k--;
            cout<<"key: "<<it->first<<" value : "<<it->second[0]<<" "<<it->second[1]<<endl;
            it++;
        }
        cout<<"key: "<<it->first<<" value : "<<it->second[0]<<" "<<it->second[1]<<endl;
    }
};
int main(){
    Solution S;
    vector<int>v = {1,2,3,5};
    int k =3;
    S.kthSmallestPrimeFraction(v,k);
}