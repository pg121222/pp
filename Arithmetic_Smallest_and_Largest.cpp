#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int max;
    int min;
    cout<<"Input three different integers : "<<endl;
    cin>>a>>b>>c;
    cout<<"Sum is :"<<a+b+c<<endl;
    cout<<"Average is : "<<(a+b+c)/3<<endl;
    cout<<"Product is : "<<a*b*c<<endl;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    if(c<min)
    {
        min=c;
    }
    else
    {
        min=min;
    }
    if(c>max)
    {
        max=c;
    }
    else
    {
        max=max;
    }
    cout<<"Smallest is : "<<min<<endl;
    cout<<"Largest is : "<<max<<endl;
    system ("pause");
    return 0;
}