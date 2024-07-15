//halle la sumatoria de elementos de una matriz cuadrada encima de la diagonal principal
#include <iostream>
using namespace std;

int suma(int n, int matriz[][100]);

int suma(int n, int matriz[][100]) {
    int sumatoria = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            sumatoria += matriz[i][j];
        }
    }
    return sumatoria;
}

int main() {
    int n, sumatoria;
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;
    
    int matriz[n][100];
    
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
    
    cout << "La matriz es:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    sumatoria = suma(n, matriz);
    cout << "La sumatoria de los elementos encima de la diagonal principal es: " << sumatoria << endl;

    return 0;
}
