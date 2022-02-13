#include <iostream>

using namespace std;
// expotent function is a function that takes the number to given power

int power(int baseNum, int powNum)
{
    int result = 1;

    for(int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }


    return result;
}


int main()
{
    cout << power(2, 20);

    return 0;
}
