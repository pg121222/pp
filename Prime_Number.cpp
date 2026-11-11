#include <iostream>
using namespace std;
int main()
{
    bool stop = false;
    for(int n=2;n<=10000;n++)
    {
       stop = false;
        for(int j=2;j*j<=n;j++)
        {
            if(n%j==0)
            {
                stop=true;
                break;
            }
        }
         if(stop)
        {
            continue;
        }
        cout<<n<<endl;
    }
    return 0;
}