#include<iostream>
using namespace std;
struct node{
    int a=10;
};
int main(){
int a=20,c=10,*b=&c;
int &x=a;  //initialization must be done at the time of declaration.
int* &y=b ; //initializer must be of same data type
            //pointer ke decl ke time ke alawa *p se bas value access hoti hai. 
 // float l=2.3;
 // double &k = l;  //it is not assignment it is binding

struct node m;
struct node &n=m;  //initializer must be of same data type
cout<<"a = "<<a<<endl;
cout<<"x = "<<x<<endl;
cout<<"&a = "<<&a<<endl;
cout<<"&x = "<<&x<<endl<<endl;

cout<<"b = "<<b<<endl;
cout<<"y = "<<y<<endl;
cout<<"*b = "<<*b<<endl;
cout<<"*y = "<<*y<<endl;
cout<<"&b = "<<&b<<endl;
cout<<"&y = "<<&y<<endl<<endl;

cout<<"m.a = "<<m.a<<endl;
cout<<"n.a =  "<<n.a<<endl;
cout<<"&m = "<<&m<<endl;
cout<<"&n = "<<&n<<endl<<endl;
}