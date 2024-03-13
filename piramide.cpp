#include <iostream>

using namespace std;

int main()
{
  int pisos, piso, espacios, asteriscos;
  cout << "Impresora de piramide." << endl;
  cout << "Capture la cantidad de pisos: ";
  cin >> pisos;

  // for (int piso = 1, espacios = pisos; piso <= pisos; piso++, espacios--)
  // {
  //   cout << piso << " - " << espacios << endl;
  // }
  piso = 1;
  espacios = pisos;
  asteriscos = 1;
  while (piso <= pisos)
  {
    for (int i = 1; i < espacios; i++)
    {
      cout << "  ";
    }
    for (int i = 0; i < asteriscos; i++)
    {
      cout << "* ";
    }
    cout << endl;
    piso++;
    espacios--;
    asteriscos += 2;
  }
  return 0;
}