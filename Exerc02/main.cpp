#include <iostream>
using namespace std;

int main() {
  //Faça um algoritmo para informar à Joãozinho se ele foi aprovado na matéria de Lógica para Programação. Joãozinho fez 3 provas e a média necessária para ser aprovado é de 7.

  double nota1, nota2, nota3, media;

  do{
    cout << "Insira a primeira nota: ";
    cin >> nota1;
  }
  while(nota1 < 0);

  do{
    cout << "Insira a segunda nota: ";
    cin >> nota2; 
  }
  while(nota2 < 0);

  do{
    cout << "Insira a terceira nota: ";
    cin >> nota3;
  }
  while(nota3 < 0);

  media = (nota1 + nota2 + nota3) / 3;
  
  cout << "\nMedia = " << media << endl;
  
  if(media >= 7){
    cout << "Joaozinho foi aprovado" << endl;
  }
  else{
    cout << "Joaozinha foi reprovado" << endl;
  }
}