#include<iostream>

using namespace std;
class Average{
    public:
    static float gettingAverage(float a,float b, float c)
    {
        return (a+b+c)/3;
    }
};
int main()
{  
    float a,b,c;
    cout<<"Enter The Number 1 -"<<endl;
    cin>>a;
    cout<<"Enter The Number 2 -"<<endl;
    cin>>b;
    cout<<"Enter The Number 3 -"<<endl;
    cin>>c;
    cout<<Average::gettingAverage(a,b,c);
    return 0;
}