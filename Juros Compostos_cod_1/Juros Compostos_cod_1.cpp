#include "pch.h"
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

double ConvertePorcentagem();
void Calcular(double porcentagem);

double ConvertePorcentagem() {
    double ValorPorcentagem;
    const int Porcento = 100;
    cout << "\n\tValor da Porcentagem: ";
    cin >> ValorPorcentagem;

    if (!cin || cin.peek() != '\n') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        return ConvertePorcentagem();
    }
    else {
        double porcentagem = ValorPorcentagem / Porcento;
        cout << porcentagem * 100 << "%";
        return porcentagem;
    }
}

void Calcular(double porcentagem) {
    double ValorReal;
    cout << "\n\tDigite um valor para calcular a porcentagem dele: ";
    cin >> ValorReal;

    if (!cin || cin.peek() != '\n') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        Calcular(porcentagem); // Chama a função novamente em caso de entrada inválida
    }
    else {
        double Result = porcentagem * ValorReal;
        cout << "O resultado do cálculo é: " << Result << "\n";
    }
}

int main() {
    bool SimNao = true;

    while (SimNao) {
        double porcentagem = ConvertePorcentagem();
        Calcular(porcentagem);

        cout << "\n\tGostaria de repetir (1) sim ou (0) nao: ";
        cin >> SimNao;
    }

    cout << "Encerrando....\n";
    return 0;
}
