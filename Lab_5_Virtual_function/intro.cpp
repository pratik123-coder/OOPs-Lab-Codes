#include<iostream>

using namespace std;
/*
C++ virtual member function is a member function in th bas class that you refefine in a derived class
it is declasd using the virutal keyword

It is used to tell the compiler to perform dynamic linkage or late binding on the function

There is a necessacity to use the single pointer to refer to all the objects of the different class

Wen the functio is made virtual C=++ determines which funciton is to be invoked at the run time based on the type of the objects pointed by the base class pointer.

*/
//Rules
/*
should be the moember of some class
cannot be static 
they are accessed through object pointers 
they can be a friend of another class
a virtual function must be defined in base class even thought it is not used

we cannot have a virtual constructor byt can have a dstructor

Pure virtual function
a function is not used to perfom any task it only serrves as a placeholder
do nothing function is also a pure virtual function. 
any class havong pure virtual function is called abstract class



*/
int main()
{
    
    return 0;
}