#include<iostream>

using namespace std;
class Time
{
    private:
    int hr;
    int min;
    int sec;
    public:
    friend istream& operator >>(istream& i, Time& d);
    friend ostream& operator <<(ostream& o, Time& c);
};
istream& operator>>(istream& i, Time& d){
    cout<<"Enter the Hours value";
    i>>d.hr;
    cout<<"Enter the Minutes value";
    i>>d.min;
    cout<<"Enter the Seconds value";
    i>>d.sec;
}
ostream& operator<<(ostream& o, Time& c){
    o<<"The time is"<<endl;
    o<<c.hr<<"-";;
    o<<c.min<<"-";
    o<<c.sec;
    
}
int main()
{
    Time C1;
    cin>>C1;
    cout<<C1;
    return 0;
}