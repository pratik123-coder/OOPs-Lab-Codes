#include<iostream>

using namespace std;
int main()
{
    int a, b, sum = 0;
    cout << "Enter the number : ";
    cin >> a;
    while (a != 0)
    {
        sum=sum+a%10;
        a = a/10;
    }
    cout << "The sum of the digits of "<< sum;  
    return 0;
} 