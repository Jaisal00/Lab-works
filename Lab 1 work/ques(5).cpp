#include <iostream>
using namespace std;
#define N 4
class student
{
    float marks;
    char name[20];
public:
    void getdata()
    {
        cout<<"enter name and marks of students"<<endl;
        cin>>name;
        cin>>marks;
    }
    void showdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    void sorter(student a[])
{student t;
     for(int i=0; i<N-1; i++)
        {
                for(int j=i+1; j<N; j++)
                {
                        if(a[i].marks<a[j].marks)
                        {
                                t=a[i];
                                a[i]=a[j];
                                a[j]=t;
                        }
                }}}


};

int main()
{
    student a[N];
    student b;
    for(int i=0; i<N; i++)
    {
        a[i].getdata();
    }

    b.sorter(a);
    for(int i=0; i<N; i++)
    {
        a[i].showdata();
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl<<"highest marks"<<endl;
    a[0].showdata();
    a[2].showdata();
    return 0;
}
