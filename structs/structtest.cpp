#include <iostream>
#include "employeestruct.h"

using namespace std;

int main(int argc, char** argv)
{
  // Created and populate an employee.
  EmployeeT anEmployee;

  anEmployee.firstInitial = 'R';
  anEmployee.middleInitial = 'J';
  anEmployee.lastInitial = 'R';
  anEmployee.employeeNumber = 65;
  anEmployee.salary = 8000;

  // Output the values.

  cout << "Employee: " << anEmployee.firstInitial <<
                          anEmployee.middleInitial <<
                          anEmployee.lastInitial << endl;
  cout << "Number: " << anEmployee.employeeNumber << endl;
  cout << "Salary: " << anEmployee.salary << endl;

  return 0;
}

