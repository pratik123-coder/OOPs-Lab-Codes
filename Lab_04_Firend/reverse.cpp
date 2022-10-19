#include<iostream>

using namespace std;
class A
{
    
    int a,reverse=0;
    public:
    A()
    {
        cout<<"Enter the number:"<<endl;
        cin>>a;
        while (a > 0) {
        reverse = reverse * 10 + a % 10;
        a = a / 10;
        }   
    }
    friend class B;
};
class B
{
    public:
    void display (A &t)
    {
        cout<<"The Reverse of The number is:"<<t.reverse;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}