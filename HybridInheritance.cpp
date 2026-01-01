#include"iostream"
using namespace std;
class A{
    public: 
    void fun1(){
        cout<<"A class \n";
    }
};
class B: public A{
    public: 
    void fun2(){
        cout<<"B class \n";
    }
};
class C: public A{
    public: 
    void fun2(){
        cout<<"C class \n";
    }
};
class D: public B, public C{
    public: 
    void fun(){
        cout<<"D class \n";
    }
};

int main(){
    D obj;
    obj.B::fun1();
   
}