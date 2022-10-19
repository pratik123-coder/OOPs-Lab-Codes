#include <iostream>
using namespace std;
class employee
{
public:
    char name[10];
    int id, sal, da, hra, hrs, payhrs;
    void info()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter ID : ";
        cin >> id;
    }
    void regular()
    {
        cout << "Enter salary : ";
        cin >> sal;
        cout << "Enter DA : ";
        cin >> da;
        cout << "Enter HRA : ";
        cin >> hra;
    }
    void part_time()
    {
        cout << "Enter number of hours : ";
        cin >> hrs;
        cout << "Enter pay per hour : ";
        cin >> payhrs;
    }
    virtual void salary() = 0;
};

class regular : public employee
{
public:
    void salary()
    {
        cout << "\nSalary of regular employee : " << sal + da + hra << endl;
    }
};
class part : public employee
{
public:
    void salary()
    {
        cout << "\nSalary of Part-time employee : " << payhrs * hrs * 30 << endl;
    }
};
int main()
{
    regular r;
    employee *d = &r;
    d->info();
    d->regular();
    d->salary();
    part p;
    employee *e = &p;
    e->info();
    e->part_time();
    e->salary();

    return 0;
}