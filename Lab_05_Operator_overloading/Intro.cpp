#include<iostream>

using namespace std;


    /*Operator -> Unary         Operand is one-> ++,--
              --> BInary        Operand is two -> +,-,*,?
              --> Ternary       
                                Operand is three ->statement1 ? a : b
    Object is a user defined data type. we need to re define they way the operator works 
    ie there are two object of class it is used to concate the two strings. 
          
    It can be redefined the way operator works.
    the feature in c++ that allows programmer to redefine the meaning of an operator (when operated on class objects) is called 
    operator overloading.
    */
   class className
   {
    public:
        returnType oeprator +(){

        } 
   };                                // Ternary operator cant be overloaded
                                    // One can pass the arguments to the operator function in similar wya as functions.
/*
Operator overloading is a compile time polymorphism. it is an idea of giving speial meaning to an existing opoerator in C++ without changing it original meaning 
 Exmple :
   int a k 
   float b sum;
   sum=a+b;
    we require operator overloading because to use build in fucntions as "+" as a opertaor  to be used on two used define class data type
    This is done by the use of operator overloading. 
    we redifne the meaning of operators

    BINARY OPERAATOR
    
*/
