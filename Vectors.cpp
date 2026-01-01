#include<bits/stdc++.h>

using namespace std;
void print(vector <int> &m){
    m[0]=9;
    m[1]=8;
    m[2]=7;
    m[3]=11;
    m.push_back(15);
}
int main(){
    vector <int> v(4);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    print(v);
for(int i=0;i<v.size();i++)
cout<<v[i]<<"\n"<<"\a";

}