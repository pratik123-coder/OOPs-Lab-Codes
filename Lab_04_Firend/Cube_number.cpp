#include<iostream>

using namespace std;
class A
{
    private:
    int a,b;
    public:
    A()
    {
        cout<<"Enter the number:"<<endl;
        cin>>a;
        b=a*a*a;
    }
    friend class B;
};
class B
{
    public:
    void display (A &t)
    {
        cout<<"The Cube of The number is:"<<t.b;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}