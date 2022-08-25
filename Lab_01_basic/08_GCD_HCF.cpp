#include<iostream>

using namespace std;
int main()
{
    int a,b,hcf;
    cout<<"Enter first Number";
    cin>>a;
    cout<<"Enter Second NUmber";
    cin>>b;
    for (int i = 1; i <= b; ++i)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    cout << "HCF is " << hcf;
    return 0;
}