#include<iostream>
#include<cstring>
using namespace std;
class student{
    private : char name[20];
              int roll;
    protected:

           void setname(char *p){
                  strcpy(name, p);
           }

           void setroll(int r){
            roll=r;
           }

    public:
          char* getname(){
            return name;
          }       
          int getroll(){
            return roll;
          }
};
class physique : public student{
    private : float height, weight;
    protected: 
            void setheight(float h){
                height=h;
            }
            void setweight(float w){
                weight=w;
            }
    public: 
        float getheight(){
            return this->height;
        }        
        float getweight(){
            return this->weight;
        }
        void setstudent(char *p, int r, float h, float w){
            setname(p);
            setroll(r);
            height=h;
            weight=w;
        }

};
int main(){
    physique obj;
    obj.setstudent((char *)"Keshav",26,185,60);
    cout<<"Name : "<<obj.getname()<<endl;
    cout<<"Roll no. : "<<obj.getroll()<<endl;
    cout<<"Height : "<<obj.getheight()<<endl;
    cout<<"weight : "<<obj.getweight()<<endl;
}