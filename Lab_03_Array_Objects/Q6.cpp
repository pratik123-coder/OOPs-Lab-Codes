#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Area{
    public:
    int length,breadth;
    float area;
    void setDim()
    {
        cout<<"Enter the Length: ";
        cin>>length;
        cout<<"Enter the Breadth: ";
        cin>>breadth;
        
    }
    
    void getArea()
    {
        area=length*breadth;
        cout<<"Area - "<<area<<endl;
    }
};
int main()
{
    Area o1;
    o1.setDim();
    o1.getArea();
    return 0;
}