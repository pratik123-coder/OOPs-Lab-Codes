#include<iostream>

using namespace std;
class A
{
    private:
    int a,b,temp;
    public:
    A()
    {
        cout<<"Enter First number:"<<endl;
        cin>>a;
        cout<<"Enter Second number:"<<endl;
        cin>>b;
        temp=a;
        a=b;
        b=temp;
    }
    friend class B;
};
class B
{
    public:
    void display (A &t)
    {
        cout<<"Swapped numbers are:"<<t.a<<end<<t.b;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}