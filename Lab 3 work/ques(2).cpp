#include <iostream>
using namespace std;
class abc{
    int real,img;
    public:
abc()
{
    real=0;
    img=0;

}
abc(int r,int i)
{
    real=r;
    img=i;
}

friend abc operator ++(abc &,int);    //postfix

friend abc operator ++(abc &);   //prefix

void show()
{
    cout<<"COmplex number is:"<<real<<"+"<<img<<"i"<<endl;
}

};
abc operator ++(abc &x,int)
{
    abc temp;
    temp.real=x.real++;
    temp.img=x.img++;
    return temp;
}
 abc operator ++(abc &x)
{
    abc temp;
    temp.real=++x.real;
    temp.img=++x.img;
    return temp;
}
int main()
{
    abc o1(1,4),o2(2,3),o3;
    cout<<"value before using operator "<<endl;
    o1.show();
    o2.show();
    o3=++o1;
    o3=o2++;
    cout<<"value after increment "<<endl;
    o1.show();
    o2.show();
    return 0;
}

