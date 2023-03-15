#include <iostream>
using namespace std;

int main()
{
    //Faça um algoritmo que receba dois números e ao final mostre o resultado da soma dos dois números lidos.
    
    double num1, num2, total;

    cout << "Insira o primeiro valor: ";
    cin >> num1;

    cout << "Insira o segundo valor: ";
    cin >> num2;

    total = num1 + num2;

    cout << "\nA somas dos dois valores eh " << total << endl;
}