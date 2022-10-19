#include<iostream>

using namespace std;


    class Test
    {
        private:
            int count;
        public:
            Test()
            {
                count=5;
            }
            void operator ++(int){ // urnary kperator as therer is only one operand.
                count+=1;
            }
            void display()
            {
                cout<<"count:"<<count;
            }
    };
    int main(){
        Test t;
        t++; // calling of the operator function
        t.display();
        return 0;
    }   
    
