#include <iostream>
#define PI 3.14
using namespace std;
float area(float r)
{
    return PI*r*r;
}
float area(float l,float b)
{
    return l*b;
}
int main()
{
    float rad,len,br;
    cout<<"enter radius of circle"<<endl;
    cin>>rad;
    cout<<"enter length and breadth of rectangle"<<endl;
    cin>>len>>br;
    cout<<"area of circle is "<<area(rad)<<endl;

     cout<<"area of rectangle is "<<area(len,br)<<endl;

    return 0;
}
