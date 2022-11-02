#include<iostream>
using namespace std;
class comp
{
private:
    int a;
public:
    comp(int a):a{a}{}
    friend bool operator==(comp &c1,comp &c2);  
};
bool operator==( comp &c1, comp &c2)
{
    return c1.a == c2.a;
}
int main()
{
    comp num1{10};
    comp num2{5};
    if (num1 == num2)
    {
        cout << "a num1 is equal to a num2.";
    }
    else
    {
        cout << "Not equal";
    }
    return 0;
}