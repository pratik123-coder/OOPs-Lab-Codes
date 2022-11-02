/*
we use cout for displaying some value on the screen and cin for reading some data.

*/

#include<iostream>

using namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
     Complex (int r =0,int i=0)
     {
        real=r;
        imag=i;
     }
    friend ostream& operator <<(ostream& o, Complex& c);
};
ostream& operator<<(ostream& o, Complex& c){
    o<<c.real<<"+i",c.imag;
    
}
int main()
{
    Complex C1(5,2);
    cout<<C1;
    return 0;
}