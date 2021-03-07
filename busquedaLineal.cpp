#include <iostream>
#include <stdlib.h>

using namespace std;

int lineal_search(int *array, int searched, int arraySize)
{
    for (int i = 0; i< arraySize; i++) {
        if (searched == array[i]) {
            cout << "Se encuentra en la posicion " << i + 1 << endl;
        }
   }
}


void print(int *array, int arraySize)
{
   for (int i = 0; i < arraySize; i++) {
        cout << array[i] << "  ";
   }
   cout << endl << endl;
}

int main()
{
    int arraySize;
    int searched;
    cout << "Ingresa el tamanyo del array" << endl;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        array[i] = rand() % 100;
    }

    cout << endl;
    cout << "Array al inicio: " << endl;
    print(array, arraySize);

    cout << "Busqueda lineal -> Ingresa el elemento a buscar: ";
    cin >> searched;
    cout << "Aqui" << endl;
    lineal_search(array, searched, arraySize);
    cout << "Aqui" << endl;

}
