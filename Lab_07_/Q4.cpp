//Logical not operator
#include<iostream>
using namespace std;
class unary{
  private:
    int x;
    int y;
    int z;
  public:
    void getdata(int a,int b,int c);
    void display(void);
    friend void operator-(unary &s);
    void operator-( unary &r){
    r.x=-r.x;
    r.y=-r.y;
    r.z=-r.z;
}
};
void unary::getdata(int a,int b,int c){
  x=a;
  y=b;
  z=c;
}
void unary::display(void){
  cout<<x;
  cout<<y;
  cout<<z;
}
void operator-( unary &s){
  s.x=-s.x;
  s.y=-s.y;
  s.z=-s.z;
}
int main(){
  unary s,r;
  s.getdata(10,20,30);
  s.display();
  -s;
  s.display();
  -r;
  s.display();
  return 0;
}