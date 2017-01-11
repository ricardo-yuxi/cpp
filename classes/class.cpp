#include <iostream>
using namespace std;

//Grade class definition
class GradeBook
{
public:
  // Function displays a welcome message to the gradebook user
  void displayMessage() const
  {
    cout << "Welcome to the Grade Book!" << endl;
  }
};

// function main begins program execution
int main()
{
  GradeBook myGradeBook; // create a Gradebook object name myGradeBook
  myGradeBook.displayMessage();
}// end main
