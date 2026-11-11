#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Employee
{
    private:
    string FirstName;
    string LastName;
    int MonthlySalary;
    public:
    Employee(string fn,string ln,int ms)
    {
        FirstName=fn;
        LastName=ln;
        if(ms<0)
        MonthlySalary=0;
        else
        MonthlySalary=ms;
    }
    void setFirstName(string fn)
    {
        FirstName=fn;
    }
    string getFirstName()
    {
        return FirstName;
    }
    void setLastName(string ln)
    {
        LastName=ln;
    }
    string getLastName()
    {
        return LastName;
    }
    void setMonthlySalary(int ms)
    {
        if(ms<0)
        MonthlySalary=0;
        else
        MonthlySalary=ms;
    }
    int getMonthlySalary()
    {
        return MonthlySalary;
    }
    int getYearlySalary()
    {
        return MonthlySalary*12;
    }
    void Raise10Percent()
    {
        MonthlySalary=MonthlySalary*1.1;
    }
};
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Employee emp1("Ashley", "Graham", 3000);
    Employee emp2("Ada", "Wang",-4000);
    cout << "===== 涨薪前年薪 =====" << endl;
    cout << emp1.getFirstName() << " " << emp1.getLastName()
         << " 年薪：" << emp1.getYearlySalary() << endl;
    cout << emp2.getFirstName() << " " << emp2.getLastName()
         << " 年薪：" << emp2.getYearlySalary() << endl;
    emp1.Raise10Percent();
    emp2.Raise10Percent();
    cout << "\n===== 涨薪10%之后年薪 =====" << endl;
    cout << emp1.getFirstName() << " " << emp1.getLastName()
         << " 年薪：" << emp1.getYearlySalary() << endl;
    cout << emp2.getFirstName() << " " << emp2.getLastName()
         << " 年薪：" << emp2.getYearlySalary() << endl;
    return 0;
}