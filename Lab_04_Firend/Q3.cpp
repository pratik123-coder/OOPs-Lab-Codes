#include<iostream>

using namespace std;
class A
{
    private:
    int a,b,centimeter1,meter1,inches1,feet1,centimeter2,meter2,inches2,feet2;
    public:
    A()
    {
        cout<<"Enter The First Distance in feet:"<<endl;
        cin>>a;
        centimeter1=30.48*a;
        meter1=0.3048*a;
        inches1=12*a;
        feet1=a;
        cout<<"Enter The Second Distance in feet:"<<endl;
        cin>>b;
        centimeter2=30.48*b;
        meter2=0.3048*b;
        inches2=12*b;
        feet2=b;

    }
    friend class B;
};
class B
{
    public:
    void display (A &t)
    {
        cout<<"Distance Between the two point in centimeret:"<<t.centimeter1-t.centimeter2<<endl;
        cout<<"Distance Between the two point in Meter:"<<t.meter1-t.meter2<<endl;
        cout<<"Distance Between the two point in feet:"<<t.feet1-t.feet2<<endl;
        cout<<"Distance Between the two point in centimeret:"<<t.inches1-t.inches2<<endl;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}