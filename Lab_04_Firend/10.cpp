#include <iostream>
using namespace std;
class emp{
    protected:
    int hra;
    int da;
    int noofhours;
    int payperhour;
    
};
class regular : public emp{
    public:
    void setdata(){
        cout<<"Enter HRA"<<endl;
        cin>>hra;
        cout<<"Enter DA"<<endl;
        cin>>da;
    }
    
    void getdata(){
        cout<<"Total Salary"<<"\t";
        cout<<(hra+da)<<endl;
    }

};
class parttime: public emp{
    public:
    void setdata(){
        cout<<"Enter the number of hours"<<endl;
        cin>>noofhours;
        cout<<"Enter the salary per hour :";
        cin>>payperhour;
    }
    
    void getdata(){
        cout<<"Total Salary"<<"\t";
        cout<<(noofhours*payperhour)<<endl;
    }
};


int main()
{
regular r;
parttime p;
cout<<"Enter 1 if the emp is regular 0 if emp is parttime";
int choice;
cin>>choice;
cout<<endl;
if (choice==1){
    r.setdata();
    r.getdata();
}
else if (choice==0){
    p.setdata();
    p.getdata();
}
return 0;
}