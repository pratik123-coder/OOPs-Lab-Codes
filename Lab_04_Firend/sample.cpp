#include<iostream>

using namespace std;
class Box{
    double width;

    public:
    friend void printWidth(Box box);
    void setWidth( double width);
};
void Box::setWidth(double wid){
    width = wid;
    void Box::setWidth(double wid){
        width=wid;
    
    void print( Box box )
    
        cout<<"Width of the box:"<<box.width<<endl;
    }
}
int main()
{
    Box box;
    box.setWidth(10.0);
    printWidth(box);
    return 0;
}