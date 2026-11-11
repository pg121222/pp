#include <iostream>
#include <string>
using namespace std;
class Date
{
    private:
    int year;
    int month;
    int day;
    public:
    Date(int m,int d,int y )
    {
        if(m<1 || m>12)
        month=1;
        else
        month=m;
        year=y;
        day=d;
    }
    void setMonth(int m)
    {
         if(m<1 || m>12)
        month=1;
        else
        month=m;
    }
    int getMonth()
    {
        return month;
    }
    void setYear(int y)
    {
        year=y;
    }
    int getYear()
    {
        return year;
    }
     void setDay(int d)
    {
        day=d;
    }
    int getDay()
    {
        return day;
    }
    void displayDate()
    {
        cout<<month<<"/"<<day<<"/"<<year<<endl;
    }
};
int main()
    {
        Date d1(19,3,2012);
        cout<<"d1:";
        d1.displayDate();
        Date d2(114,5,2018);
        cout<<"d2:";
        d2.displayDate();
        Date d3(10,13,2026);
        cout<<"d3:";
        d3.displayDate();
    return 0;
    }