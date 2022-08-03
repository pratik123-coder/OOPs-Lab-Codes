#include<iostream>

using namespace std;
class Distance
{
public:
    int feet,inches,a,b,c;
    void input(){
        cout<<"Enter Feet And Inches:"<<endl;
        cin>>feet>>inches;
    }
    void output(){
        cout<<"The Distance is";
        cout<<feet<<"-Feet"<<"\n"<<inches<<"-Inches"<<endl;
    }
    void sum(Distance a, Distance b){
        feet=a.feet+b.feet;
        inches=a.inches+b.inches;
        if (inches >=12)
        {
            feet=feet+1;
            inches=inches-12;
        }
        
    }
};

int main()
{
    Distance a,b,c;
    a.input();
    b.input();
    c.sum(a,b);
    c.output();
    return 0;
}