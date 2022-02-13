#include <iostream>

using namespace std;
 // we need to add other functions before main functions beaceuse otherwise compiler doesnt know about those additional functions and therefore it wont execute it

/*void sayHi()   // void means this function is not going to return anything, name of function should depend on task that it is performing
{
    cout << "Hello User";
}
*/

//We can add parameters in functions

void sayHi(string name, int age)
{
    cout << "Hello " << name << " You are " << age << " years old" << endl
    ;
}

int main() //this is a function
{


    /*
    sayHi(); //for execution of function we need to call it by its name, thanks to this code will jump to sayHi function and execute all commands in this function and jumb back to main function
    cout << "Top"; // now it will execute line from main and next is going to execute sayHi function another time
    sayHi();
    cout << "Bottom";
    */


    sayHi("Mike", 23); // Here we specify parameter that will be used in sayHi function as variable "name"
    sayHi("Tom",27); //we can reuse the code in function as many times we want
    sayHi("Andrew",31);

    return 0;
}
