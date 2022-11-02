#include<iostream>
#include<conio.h>

using namespace std;
class Box {
    public:
    double height;
    double weight;
    double volume;
    friend istream& operator >>(istream& din, Box i);
    friend ostream& operator <<(ostream& dout, Box& o);
};
istream& operator >>(istream& din, Box i){
    cout<<"Enter Height";
    din>>i.height;
    cout<<"Enter Weight";
    din>>i.weight;
    cout<<"Enter Volume";
    din>>i.volume;
}
ostream& operator <<(ostream& dout, Box o){
    dout<<"height=="<<o.height;
    dout<<"weight=="<<o.weight;
    o.volume=o.height*o.weight;
    dout<<"volume=="<<o.volume;
}
int main()
{
    Box b1;
    cin>>b1;
    cout<<b1;
    return 0;
}