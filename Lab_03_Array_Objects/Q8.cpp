#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Complex{
    public:
    float real1,real2,img1,img2,imaginaryadd,realadd,imaginarysubtract,imaginaryproduct,realsubtract,realproduct;
    void settingData()
    {
        cout<<"Enter the First Real Number: ";
        cin>>real1;
        cout<<"Enter the First Imaginary Number: ";
        cin>>img1;
        cout<<"Enter the Second Real Number: ";
        cin>>real2;
        cout<<"Enter the Second Imaginary Number: ";
        cin>>img2;
        
    }
    
    void imgPart()
    {
        imaginaryadd=img1+img2;
        imaginarysubtract=img1-img2;
        imaginaryproduct=img1*img2;
    }
    void realPart()
    {
        realadd=real1+real2;
        realsubtract=real1-real2;
        realproduct=real1*real2;
    }
    void gettingData()
    {
        cout<<"Addition - "<<realadd<<" + i"<<imaginaryadd<<endl;
        cout<<"Subtraction - "<<realsubtract<<" + i"<<imaginarysubtract<<endl;
        cout<<"Product - "<<realproduct<<" + i"<<imaginaryproduct<<endl;
    }
};
int main()
{
    Complex o1;
    o1.settingData();
    o1.imgPart();
    o1.realPart();
    o1.gettingData();
    return 0;
}