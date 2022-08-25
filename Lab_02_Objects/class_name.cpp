#include <iostream>
using namespace std;

#define MAX 10

class student
{
    private:
        char  Name[30];
        int   rollNumber;
        int   totalMarks;
    public:
        void studentDetails(void);
        void gettingDetails(void);
};
void student::studentDetails(void){
    cout << "Enter name: " ;
    cin >> Name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter total marks ";
    cin >> totalMarks;
}
void student::gettingDetails(void)
{
    cout << "Name:" << Name;
    cout << "Roll Number:" << rollNumber;
    cout << "Total marks:" << totalMarks;
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