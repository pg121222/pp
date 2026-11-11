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
    int g;
    cout<<"Please enter a five-digit integer:";
    cin>>a;
    b=a/10000;
    c=(a-b*10000)/1000;
    d=(a-b*10000-c*1000)/100;
    e=(a-b*10000-c*1000-d*100)/10;
    f=(a-b*10000-c*1000-d*100-10*e);
    g=f*10000+e*1000+d*100+c*10+b;
    if(a==g)
    {
        cout<<"The number is a palindrome"<<endl;
    }
    else
    {
        cout<<"The number is NOT a palindrome"<<endl;
    }
    return 0;
}