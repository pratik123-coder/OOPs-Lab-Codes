#include<iostream>

using namespace std;


    class Complex
    {
        private:
            int real,img;
        public:
            Complex()
            {
                real=0;
                img=0;
            }
            void operator ++(void){ 
                real+=1;
                img+=1;
            }
            void display()
            {
                cout<<"real:"<<real<<"img"<<img;
            }
    };
    int main(){
        Complex t;
        ++t; 
        t.display();
        return 0;
    }   
    
