#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin>>s;
    vector<int> arr(s);
    for(int i=0; i<s;i++){
        cin>>arr[i];
    }
    for(int i=1; i<s;i++){
        int j = i;
        while( j && arr[j-1]>arr[j] ){
            arr[j] = arr[j] + arr[j-1];
            arr[j-1]= arr[j] - arr[j-1];
            arr[j--] = arr[j] - arr[j-1];    
        }
    }
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}
// TC : best case : o(n)
//      Avg case : O(n^2)
//      worst case : O(n^2)     