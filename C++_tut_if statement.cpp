#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;
   /* if (isMale && isTall) // && operator is telling us that every given condition has to be truth
    {
        cout << "You are a tall male";
    }
    else
    {
        cout << "You are not male or You are not tall";
    }
*/
    // We can also use the "or" operator which looks like this || and this means that one of given conditions has to be truth

   /* if (isMale || isTall)
    {
        cout << "You are a tall male";
    }
    else
    {
        cout << "You are not a male or You are not tall";
    }
    */

    if (isMale && isTall)
    {
        cout << "You are tall male";
    }
    else if (isMale && !isTall) //else if gives us the possibility to take care of more conditions
    {
        cout << "You are male but You are not tall";
    }
    else if (!isMale && isTall)
    {
        cout << "You are not a male and You are tall";
    }
    else
    {
        cout << "You are not a male and You are not tall";
    }


    return 0;
}
