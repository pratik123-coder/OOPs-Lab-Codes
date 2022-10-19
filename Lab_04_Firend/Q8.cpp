#include<iostream>

using namespace std;
class Student
{
    public:
    int roll;
    char name;
    int age;
    void setstudentInfo(){
        cout<<"Enter Name Of The Student:"<<endl;
        cin>>name;
        cout<<"Enter Roll Number Of The Student:"<<endl;
        cin>>roll;
        cout<<"Enter Age Of The Student:"<<endl;
        cin>>age;
    }
};
class test: public Student
{
   

    public:
    int sub1,sub2,sub3,sub4,sub5;
    void setmarksInfo(){
        cout<<"Enter marks of First Subject:"<<endl;
        cin>>sub1;
        cout<<"Enter marks of Second Subject:"<<endl;
        cin>>sub2;
        cout<<"Enter marks of Third Subject:"<<endl;
        cin>>sub3;
        cout<<"Enter marks of Fourth Subject:"<<endl;
        cin>>sub4;
        cout<<"Enter marks of Fifth Subject:"<<endl;
        cin>>sub5;
    }
    
};
class result: public test
{
    
    public:
    float totalMarks,a,percentage;
    void calculation(){
    
    totalMarks=sub1+sub2+sub3+sub4+sub5;
    a=totalMarks/500;
    percentage=a*100;
    }
};
class sports: public result
{
    
    public:
    float sportsmark,totalMarksfinal,percentageFinal,a;
    void sportsMarks(){
        
        cout<<"Enter The Marks In Sports: "<<endl;
        cin>>sportsmark;
        totalMarksfinal=totalMarks+sportsmark;
        percentageFinal=(totalMarksfinal/600)*100;
    }
    void display(){
    cout<<"Name Of The Student: "<<name<<endl;
    cout<<"Roll Of The Student: "<<roll<<endl;
    cout<<"Age Of The Student: "<<age<<endl;
    cout<<"Marks In subject 1 Of The Student: "<<sub1<<endl;
    cout<<"Marks In subject 2 Of The Student: "<<sub2<<endl;
    cout<<"Marks In subject 3 Of The Student: "<<sub3<<endl;
    cout<<"Marks In subject 4 Of The Student: "<<sub4<<endl;
    cout<<"Marks In subject 5 Of The Student: "<<sub5<<endl;
    cout<<"Total marks: "<<totalMarksfinal;
    cout<<"PErcentage:"<<percentageFinal;    
    }
};
int main()
{
    Student z;
    test h;
    result a;
    sports b;
    z.setstudentInfo();
    h.setmarksInfo();
    a.calculation();
    b.sportsMarks();
    b.display();
    return 0;
}
