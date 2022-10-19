#include<iostream>

using namespace std;
class class2;
class class1;
{
    int value1;
    public:
    void indata(int a){
        value1=a;
    }
    void display(void){
        cout<<"The value of a is:"<<value1<<endl;
    }
    friend void exchange(class1 &,class2 &);

}:
class class2
{
    int value2;
    public:
    void indata(int a)
    {
        value2=a;
    }
    void display(void)
    {
        cout<<"The value2 is :"<<value2<<endl;
    }
}
int main()
{
    
    return 0;
}   