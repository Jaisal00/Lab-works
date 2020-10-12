#include <iostream>
using namespace std;
inline float SI(float p,float t,float r)
{
    return p*t*r/100;
}
int main()
{
    float t=5,r=4;
    cout<<"simple interest for different principal values are"<<endl;
    for(float p=100;p<=300;p=p+100)
    {
        cout<<SI(p,t,r)<<endl;
    }
    return 0;
}
