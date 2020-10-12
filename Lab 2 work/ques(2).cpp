#include <iostream>
using namespace std;
class student
{
    char name[20],address[30];
    int roll;
    float marks;
    public:
    void getdata()
    {
        cout<<"enter name, roll, marks and address"<<endl;
        cin>>name>>roll>>marks>>address;
    }
    void showdata()
    {
        cout<<"-----------Entered details-----------"<<endl;
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"marks: "<<marks<<endl<<"address: "<<address<<endl<<endl<<endl;
    }
};
int main()
{   int n;
    cout<<"Enter number of students"<<endl;
    cin>>n;
    student s1[n];
    for(int i=0;i<n;i++)
   {s1[i].getdata();}

     for(int i=0;i<n;i++)
   {
    s1[i].showdata();}
    return 0;
}

