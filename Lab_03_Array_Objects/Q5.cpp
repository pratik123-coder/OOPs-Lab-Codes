#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Triangle{
    public:
    int side1,side2,side3,perimeter,semi_perimeter,m;
    float area;
    void setting_data()
    {
        cout<<"Enter the Side 1: ";
        cin>>side1;
        cout<<"Enter the Side 2: ";
        cin>>side2;
        cout<<"Enter the Side 3: ";
        cin>>side3;
    }
    void calculation_data()
    {
        semi_perimeter=(side1+side2+side3)/2;
        m=semi_perimeter*(semi_perimeter-side1)*(semi_perimeter-side2)*(semi_perimeter-side3);
        area=sqrt(m);
        perimeter=side1+side2+side3;
    }
    void getting_data()
    {
        cout<<"Area - "<<area<<endl;
        cout<<"Perimeter - "<<perimeter<<endl;
    }
};
int main()
{
    Triangle o1;
    o1.setting_data();
    o1.calculation_data();
    o1.getting_data();
    return 0;
}