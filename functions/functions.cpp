#include <iostream>

int Add (int primero, int segundo)
{
  std::cout << "En Add(), recibido " << primero << " y " << segundo << "\n";
  return (primero + segundo);
}

int main()
{
  using std::cout;
  using std::cin;

  cout << "Estamos en main()\n";
  int a, b, c;
  cout << "Escribe dos numeros: ";
  cin >> a;
  cin >> b;
  cout << "\nLlamar Add()\n";
  c = Add(a, b);
  cout << "\nde vuelta en Main(). \n";
  cout << "c fue configurado como " << c;
  cout << "\nSaliendo...\n\n";
  return 0;
}