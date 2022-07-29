#include<iostream>

using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a Number ";
    cin>>a;
    cout<<"Enter Another Number";
    cin>>b;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}