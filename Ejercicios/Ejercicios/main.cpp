#include <iostream>
using namespace std;

void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

int main(){
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    fun_b(array,10);
}

void fun_a(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam - 1; f < 1; f++, l--){
        fun_a(&b[f], &b[l]);
    }
}
// ¿Cual es la direccion de memoria ?____direccion de memoria 0x61fdf0
// ¿Ciantos bytes se dedican para almecenar cada elemento del arreglo ?______ 4 bytes
// ¿Direccion y contenido en arrray [3]? direccion = 0x61fdfc contenido = 3
// ¿Describa el efecto que tiene la funcion fun_b, sobre el arreglo array?
/*en la fun_b lo que hace es usar la fun_a, para reemplazar el valor que hay en la poscion del arreglo
por el imedianto valor posterior, haciendo una modificacion de los punteros, lo intercambia hasta
que como resultado final entrega los munterios avanzados en un paso*/
