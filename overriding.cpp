#include<iostream>
using namespace std;
class A{
    public:
    int fun(){
        return 10;
    }
};
class B: public A{
public:
    void fun(){
        cout<<"B";
    }

};
int main(){
    B obj;
   int x;
   x= obj.A::fun();
   cout<<x;
}