#include <iostream>

using namespace std;

int main()
{
  int altura;
  cout << "Impresora de triangulo iso." << endl;
  cout << "Captura la altura: ";
  cin >> altura;
  for (int i = altura; i > 0; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}