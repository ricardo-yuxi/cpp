#include <iostream>

using namespace std;

int main()
{
  int a, b, c, sum, product, smallest, largest = 0;
  cout << "Enter three integers: ";
  cin >> a >> b >> c;

  sum = a + b + c;
  product = a * b * c;
  cout << "Sum is  " << sum << endl;
  cout << "Average is " << sum/3 << endl;
  cout << "Product is " << product << endl;
  return 0;
}