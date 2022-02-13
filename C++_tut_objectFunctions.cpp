#include <iostream>

using namespace std;

//object function is a function that we can put inside of one of our classes

class Student {
 public:
     string name;
     string major;
     double gpa;
     Student(string aName, string aMajor, double aGpa){
     name = aName;
     major = aMajor;
     gpa = aGpa;
     }

     bool hasHonors(){
     if (gpa >= 3.6) //when we want to update gpa for honors it takes just changing this value (3.6 to other value)
     {
         return true;
     }
     else
     {
         return false;
     }
     }
};

int main()
{

 Student student1("John", "Computer science", 3.76);
 Student student2("Maria","Art",3.5);

 cout << student1.hasHonors() << endl; //boolean values are 0 for false and 1 for true so thats why console is printing 0 and 1
 cout << student2.hasHonors();

    return 0;
}
