#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a;
    b=a%2;
    if(b==0)
    {
        cout<<"The number is even"<<endl;
    }
    if(b==1)    
    {
        cout<<"The number is odd"<<endl;
    }
    system ("pause");
    return 0;
}