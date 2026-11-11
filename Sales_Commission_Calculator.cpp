#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double sales;  
    cout << fixed << setprecision(2);
    cout<<"Enter sales in dollars (-1 to end):";
    cin>>sales;
    while(sales != -1)
    {
        
           
            cout<<"Salary is : $"<<sales*0.09+200<<endl;
            cout<<"Enter sales in dollars (-1 to end):";
            cin>>sales;
    }
    return 0;
}