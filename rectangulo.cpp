#include <iostream>

using namespace std;

int main()
{
  int alto, ancho;
  cout << "Impresor de rectangulos" << endl
       << endl;
  cout << "Alto: ";
  cin >> alto;
  cout << "Ancho: ";
  cin >> ancho;
  for (int i = 0; i < alto; i++)
  {
    for (int j = 0; j < ancho; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}