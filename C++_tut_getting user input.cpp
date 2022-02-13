#include <iostream>

using namespace std;

int main()
{
    /*
    int age;
    cout << "Enter Your age: ";
    cin >> age; //command for taking input from user
    cout << "Your age is " << age << " years old";
    */

    //What if we want to inpust string instead of number?
    string name;
    cout << "Podaj swoje imie" << endl;
    getline(cin, name); // cin is command for input and second parameter is what we want to store in it
    cout << "Hello " << name;


    return 0;
}
