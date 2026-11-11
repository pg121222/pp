#include <iostream>
using namespace std;
int fabonacci(int count)
{
    int n1;
    int n2;
    int n3;
    n1=0;
    n2=1;
    if(count==0)
    {
        return n1;
    }
    if (count==1)
    {
     return n2;
    }
      for(int i=2;i<=count;i++)
      {
        n3=n1+n2;
        n1=n2;
        n2=n3;
       }
    return n3;
}
int main()
{
    int n;
    cin>>n;
    cout<<"fabonacci("<<n<<")="<<fabonacci(n)<<endl;
    return 0;
}
