#include "iostream"
using namespace std;
char * str( char *str1 , char *str2  ){
        
        
        cout<<str1<<endl;
        cout<<str2<<endl;
    int i=0,j=0;
    while(str1[i]!='\0' || str2[j]!='\0'){
        if(str1[i]!=0)
        i++;
        if(str2[j]!=0)
        j++;

    }
    char *arr=new char [i+j+1];
    cout<<i+j+1<<endl;
    int k=0,m=0;
    while(k<=i+j){
        if(k<i){
        arr[k]=str1[k];
        k++;
        }
        
        else{
        arr[k++]= str2[m++];
           }
    }
    
    
    return arr;
}
int main(){
    char *q=NULL,*p=(char *)"keshav",*r=(char *)"bhatt";
    q=str(p,r);
    if(q==NULL)
    cout<<"error";
    else
    cout<<q;
}