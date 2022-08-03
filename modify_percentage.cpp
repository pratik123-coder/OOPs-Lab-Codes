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
void student::studentDetails(void){
    cout << "Enter name: " ;
    cin >> Name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter total marks out of 100: ";
    cin >> totalMarks;
    percentage=totalMarks; 
}
void student::gettingDetails(void)
{
    cout << "Name:" << Name <<endl;
    cout << "Roll Number:" << rollNumber <<endl;
    cout << "Total marks out of 100:" << totalMarks <<endl;
    cout << "Percentage:"<<percentage <<endl;
    
}
int main()
{
    student std[MAX]; 
    int n, a;
    cout << "Enter Total number Of Students";
    cin >> n;
    for (a = 0; a < n; a++)
    {
        cout << "Please Read And Enter The Student Details:" << a + 1 <<"\n";
        std[a].studentDetails();
    }
    for (a = 0; a < n; a++)
    {
        cout << "Details of Student" << a + 1 <<"\n";
        std[a].gettingDetails();
    }
    return 0;
}