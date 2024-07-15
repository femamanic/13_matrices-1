//halle la sumatoria de elementos 
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
    int n, sumatoria;
    cout << "Ingrese el tamanio de la matriz cuadrada: "; cin >> n;
    int matriz[n][n];
    sumatoria = suma(n, matriz);
    cout << "La sumatoria de la matriz es: " << sumatoria;
    return 0;
}
