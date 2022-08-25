#include<iostream>

using namespace std;
int main()
{
    int a;
    long double fact=1.0;
    cout<<"Enter The Number To Find The Factorial Of";
    cin>>a;
    for (int i = 1; i <= a; ++i)
    {
        fact*=i;
    }
    cout << "Factorial = " << fact;
    return 0;
}