#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float ar;		
    cout<<" Input the length of 3 sides";
    cin>>a>>b>>c;
	d = (a+b+c)/2;
	ar = sqrt(d*(d-a)*(d-b)*(d-c));
    cout<<" The area of the triangle is : "<< ar;
    return 0;
}