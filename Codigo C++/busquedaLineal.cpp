#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

const int SIZE = 8192;  /* buffer size for reading /proc/<pid>/status */
int array[50];



void lineal_search(int *array, int searched, int arraySize)
{
    double time;
    double initialTime = clock();
    bool flag = false;
    for (int i = 0; i< arraySize; i++) {
        if (searched == array[i]) {
            cout << "Se encuentra en la posicion " << i + 1 << endl;
            flag = true;
            cout << clock()<<endl;
            cout << initialTime << endl;
            time=1000L*(clock()-initialTime)/CLOCKS_PER_SEC;
            cout << "El tiempo de ejecucion es de " << time << endl;
            return;
        }
   }
   if(flag != true){
       cout << "El numero no se encuentra en el array" << endl;
   }
    cout << clock()<<endl;
    cout << initialTime << endl;
    time=1000L*(clock()-initialTime)/CLOCKS_PER_SEC;
    cout << "El tiempo de ejecucion es de " << time << endl;
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
    int arraySize = 49;
    int searched;


    for (int i = 0; i < arraySize; i++) {
        array[i] = rand();
    }
    ///cout << "Tamano del array: " << (array)
    cout << endl;
    cout << "Array al inicio: " << endl;
    ///print(array, arraySize);

    cout << "Busqueda lineal -> Ingresa el elemento a buscar: ";
    cin >> searched;
    lineal_search(array, searched, arraySize);
    cout << &SIZE << endl;
    cout << &array[arraySize+1] << endl;
}
