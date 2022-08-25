#include<iostream>
#include<math.h>

using namespace std;
class Shapes{
    public:
    void area(int r)
    {
        cout<<"Area Of Cirlce = "<<3.14*pow(r,2);
    }
    void area(int l,int b)
    {
        cout<<"Area Of Rectangle = "<<l*b;
    }
    void area(int s)
    {
        cout<<"Area Of Square = "<<s*4;
    }
};
int main()
{
    Shapes o1;
    o1.area(12);
    o1.area(2,4);
    o1.area(4);
    return 0;
}