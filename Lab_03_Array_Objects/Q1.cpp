#include<iostream>

using namespace std;
class student{
public:

int RollNo;
double Marks;
void getdata();
void display();
};
void student::getdata()
{
    cout<<"Enter Roll Number";
    cin>>RollNo;
    cout<<"Enter Marks";
    cin>>Marks;
}
void student::display()
{
    cout<<"Roll Number - "<<RollNo<<"\t"<<"Marks - "<<Marks<<endl;
}
int main()
{
    student st[5];
    for (int i = 0; i < 5; i++)
    {
        st[i].getdata();
    }
    for (int i = 0; i < 5; i++)
    {
        st[i].display();
    }
    
    return 0;
}