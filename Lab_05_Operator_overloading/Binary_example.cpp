#include<iostream>

using namespace std;
class Cmplex
{
    private:
        float real;
        float img;
    public:
    Complex() : real(0),img(0){}
    void input () {
        cout<<"Enter real and imaginary numeibr ";
        cin>>real;
        cin>>img;
    }
    Complex operator + (const Complex& obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
}
int main()
{
    Complex comp1,comp2,res;
    comp1.input();
    comp2.input();
    res=comp1+comp2;
    res.output();
    return 0;
}