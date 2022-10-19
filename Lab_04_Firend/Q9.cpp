#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
    public:
    float Circle,Triangle1,Triangle2,Rectangle1,Rectangle2;
    void setstudentInfo(){
        cout<<"Enter Area Of The Cirlce:"<<endl;
        cin>>Circle;
        cout<<"Enter Base Of The Triagnle:"<<endl;
        cin>>Triangle1;
        cout<<"Enter Height Of The Triagnle:"<<endl;
        cin>>Triangle2;
        cout<<"Enter side1 Of The Rectangle:"<<endl;
        cin>>Rectangle1;
        cout<<"Enter side2 Of The Rectangle:"<<endl;
        cin>>Rectangle2;
    }
};
class area: public Shape
{
   

    public:
    int areaCircle,areaTriagnle,areaRectangle;
    void areaShapes(){
        areaCircle=3.14*pow(Circle,2);
        areaRectangle=Rectangle1*Rectangle2;
        areaTriagnle=0.5*Triangle1*Triangle2;
    }
    void display(){
        cout<<"Area Of The Circle: "<<areaCircle<<endl;
        cout<<"Area Of The Rectangle: "<<areaRectangle<<endl;
        cout<<"Area Of The Triangle: "<<areaTriagnle<<endl;        
    }
};
int main()
{
    Shape z;
    area h;
    z.setstudentInfo();
    h.areaShapes();
    h.display();
    return 0;
}