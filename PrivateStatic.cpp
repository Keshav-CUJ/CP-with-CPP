#include<iostream>
using namespace std;
class Product{
    
    int x,y;
    static int s;
    public:
    void set_xy(int, int);
    void print();
    static void set_s(int);
    static int get_s();
    int product();
 };
int Product::s=10 ;  //Only defining of s it's not accessing of s;same as defining of fn
void Product::set_xy(int a,int b){
    x=a;
    y=b;
}
void Product::print(){
    cout<<"x= "<<x<<" y= "<<y<<endl;
}
void Product::set_s(int a){
         int x= a;  //this x is local of this function not of objet
    s=x;        //SMF can not access IMV
}
int Product::get_s(){
    return s;
}
int Product::product(){
    return x*y*s;    //IMF can access SMV also
}
int main(){
 Product p1,p2;
 int s,product;
 p1.set_xy(10,20);
 p1.set_s(5);  //valid because p1 toh s ko access kr hi skta hai but s private hai so function ke through krega
               //but wrong approch
  Product::set_s(10);
 s= Product::get_s();
product=p1.product();
p1.print();
p2.print();
cout<<s<<endl;
cout<<product;

}