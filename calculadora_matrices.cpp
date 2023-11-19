#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir una matriz
void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const vector<int>& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << ' ';
        }
        cout << endl;
    }
}

// Función para sumar dos matrices
vector<vector<int>> sumaMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas = matriz1.size();
    int columnas = matriz1[0].size();
    vector<vector<int>> resultado(filas, vector<int>(columnas, 0));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultado;
}

// Función para restar dos matrices
vector<vector<int>> restaMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas = matriz1.size();
    int columnas = matriz1[0].size();
    vector<vector<int>> resultado(filas, vector<int>(columnas, 0));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    return resultado;
}

// Función para multiplicar dos matrices
vector<vector<int>> multiplicaMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int columnas2 = matriz2[0].size();
    vector<vector<int>> resultado(filas1, vector<int>(columnas2, 0));

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

// Función para calcular la transpuesta de una matriz
vector<vector<int>> transponerMatriz(const vector<vector<int>>& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();
    vector<vector<int>> transpuesta(columnas, vector<int>(filas, 0));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    return transpuesta;
}

int main() {
    int filas, columnas;
    
    // Solicitar al usuario las dimensiones de las matrices
    cout << "Ingrese el número de filas de las matrices: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de las matrices: ";
    cin >> columnas;

    // Solicitar al usuario las dos matrices
    vector<vector<int>> matriz1(filas, vector<int>(columnas));
    vector<vector<int>> matriz2(filas, vector<int>(columnas));

    cout << "Ingrese la primera matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese la segunda matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Menú de operaciones
    int opcion;
    cout << "Seleccione una operación:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. Transposición de matriz 1" << endl;
    cout << "5. Transposición de matriz 2" << endl;
    cin >> opcion;

    vector<vector<int>> resultado;

    switch (opcion) {
        case 1:
            resultado = sumaMatrices(matriz1, matriz2);
            break;
        case 2:
            resultado = restaMatrices(matriz1, matriz2);
            break;
        case 3:
            resultado = multiplicaMatrices(matriz1, matriz2);
            break;
        case 4:
            resultado = transponerMatriz(matriz1);
            break;
        case 5:
            resultado = transponerMatriz(matriz2);
            break;
        default:
            cout << "Opción no válida." << endl;
            return 1;
    }

    cout << "Resultado:" << endl;
    imprimirMatriz(resultado);

    return 0;
}
 