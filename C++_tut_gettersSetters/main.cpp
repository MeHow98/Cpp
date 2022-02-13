#include <iostream>

using namespace std;

//we need to keep control over some values, thats why we will use keyword private

class Movie {
   private: //this means only code that is inside of Movie class have acces to values below
    string rating;
   public:
       string title;
       string director;
       Movie(string aTitle, string aDirector, string aRating){
       title = aTitle;
       director = aDirector;
       setRating(aRating);
       }



       void setRating(string aRating){
           if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){   //by doing this we are apllying our rules
           rating = aRating;
       }
           else{
           rating = "NR";
           }
       }

       string getRating(){ //this function allows us to "escape" from private part of code by returning value that we want and since we secured rating value from nonsens like "dog" we can safely use this outside of class
       return rating;
       }
};

int main() //is not able to acces privet part of Movie class anymore
{
   Movie avengers("The Avengers", "Joss Wheadon", "PG-13"); //we want to have control over values that can be put inside of object, in this case nothing can stop me from putting inside some nonsens
   //cout << avengers.rating; // beacues of privet keyword we are not longer able to print this
   //avengers.rating = "Dog"; //we are not able to do that because of private specification of this value
   avengers.setRating("Dog"); //we can pass this inside as a parameter thanks to this function, but it is still a nonsens.
   cout << avengers.getRating();
    return 0;
}

