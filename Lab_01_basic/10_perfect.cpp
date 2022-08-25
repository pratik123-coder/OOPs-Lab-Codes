#include<iostream>

using namespace std;
int main()
{
    int a, sum = 0;
    cout << "Enter a Number";
    cin >> a;
    for (int i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
    }
    if (sum==a)
    {
        cout<<a<<"is a Perfect Number";
    }
    else
    {
        cout<<a<<"is not a Perfect Number";
    }
    return 0;
}