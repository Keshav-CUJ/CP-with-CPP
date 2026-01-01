#include<iostream>
using namespace std;
struct student{
    private:
    int age;
    char name[20];
    float marks;
    public:
    void PrintDetails(){
    cout<<"age = "<<age<<" name= "<<name<<" marks= "<<marks<<endl;
    }
    void input(){
        cout<<"Enter age, name and marks : ";
        cin>>age;
        cin.ignore();
        cin>>name;
        cin>>marks;
    }
};
int main(){
    student s1,s2,s3;
//s1.age=20;
// cout<<s1.age;   ->Private declared then no excess outside the strucutre
// s1.printdetails();   -->if function is private then error

    s1.input();
    s2.input(); 
    s1.PrintDetails();
    s2.PrintDetails();
    s3.PrintDetails();  //if structure members are not initialized then garbage value will be there
    return 0;
}

