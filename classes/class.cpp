#include <iostream>
#include <string>
using namespace std;

//Grade class definition
class GradeBook
{
public:
  // Function displays a welcome message to the gradebook user
  void displayMessage( string courseName ) const
  {
    cout << "Welcome to the Grade Book for\n" << courseName << "!"
      << endl;
  }
};

// function main begins program execution
int main()
{
  string nameOfCourse; // string of character to store the course name
  GradeBook myGradeBook; // create a Gradebook object name myGradeBook

  // prompt for and input course name
  cout << "Please enter the course name: " << endl;
  getline( cin, nameOfCourse ); // read a course name with blanks
  cout << endl; // output a blank line

  // call myGradeBook's displayMessage function
  // and pass nameOfcourse as an argument
  myGradeBook.displayMessage( nameOfCourse );
}// end main
