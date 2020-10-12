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
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"marks: "<<marks<<endl<<"address: "<<address<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.showdata();
    return 0;
}
