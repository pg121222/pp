#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    cin>>a;
    b=a/10000;
    c=(a-b*10000)/1000;
    d=(a-b*10000-c*1000)/100;
    e=(a-b*10000-c*1000-d*100)/10;
    f=(a-b*10000-c*1000-d*100-10*e);
    cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<endl;
    system ("pause");
    return 0;
}