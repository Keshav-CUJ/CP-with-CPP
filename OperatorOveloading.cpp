#include<iostream>
using namespace std;
class complex{
    int real , imag;
    public:
    void set(int a , int b){
        real=a;
        imag=b;
    }
    void print(){
        if(imag<0)
        cout<<real<<" - i"<<imag<<endl;
        else
        cout<<real<<" + i"<<imag<<endl;
    }
    complex operator +( complex c){
        complex temp;
        temp.real= real + c.real;
        temp.imag= imag + c.imag;
        return temp;
    }
    complex operator -( complex c){
        complex temp;
        temp.real= real - c.real;
        temp.imag= imag - c.imag;
        return temp;
    }
    complex operator *( complex c){
        complex temp;
        temp.real= real*(c.real) - imag*(c.imag);
        temp.imag= imag*(c.real) + real*(c.imag);
        return temp;
    }
    complex operator *( int x){
        complex temp;
        temp.real= real*x;
        temp.imag= imag*x;
        return temp;
    }
    complex operator +(int x){
        complex temp;
        temp.real= real + x;
        temp.imag= imag + x;
        return temp;
    }
    bool operator !=(complex x){
        return ( real != x.real && imag != x.imag ) ;
    }
    complex operator -(){
        complex temp;
        temp.real = real*-1;
        temp.imag= imag*-1;
        return temp;
    }
    complex& operator ++(){
        real = real + 1;
        imag = imag + 1;
        return *this;
    }
friend complex operator + (int x , complex c){
    complex temp;
    temp.real= c.real + x;
    temp.imag= c.imag;
    return temp;
}

friend complex operator *(int x, complex c){
         complex temp; 
         temp.real= x*(c.real);
         temp.imag= x*(c.imag);
         return temp;
}
friend ostream& operator <<(ostream &X , complex c){
    if(c.imag<0)
    X<<c.real<<" - "<<-c.imag<<" i"<<endl;
    else
    X<<c.real<<" + "<<c.imag<<" i"<<endl;
    return X;
}
friend istream& operator >>(istream& Y, complex &c){
    Y>>c.real;
    Y>>c.imag;
return Y;

}
};
int main(){
    complex c1, c2, c3;
    cout<<"enter complex number : ";
    cin>>c1>>c2>>c3;
    cout<<c1<<c2<<c3;
    return 0;
}