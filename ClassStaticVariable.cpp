#include<iostream>
using namespace std;
class student{
public:
    int age;
    char name[20];
    float marks;
  static int s;  //decl inside but mem allocation outside
    void PrintDetails();
    void input();
};
int student::s;
void student::PrintDetails(){
    cout<<"age = "<<age<<" name= "<<name<<" marks= "<<marks<<endl;
    }
void student::input(){
        cout<<"Enter age, name and marks : ";
        cin>>age;
        cin.ignore();
        cin>>name;
        cin>>marks;
    }
int main(){
    student s1,s2;
    cout<<s1.age<<endl;  //Without init garbage value is stored 
//  cout<<marks;   //marks toh kisi object ke andr ka varible hai
                   //main ka local nhi so bina object ke access nhi hoga
//    s=100;
//  cout<<s;       //s local to main nhi hai and nahi normal global ya static
                  // s kisi class ka static hai so class se ya uske object se access hoga
 s1.s=100;      //kam ho jayega but logically wrong kyonki s object
cout<<s1.s<<endl;                 // ka instance mem vari nhi hai.
student::s=200;
cout<<student::s;
}