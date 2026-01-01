#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct student{
    int age;
    char name[20];
    float marks;
};
void PrintDetails(struct student x){
   printf("age= %d name= %s marks= %f \n",x.age,x.name,x.marks);
}
struct student input(){
    struct student s;
    printf("Enter age, name and marks : ");
    scanf("%d",&s.age);
    fflush(stdin);
    gets(s.name);
    scanf("%f",&s.marks);
    return s;
}
int main(){
  struct student s1 = { 24, "keshav bhatt", 56.3},s2,s3;
  struct student s4;  
    printf("Enter age, name and marks : ");
    scanf("%d",&s2.age);
    fflush(stdin);
    gets(s2.name);
    scanf("%f",&s2.marks);

   s3.age = 27;
   strcpy(s3.name,"madhav");
   s3.marks=89.3;

   s4=input();

  printf("age= %d name= %s marks= %f \n",s1.age,s1.name,s1.marks);
  PrintDetails(s2);
  PrintDetails(s3);
  PrintDetails(s4);
    return 0;
}