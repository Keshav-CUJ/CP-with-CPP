#include<iostream>
using namespace std;
struct stack{
    int TOP;
    int arr[10];
    public:
    int TOP(){
        return TOP;
    }
    void push(int a){
     if(TOP==9)
     cout<<"Over Flow can not push this item";
     return;
        TOP++;
        arr[TOP]=a;
    }
    void pop(){
      if(TOP==-1)
      cout<<"stack is empty";
      return;
        TOP--;
    }
    stack(){   //constructor
        TOP=-1;  //instance member
        arr[0]=0; //just after memory allocation to object MV will be initialized
    }
};
int main(){
    stack s;

}