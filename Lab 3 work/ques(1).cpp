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
abc operator ++(int)    //postfix
{
    abc temp;
    temp.real=real++;
    temp.img=img++;
    return temp;
}
abc operator ++()    //prefix
{
    abc temp;
    temp.real=++real;
    temp.img=++img;
    return temp;
}
void show()
{
    cout<<"COmplex number is:"<<real<<"+"<<img<<"i"<<endl;
}

};
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
