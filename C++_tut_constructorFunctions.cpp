#include <iostream>

using namespace std;

//constructor is a function that is going to get called when we creating an objcet

class Book {
 public:
    string title;
    string author;
    int pages;

    Book(){             //we can make multiple constructors, in this case we are making some initial values
    title = "No title";
    author = "No author";
    pages = 0;
    }


    Book(string aTitle, string aAuthor, int aPages){ //Initializing values help us make code shorter and more optimized
    title = aTitle;
    author = aAuthor;
    pages = aPages;

       }
};

int main()
{
  /*Book book1("Lord of the Rings"); //we can pass values straight to object
  book1.title = "Lord of the rings";
  book1.author = "J.R.R.Tolkien";
  book1.pages = 1178;

  Book book2("Harry Potter");
  book2.title = "Harry Potter and the Goblet of Fire";          Constructores let us to create objects with bunch of initial values, specyfing values like here is gonna take a lot of time,
  book2.author = "J.K.Rowling";                                 thanks to contructors we dont need to create every time every single variable that we need and tha lets us save time and resources
  book2.pages = 636;

    cout << book1.title << "   " << book1.pages << endl;
    cout << book2.title << "   " << book2.pages << endl;*/

    Book book1("Lord of the Rings", "J.R.R.Tolkien", 1178); //one line of code insted of 4
    cout << book1.title << endl;
    Book book3;
    cout << book3.title; //we have given no data about book3 so code will show us this thanks to adding initial values in constructor


    return 0;
}
