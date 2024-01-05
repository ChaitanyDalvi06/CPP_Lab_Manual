// Write a program that implements a basic calculator. Use a class Calculator
// with methods to perform addition, subtraction, multiplication, and division of
// two numbers.

#include <iostream>
using namespace std;
class Calculator
{
    private:
    double num1,num2,sum,addition,multiplication,division;

    public:
    double setaddition()
    {
        cout<<"Enter the number 1 : ";
        cin>>num1;
        cout<<"Enter the number 2 : ";
        cin>>num2;
        return 0;
    }
    double getaddition()
    {
        sum=num1+num2;
        cout<<"Addition of both numbers are "<< sum <<endl;
        return 0;
    }
    double setsubstraction()
    {
        cout << "Enter the number 1 : ";
        cin >> num1;
        cout << "Enter the number 2 : ";
        cin >> num2;
        return 0;
    }
    double getsubstraction()
    {
        sum = num1 - num2;
        cout << "substraction is : " << sum << endl;
        return 0;
    }
    double setmultiplication()
    {
        cout << "Enter the number 1 : ";
        cin >> num1;
        cout << "Enter the number 2 : ";
        cin >> num2;
        return 0;
    }
    double getmultiplication()
    {
        sum = num1 * num2;
        cout << "multiplication is : " << sum << endl;
        return 0;
    }
    double setdivision()
    {
        cout << "Enter the number 1 : ";
        cin >> num1;
        cout << "Enter the number 2 : ";
        cin >> num2;
        return 0;
    }
    double getdivision()
    {
        sum = num1 / num2;
        cout << "division is : " << sum << endl;
        return 0;
    }
};
int main()
{
    char opr;
    Calculator a,s,m,d;
    cout<<"Enter the operation (+ , - , * , /): ";
    cin>>opr;

    if (opr=='+')
    {
        a.setaddition();
        a.getaddition();
    }
    else if (opr == '-')
    {
        s.setsubstraction();
        s.getsubstraction();
    }
    else if (opr == '*')
    {
        m.setmultiplication();
        m.getmultiplication();
    }
    else if (opr == '/')
    {
        d.setdivision();
        d.getdivision();
    }
    