#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    void setting_name()
    {
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter Roll Number: ";
        cin>>roll_no;
    }
    void showing_data()
    {
        cout<<"Name - "<<name<<endl;
        cout<<"Roll Number - "<<roll_no<<endl;
    }
};
int main()
{
    Student o1;
    o1.setting_name();
    o1.showing_data();
    return 0;
}