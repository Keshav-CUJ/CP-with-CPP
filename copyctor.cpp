#include<iostream>
using namespace std;
class kb{
int x;
int y;
public:
void put(int k, int l){
    x=k;
    y=l;
}
void print(){
    cout<<x<<" "<<y<<endl;
}
kb(){
    cout<<"default ctor chala hai"<<endl;
}

kb(kb &ref){
    x=ref.x ;
    y=ref.y ;
    cout<<"copy ctor chala hai"<<endl;
}
void operator =(kb obj){
    x=obj.x + 10;
    y= obj.y + 10;
    cout<<"= overloaded chala hai"<<endl;
}
kb operator +(kb obj){
    kb temp;
    temp.x=obj.x + x;
    temp.y= obj.y + y;
    cout<<"+ overloaded chala hai"<<endl;
    return temp;
}
};
int main(){
kb k1;

k1.put(2,3);
kb k2=k1;
k1.print();
k2.print();
kb k3;
k1.operator +(k2);
k1.print();

}