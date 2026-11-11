#include <iostream>
using namespace std;
int main()
{
    int binary;
    int decimal;
    int digit;
    int weight;
    cout<<"Please enter a binary number :";
    cin>>binary;
    weight=1;
    decimal=0;
    while(binary>0)
    {
        digit = binary % 10;
        binary = binary / 10;
        decimal = digit * weight + decimal;
        weight = weight * 2 ;
    }
    cout << "The decimal equivalent of the binary number is: " << decimal << endl;
    return 0;
}