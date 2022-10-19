// CPP program to illustrate
// concept of Virtual Functions

#include<iostream>
using namespace std;

class Shapes {
public:
    float rad,base,height,sides;
	virtual void getData()
	{
		cout << "Enter Radius of Circle\n";
        cin>>rad;
        cout << "Enter base of Triangle\n";
        cin>>base;
        cout << "Enter height of Triangle\n";
        cin>>height;
        cout << "Enter Side of Square\n";
        cin>>sides;
	}
};

class derived : public Shapes {
public:
	void Calc()
	{
		cout << "Area of Cricle = "<<3.14*rad*rad;
        cout << "Area of Triangle = "<<0.5*base*height;
        cout << "Area of Square = "<<sides*4;
	}

	
};

int main()
{
	Shapes *bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->getData();

	// Non-virtual function, binded at compile time
	d.Calc();
	
	return 0;
}
