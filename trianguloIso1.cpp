#include <iostream>

using namespace std;

int main()
{
  int altura;
  cout << "Impresora de triangulo iso." << endl;
  cout << "Captura la altura: ";
  cin >> altura;
  for (int i = 0; i < altura; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}