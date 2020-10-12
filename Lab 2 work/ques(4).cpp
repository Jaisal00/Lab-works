#include <iostream>
using namespace std;
class complex
{
    float real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(float r,float i)
    {
        real=r;
        img=i;
    }
    complex(complex &c)
    {
        real=c.real;
        img=c.img;
    }
    ~complex()
    {
        cout<<"cleared"<<endl;
    }
    void showdata()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2(1.2,2.3),c3(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
