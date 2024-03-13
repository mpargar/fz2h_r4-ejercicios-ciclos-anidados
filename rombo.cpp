#include <iostream>

using namespace std;

int main()
{
  int base, asteriscos, espacios;
  cout << "Impresora de rombo." << endl;
  cout << "Capture la base: ";
  cin >> base;

  asteriscos = base % 2 == 0 ? 2 : 1;
  espacios = (base - 1) / 2;
  while (asteriscos <= base)
  {
    for (int i = 1; i <= espacios; i++)
    {
      cout << " ";
    }
    for (int i = 0; i < asteriscos; i++)
    {
      cout << "*";
    }
    cout << endl;
    asteriscos += 2;
    espacios--;
  }
  asteriscos -= 4;
  espacios += 2;
  while (asteriscos >= 1)
  {
    for (int i = 1; i <= espacios; i++)
    {
      cout << " ";
    }
    for (int i = 0; i < asteriscos; i++)
    {
      cout << "*";
    }
    cout << endl;
    asteriscos -= 2;
    espacios++;
  }
  return 0;
}