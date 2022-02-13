#include <iostream>

using namespace std;

double cube(double num) //other than void statemant, we want this function to return something to us if we want this to happen
{
    double result = num * num *num;
    return result;
    cout << "Hello"; //this line will never be executed because the return statement is above it so compiler will never reach it
}


int main()
{
   /*double answer = cube(5.5);
   cout << answer;*/

   cout << cube(4);
    return 0;
}
