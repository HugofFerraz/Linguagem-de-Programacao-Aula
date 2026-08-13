// C02EX13.CPP

#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main(void)
{
  auto numero = 42;
  auto pi     =  3.1416;
  auto letra = 'a';
  auto nome = "Carlos";

  cout << "Numero: " << numero;
  cout << " - Tipo: " << typeid(numero).name() << endl;

  cout << "Pi: " << pi;
  cout << " - Tipo: " << typeid(pi).name() << endl;
  
  cout << "Letra: " << letra;
  cout << " - Tipo: " << typeid(letra).name() << endl;
  
  cout << "Nome: " << nome;
  cout << " - Tipo: " << typeid(nome).name() << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
