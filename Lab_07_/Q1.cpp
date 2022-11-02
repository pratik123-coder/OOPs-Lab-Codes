#include<iostream>

using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    public:

    friend istream& operator >>(istream& i, Complex& d);
    friend ostream& operator <<(ostream& o, Complex& c);
};
istream& operator>>(istream& i, Complex& d){
    cout<<"Enter the real value";
    i>>d.real;
    cout<<"Enter the Imaginary value";
    i>>d.imag;
}
ostream& operator<<(ostream& o, Complex& c){
    o<<c.real<<"+i"<<c.imag;
    
}
int main()
{
    Complex C1;
    cin>>C1;
    cout<<C1;
    return 0;
}