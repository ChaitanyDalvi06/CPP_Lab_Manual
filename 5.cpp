// Write a program that finds the largest among three numbers using nested if-else statements
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter the 3 numbers : " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is larger than " << num2 << " and " << num3 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is larger than " << num1 << " and " << num3 << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << num3 << " is larger than " << num1 << " and " << num2 << endl;
    }
    return 0;
}
