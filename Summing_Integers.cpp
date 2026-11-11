#include <iostream>
using namespace std;
int main()
{
    int count;
    cin>>count;
    int number;
        int sum;
        sum=0;
    for(int i=1;i<=count;i++)
    {
        cin>>number;
        sum=sum+number;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}