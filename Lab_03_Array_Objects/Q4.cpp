#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
    string name1,name2;
    int roll_no, phone_number;
    void setting_name()
    {
        cout<<"Enter First Name: ";
        cin>>name1;
        cout<<"Enter Second  Name: ";
        cin>>name2;
        cout<<"Enter Roll Number: ";
        cin>>roll_no;
        cout<<"Enter Phone Number";
        cin>>phone_number;
    }
    void showing_data()
    {
        cout<<"First Name - "<<name1<<endl;
        cout<<"Second Name - "<<name2<<endl;
        cout<<"Roll Number - "<<roll_no<<endl;
    }
};
int main()
{
    Student o1,o2;
    o1.setting_name();
    o2.showing_data();
    return 0;
}