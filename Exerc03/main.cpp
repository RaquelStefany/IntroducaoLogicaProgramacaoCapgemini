#include <iostream>
using namespace std;

int main() {
  //Escreva um algoritmo para determinar o consumo médio de um automóvel sendo fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.

  double distancia, combustivel, consumoMedio;

  do{
    cout << "Insira a distancia percorrida: ";
    cin >> distancia;
  }
  while(distancia < 0);

  do{
    cout << "Insira o combustivel gasto: ";
    cin >> combustivel;
  }
  while(combustivel < 0);

  consumoMedio = distancia / combustivel;

  cout << "\nO Consumo Medio do automovel eh " << consumoMedio << endl;
}