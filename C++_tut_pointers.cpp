#include <iostream>

using namespace std;

//pointer is just a memory adress

int main()
{
    int age = 23;
    double gpa = 4.5;
    string name = "Mike";
    int *pAge = &age; //we can make variable that containt inside pointer (memory adress), everytime when we are creating pointer we name the new variable with p and then name of variable
    double *pGpa = &gpa;
    string *pName = &name;
   /*
    cout << "Age: " << &age << endl; //by using this & we can acces memory adress of variables
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;
    */
    // cout << pAge;
    // we can derefference the pointer
    cout << *pAge; //by derefferencing the pointer we gaining acces to the variable which adres the pointer is holding

    return 0;
}
