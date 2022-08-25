#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
    char name[30];
    int age;
    int basicSal;
    int gross;

    void takeInput(){
            cout<<"Enter details of employee:"<<endl;
            cout<<"Enter id: ";
            cin>>id;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter basic salary: ";
            cin>>basicSal;
            cout<<endl;
    }

    void calc(){
            gross = basicSal + (0.8*basicSal) + (0.1*basicSal);
    }

    void display(){
            cout<<"id-"<<id<<"\n"<<"name-"<<name<<"\n"<<"age-"<<age<<"\n"<<"basic salary-"<<basicSal<<"\n"<<"gross-"<<gross<<endl;
    }
};

int main(){
    int n;
    cout << "Enter the no of employees: ";
    cin>>n;
    Employee arr[n];
    for(int i=0; i<n; i++){
        arr[i].takeInput();
        arr[i].calc();
    }
    cout<<endl<<"The details of employees are: "<<endl;
    for(int i=0; i<n; i++){
        arr[i].display();
    }
}