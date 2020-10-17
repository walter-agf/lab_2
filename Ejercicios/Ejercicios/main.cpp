#include <iostream>
using namespace std;

void fun_a(int *px, int *py);
void fun_b(int a[], int tam);
void fun_c(double *a, int n, double *promedio, double *suma);

int main(){
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    fun_b(array,10);
    // ¿Cual es la direccion de memoria ?____direccion de memoria 0x61fdf0
    // ¿Ciantos bytes se dedican para almecenar cada elemento del arreglo ?______ 4 bytes
    // ¿Direccion y contenido en arrray [3]? direccion = 0x61fdfc contenido = 3
    // ¿Describa el efecto que tiene la funcion fun_b, sobre el arreglo array?
    /*en la fun_b lo que hace es usar la fun_a, para reemplazar el valor que hay en la poscion del arreglo
    por el imedianto valor posterior, haciendo una modificacion de los punteros, lo intercambia hasta
    que como resultado final entrega los munterios avanzados en un paso*/

    int n,i;
    cout << "\n\nIngrese el tamano del arreglo promedio\n\n --> ";cin >> n;cout << "\n\n";
    double a[n],promedio,suma;
    cout << "Ingrese los valores a sacar el promedio\n";
    for (i = 0; i < n ; i++ ) {
        cout << "\n --> ";
        cin >> a[i];
    }
    fun_c(a,n,&promedio,&suma);
    cout << "\n\n" << promedio << "\n\n";

    unsigned short b[4][2] = {{77,50},{5,2},{28,39},{99,3}};
    //b[0] 0x61fd80     b[0][0]4d   b[0][1]32
    //b[1] 0x61fd84     b[1][0]5    b[1][1]2
    //b[2] 0x61fd88     b[2][0]1c   b[2][1]27
    //b[3] 0x61fd8c     b[3][0]63   b[3][1]3
    cout << b << "\n";
    cout << b+2 << "\n";
    cout << *(b+2) << "\n";
    cout << *(b+2)+1 << "\n";
    cout << *(*(b+2)+1) << "\n";
    cout << b[3][1] << "\n";
    cout << *b+1 << "\n";

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

void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i=0;i<n;i++){
        *suma += a[i];
        cout << "\n" << *suma;
    }
    *promedio = *suma /n;
}
