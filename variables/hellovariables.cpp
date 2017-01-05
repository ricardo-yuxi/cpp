#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int uninitializedInt;
  int initializedInt = 7;

  cout << uninitializedInt << " is a random value" << endl;
  cout << initializedInt << " was assigned an initial value" << endl;

  return (0);
}