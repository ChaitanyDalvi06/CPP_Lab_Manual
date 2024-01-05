//Write a program to calculate the power of a number using a loop.
#include <iostream>
using namespace std;
int main()
{
    int base,power;
    cout<<"Enter the base value : ";
    cin>>base;
    cout<<"Enter the power : ";
    cin>>power;

    int result =1;
    for( int i=0 ;i<power;i++ )
    {
       result=result*base; 
    }
    cout<<base<<" raised to the power "<<power<< " is "<< result<<endl;

return 0;
}