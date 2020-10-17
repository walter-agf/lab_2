#include "Funciones.h"

int contar_caracteres(char C_caracteres[50]){
    int B=0;
    for(;C_caracteres[B]!='\0';B++);
    return B;
}

int ejercicio1(int valor_moneda, int valor_ingresado, int n_billetes){
    for (; valor_ingresado >= valor_moneda ; n_billetes += 1){
        valor_ingresado -= valor_moneda;
    }
    cout << valor_moneda << ": " << n_billetes << endl;
    return valor_ingresado;
}

void ejercicio3(int A){
    char *cadena_1= new char[A+1];
    delete[] cadena_1;
    char *cadena_2= new char[A+1];
    delete[] cadena_2;
    cadena_1[A] = '\0';
    cadena_2[A] = '\0';
    fflush(stdin);
    cout << "ingresar la primera cadena: ";
    cin >> cadena_1;
    cout << "ingresar la segunda cadena: ";
    cin >> cadena_2;
    for (int B=0;B<=A;B++){
        if (cadena_1[B]==cadena_2[B]){
            if (B==A) cout << "Las cadenas son iguales" << endl;
        }
        else{
            cout << "Las cadenas son diferentes" << endl;
            break;
        }
    }
}

void ejercicio5(int A){
    int B, C;
    C=A;
    for(B=0;C!=0;B++){
        C=C/10;
    }
    char n_cad[B];
    n_cad[B]='\0';
    while (A!=0){
        n_cad[B-1]=(A%10)+'0';
        A/=10;
        B-=1;
    }
    cout << n_cad << endl;
}

void ejercicio7(int A){
    char *cad = new char[A+1];
    cad[A]='\0';
    //fflush(stdin);
    cout << "Ingrese la cadena: ";
    cin >> cad;
    int k=0;
    char *no_rep = new char[A+1];
    no_rep[0]='\0';
    for(int i=0;cad[i]!='\0';i++){
        for(k=0;no_rep[k]!=cad[i] && no_rep[k]!='\0';k++);
        if(no_rep[k]=='\0'){
            no_rep[k]=cad[i];
            cout << cad[i];
        }
    }
    cout << endl;
    delete[] no_rep;
}

void ejercicio9(int A, char C[50], int B){
    int E=0;
    int S=0;
    int D;
    if (B%A!=0){
        for (D=0;D<B%A;D++){
            E=E*10+(C[D]-'0');
        }
        S+=E;
    }
    while(B>D){
        E=0;
        for (int F=A;F>0;F--){
            E=E*10+(C[D]-'0');
            D++;
        }
        S+=E;
    }
    cout << "Original: " << C << endl;
    cout << "Suma: " << S << endl;
}

char ejercicio11(char P[15][20]){

    int A;
    char B;

    cout << "Ingresar la letra de la fila donde se encuentra el asiento (Tiene que ser mayuscula): ";
    cin >> B;
    cout << "Ingresar el numero donde se encuentra el asiento: ";
    cin >> A;

    if (B<65 or B>79) cout << "No ingreso una letra del rango disponible" << endl;

    else if (A<1 or A>20) cout << "No ingreso un numero del rango disponible" << endl;

    else {
        cout << P[int (B)-65][A] << endl;
        if (P[int (B)-65][A-1]=='-') P[int (B)-65][A-1]='+';
        else P[B-65][A-1]='-';
    }

    return P[15][20];

}

bool ejercicio13(int i, int j, int P[6][8]){
    float S;


    S=P[i][j]+P[i][j-1]+P[i][j+1]+P[i-1][j]+P[i+1][j];
    S/=5;
    if (S>6) return true;
    else return false;
}

void ejercicio15(int l_A[4], int l_B[4]){

    int l_C[4];

        if (l_A[0]<l_B[0]){
            if (l_B[0]<l_A[0]+l_A[2]){
                l_C[0]=l_B[0];

                if (l_A[0]+l_A[2]<l_B[0]+l_B[2]) l_C[2]=(l_A[2]+l_A[0])-l_B[0];

                else l_C[2]=l_B[2];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }
        else{
            if (l_A[0]<l_B[0]+l_B[2]){
                l_C[0]=l_A[0];

                if (l_B[0]+l_B[2]<l_A[0]+l_A[2]) l_C[2]=(l_B[2]+l_B[0])-l_A[0];

                else l_C[2]=l_A[2];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }

        if (l_A[1]<l_B[1]){
            if (l_B[1]-l_B[3]<l_A[1]){
                l_C[1]=l_A[1];

                if (l_A[1]-l_A[3]<l_B[1]-l_B[3]) l_C[3]=l_A[1]-(l_B[1]-l_B[3]);

                else l_C[3]=l_A[3];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }

        else{
            if (l_A[1]-l_A[3]<l_B[1]){
                l_C[1]=l_B[1];

                if (l_B[1]-l_B[3]<l_A[1]-l_A[3]) l_C[3]=l_B[1]-(l_A[1]-l_A[3]);

                else l_C[3]=l_B[3];
            }

            else cout << "Esos dos rectangulos no tienen interseccion." << endl;
        }

    //Mostrar nuevo arreglo

    cout <<"\n \n" << "El nuevo arreglo es: {";

    for (int A=0;A<4;A++){
        cout << l_C[A];
        if (A<3) cout << ", ";
    }

    cout << "}" << endl;
}

int ejercicio17(int A){

    int suma=0;

    if (A%2!=0){
        for (int B=1;B<=A/2;B+=2){
            if (A%B==0) suma+=B;
        }
    }
    else {
        for (int B=1;B<=A/2;B++){
            if (A%B==0) suma+=B;
        }
    }
    return suma;
}
