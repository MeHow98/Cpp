#include <iostream>

using namespace std;

int main()
{
    string phrase = "Akademia Walkiewicz";
    /*
    cout << phrase.length(); //always when using a function You need to write . (dot) and the name of the function
    */

   /*
    phrase [0] = 'B'; // this allows to change chosen character in named string
    cout << phrase[3]; // thanks to this You can display chosen character in named string
    */

   /*
    cout << phrase.find("Walkiewicz", 0); //this allows to find something in given variable syntax: cout << phrase.find("value that we looking for", index of first appearance
   */

   cout << phrase.substr(9, 3); // this allows to take the subsection of a string syntax: cout << phrase.substr(starting index of substring, how much characters we want)

   string phrasesub; // we can write substring as a variable
   phrasesub =  phrase.substr(9, 3);
   cout << phrasesub;
    return 0;
}
