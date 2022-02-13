#include <iostream>

using namespace std;

//Class is essentialy a new data type tha we have created
// Basicly class is a blueprint for new data type in our program
//We use capital letters for naming new classes

class Book {
 public:
    string title;
    string author;
    int pages;
};

//class is a template of a data type and object is a instance of class (object is a actuall book in this program)

int main()
{
  Book book1;
  book1.title = "Lord of the rings";
  book1.author = "J.R.R.Tolkien";
  book1.pages = 1178;

  Book book2;
  book2.title = "Harry Potter and the Goblet of Fire";
  book2.author = "J.K.Rowling";
  book2.pages = 636;

    cout << book1.title << "   " << book1.pages << endl;
    cout << book2.title << "   " << book2.pages << endl;


    return 0;
}
