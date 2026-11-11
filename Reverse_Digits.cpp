#include <iostream>
using namespace std;
int main()
{
    long long n1;
    long long n2;
    cin>>n1;
    n2 = 0;
    while(n1 != 0)
    {
        n2 = n2 * 10 + n1 % 10;
        n1 = n1 / 10;
    }
    cout<<n2<<endl;
    return 0;
}