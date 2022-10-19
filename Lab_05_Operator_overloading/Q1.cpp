#include<iostream>

using namespace std;
class Dist 
{
    private:
        int feet,inches;
    public:
    Dist(){
        feet=0;
        inches=0;
    }

    void input(){
        cout<<"Etner the ditance in feet";
        cin>>feet;
        cout<<"Enter The distance in inches";
        cin>>inches;
    }
    Dist operator + (Dist x){
        Dist temp;
        temp.feet=feet+x.feet;
        temp.inches=inches+x.inches;
        return temp;
    }

    void Display(){
        cout<<feet<<" feet and "<<inches<<" inches";
    }
};
int main()
{
    Dist d1,d2,d3,d4;
    d1.input();
    d2.input();
    d3=d1+d2;
    d3.Display();
    d4=d1+4;
    d4.Display();
    
    return 0;
}