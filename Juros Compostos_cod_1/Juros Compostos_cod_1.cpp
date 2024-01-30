#include "pch.h"
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

double ConvertePorcentagem();
void Calcular(double porcentagem);

double ConvertePorcentagem() {
    double ValorPorcentagem; //     valor que é recebido pelo usuario, um valor de porcentagem EXEMPLO: O DIGITO FOI 5 ENTAO SERA 5%
    const int Porcento = 100;  //   variavel constante valor 100 para fazer o calculo da porcentagem     PORCENTAGEM = ValorPorcentagem / Porcento;  ==   X = 5 / 100
    cout << "\n\tValor da Porcentagem: ";
    cin >> ValorPorcentagem;

    if (!cin || cin.peek() != '\n') { // check se o que foi digitado foi valor numerico
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        return ConvertePorcentagem();
    }
    else {
        double porcentagem = ValorPorcentagem / Porcento;
        //cout << "\n\t" << porcentagem * 100 << "%";
        return porcentagem;
    }
}


// funcao para calcular a porcentagem digitada pelo usuario

void Calcular(double porcentagem) {
    double ValorReal;
    cout << "\n\tDigite um valor para calcular a porcentagem de (" << porcentagem * 100 << ") dele: ";
    cin >> ValorReal;

    if (!cin || cin.peek() != '\n') { // check se o que foi digitado foi valor numerico
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        Calcular(porcentagem); // Chama a função novamente em caso de entrada inválida
    }
    else {
        double Result = porcentagem * ValorReal;
        cout << "\n\tO resultado do calculo e: " << Result << "\n";
    }
}





int main() {
    bool SimNao = true;

    while (SimNao) {
        double porcentagem = ConvertePorcentagem();
        Calcular(porcentagem);

        cout << "\n\tGostaria de repetir (1) sim ou (0) nao: ";
        cin >> SimNao;
        system("cls");
    }
 
    cout << "Encerrando....\n";
    return 0;
}

// código criado: Luís Henrique Nascimento belotti
