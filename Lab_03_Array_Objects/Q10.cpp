#include<iostream>
#include<math.h>

using namespace std;
class Volume{
    public:
    void area(int r)
    {
        cout<<"Area Of Cube = "<<6*pow(r,2);
    }
    void area(int r,int h)
    {
        cout<<"Area Of Cylinder = "<<3.14*pow(r,2)*h;
    }
    void area(int s)
    {
        cout<<"Area Of Sphere = "<<(4/3)*3.14*pow(r,3);
    }
};
int main()
{
    Volume o1;
    int r=12,h=22,s=4;
    o1.area(r);
    o1.area(r,h);
    o1.area(s);
    return 0;
}