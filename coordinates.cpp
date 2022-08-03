#include<iostream>
#include<math.h>

using namespace std;
class Coordinates
{
    int x1,y1,x2,y2;
    public:
    void input(){
        cout<<"enter The coordinates";
        cin>>x1>>y1;
        cout<<"enter Second Coordinates";
        cin>>x2>>y2;
    }
    void output(){
        int dist;
        dist=sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        cout<<"the distance is"<<dist;
    }
};

int main()
{
    Coordinates c;
    c.input();
    c.output();
    
    return 0;
}