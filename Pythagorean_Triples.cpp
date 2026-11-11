#include <iostream>
using namespace std;
int main()
{
    for(int s1=1;s1<=500;s1++)
    {
        for(int s2=s1;s2<=500;s2++)
        {
            for(int s3=s2;s3<=500;s3++)
            {
                if(s1*s1+s2*s2==s3*s3)
                {
                    cout<<s1<<" "<<s2<<" "<<s3<<endl;
                }
            }
        }
    }
    return 0;
}
