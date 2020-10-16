#include <iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    void getmat()
    {
        cout<<"enter matrix elements"<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void showmat()
    {
        cout<<"Matrix multiplication is"<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrix operator *(matrix &b)
    {
        int s;
        matrix temp;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {   s=0;
                for(int k=0; k<3; k++)
                {
                    s=s+a[i][k]*b.a[k][j];
                }
                temp.a[i][j]=s;
            }

        }
        return temp;
    }
};
int main()
{
    matrix m1,m2,m3;
    m1.getmat();
    m2.getmat();
    m3=m1*m2;
    m3.showmat();
    return 0;
}
