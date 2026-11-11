#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Please enter three non-zero integers for the sides of the triangle:";
    cin>>a>>b>>c;
    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
    {
        cout << "They are sides of a right triangle." << endl;
    }
    else
    {
        cout << "They are NOT sides of a right triangle." << endl;
    }

    return 0;
}