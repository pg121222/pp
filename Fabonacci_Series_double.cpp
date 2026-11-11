#include <iostream>
#include <iomanip>
using namespace std;

double fabonacci(int count)
{
    double n1;
    double n2;
    double n3;
    n1 = 0;
    n2 = 1;

    if(count == 0)
    {
        return n1;
    }
    if(count == 1)
    {
        return n2;
    }
    for(int i = 2; i <= count; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int main()
{
    int n;
    cin >> n;
    cout <<setprecision(20) << "fabonacci(" << n << ")=" << fabonacci(n) << endl;
    return 0;
}

