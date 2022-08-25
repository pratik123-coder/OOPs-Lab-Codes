#include<iostream>

using namespace std;
class ar_of_triangle;
{
private:
    int length;
    int breadth;
    int l,b;
public:
    void input (int l,int b){
        l=length;
        b=breadth;
    }
    int Area() {
        return l * b;
    }
}
int main()
{
    ar_of_triangle r;int l,b;
    cout<<"Enter Length"<<endl;
    cin>>l;
    cout<<"Enter Breadth"<<endl;
    cin>>b;
    r.input(l,b)

    cout<<"Area of triangle"<<r.area()<<endl;

        

    return 0;
}