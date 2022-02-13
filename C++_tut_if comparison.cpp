#include <iostream>

using namespace std;


int getMax(int num1, int num2, int num3)
{
    int result;


   /* if (num1 == num2)
    {
        cout << "Given numbers are equal";
    }
    else if (num1 > num2)
    {
        result = num1;
        cout << "First number is greater than second number and equals: " << result << endl;
    }
    else
    {
        result = num2;
        cout << "Second number is greater than first number and equals: " << result << endl;
    }
    */
    if (num1 >= num2 && num1 >=num3)
    {
        result=num1;
    }
    else if(num2 >=num1 && num2 >= num3)
    {
        result=num2;
    }
    else
    {
        result = num3;
    }

       return result;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Biggest given number equals: " << getMax(num1, num2, num3);

        return 0;
}
