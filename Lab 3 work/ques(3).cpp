#include <iostream>
using namespace std;
class complex
{
    float real,img;
public:
    void getd()
    {
        cout<<"enter real and img part of number";
        cin>>real>>img;
    }
    void show()
    {
        cout<<"sum is"<<endl<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator +(complex a)
{
    complex temp;
    temp.real=real+a.real;
    temp.img=img+a.img;
    return temp;
}
};

int main()
{
    complex c1,c2,c3;
    c1.getd();
    c2.getd();
    c3=c1+c2;
    c3.show();
    return 0;
}
