#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        char  Name[30];
        int   rollNumber;
        int   totalMarks;
        float percentage;
    public:
        void studentDetails(void);
        void gettingDetails(void);
};
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> Name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter total marks outof 500: ";
    cin >> totalMarks;
     
    perc=(float)total/500*100;
}
void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}
 
int main()
{
    student std[MAX]; 
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
     
    return 0;
}