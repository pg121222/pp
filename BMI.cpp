#include <iostream>
using namespace std;
int main()
{
     double a;
     double b;
     double c;
     cout<<"Please  enter your weigth(kg) and heigth(m)"<<endl;
     cin>>a>>b;
     c=a/b/b;
     cout<<"Your BMI is"<<c<<endl;
     if(c<18.5)
     {
        cout<<"Your BMI classification is: Underweight"<<endl;
     }
     if(18.5<=c && c<=24.9)
     {
        cout<<"Your BMI classification is: Normal"<<endl;
     }
     if(24.9<c && c<30)
     {
        cout<<"Your BMI classification is: Overweight"<<endl;
     }
     if(30<=c)
     {
        cout<<"Your BMI classification is: Obes"<<endl;
     }
     system ("pause");
     return 0;
}