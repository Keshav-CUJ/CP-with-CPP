#include "iostream"
#include<cstring>
using namespace std;
class String{
public:
 const char *str;
String operator + ( String k){
    int s1 = strlen(str);
    int s2 = strlen(k.str);
    char *p,*q;
    p=new char [s1+s2+1];
    q=new char [s2+1];
    strcpy(p,str);
    strcpy(q,k.str);
    String temp;
    temp.str=strcat(p,q);
    delete []q;
    return temp;
    }
};
int main(){
    String s1,s2,s3;
    s1.str="keshav bhatt is a good boy. \n"
            "and he loves making jokes.";
    s2.str=" And he never lies";
    // cout<<s1.str<<endl;
    // cout<<s2.str<<endl;
    // s3=s1+s2;
    // String s4=s1+s2+s3;
    // cout<<s3.str;
    cout<<"enter a string: ";
    char *p;
    cin>>p;
    cout<<p<<endl<<p;
    
   
    getchar();
}