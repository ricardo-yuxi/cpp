#include <iostream>
using namespace std;

int main()
{
  int n = 0;
  cout << "Enter a number: ";
  cin >> n;

  (n % 2 == 0) ? cout << n << " is even." :  cout << n << " is odd.";
  return 0;
}