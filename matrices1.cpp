//halle la sumatoria de elementos de una matriz cuadrada encima de la diagonal principal
#include <iostream>
using namespace std;

int suma (int n, int matriz[][100]);

int suma (int n, int matriz[][100]){
    int sumatoria = 0;
    for (int i = 0 ; i < n; i++){
        for (int j = 0; i + 1 < n; j++){
            sumatoria += matriz[][];
        }
    }
    return sumatoria;
}

int main (){
    int n, sumatoria, matriz[n][n];
    cout << "Ingrese el tamanio de la matriz cuadrada: "; cin >> n;
    cout << "La matriz es de elementos: " << endl;
    for (int i = 0 ; i < n; i++){
        for (int j = 0; i + 1 < n; j++){
            cout << matriz[i][j];
        }
        cout << endl;
    }
    sumatoria = suma(n, matriz);
    cout << "La sumatoria de la matriz es: " << sumatoria;
    return 0;
}
