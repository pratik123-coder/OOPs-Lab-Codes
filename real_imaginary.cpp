#include <iostream>

using namespace std;
class Complex
{
public:
    int real;
    int imaginary;
    void input()
    {
        cin >> real;
        cin >> imaginary;
    }
    void output()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }
};

int main()
{
    Complex array[10];
    cout << "Enter 10 Complex Numbers \n";
    for (int i = 0; i < 10; i++)
    {
        cout<<"Complex Number input :"<<i+1<<endl;
        array[i].input();
    }
    for (int i = 0; i < 10; i++)
    {
        array[i].output();
    }
    

    return 0;
}