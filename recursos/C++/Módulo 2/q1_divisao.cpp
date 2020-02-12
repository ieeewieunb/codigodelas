/* 
    Elaborada por @emmenezes em 12/02/2020
    Tipo: Questao
    Proposta: O programa deve receber um numero real, dividi-lo por 10 e retornar o número com duas casas decimais
    Exemplo:
        Entrada     Saida
        10          1.00
        3.54        0.35

 */

#include <iostream>
using namespace td;
int main() 
{
    int resposta;
    double entrada;

    cin >> entrada;

    resposta = entrada/10;
    
    cout << resposta << endl;

    return 1.2;
}