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
    int D=0;
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

//----------------------------------------------------------------------------------------

void crear_2(char cadena[]){
    int num, cont = 0,n=0;
    char *c = cadena;
    c[0] = '\0';

    do{
        //cout << "Hola\n";
        n++;
        srand(time(NULL)*n);
        num = rand()%100;
        if (num > 64 && num < 91){
            //cout << num  << "\t" << cont << endl;
            c[cont] = char(num);
            cont ++;
        }
    }while(cont != 201);
}

void rep_2 (char cadena[]){
    int cont,cant,pes = 0;
    char *c = cadena;
    char *x = new char[201];
    bool ava = true;

    int dev = 0;

    for (int i = 0; i < 200; i++){
        x[pes] = '\0';
        for (cant = 0;x[cant]!='\0';cant++){
            //cout << c[i] << "\t" << x[cant] << endl;
            if (c[i] == x[cant])ava = false;
        }
        if (ava == true){
            x[pes] = c[i];
            //cout << x[pes];
            cont = 0;
            cant = 0;
            do{
                if (c[cont] == x[pes])cant++;
                cont ++;
            }while (cont != 200);
            cout << x[pes] << ":  " << cant << endl << endl;
            dev += cant;
            pes++;
        }
        ava = true;
    }
    //for (int i=0;i<200;i++)cout << c[i];
    //cout << endl << dev;
}

void cad_int(char cad_4[], int num)
{
    char *cad = cad_4;
    int valor = 0, uni = 0, cont = 0;
    num --;
    for (uni=1;num!=0;num--) uni *= 10;
    //cout << "\n\n" << uni << "\n\n";
    do{
        valor += (int(cad[cont])-48) * uni;
        uni /= 10;
        cont ++;
        //cout << valor << "\n";
    }while(uni >= 1);

    cout << "El numero ingresado en entero es =   " << valor << "\n\n";
}

void min_may(char cad_6[], int num)
{
    char *cad = cad_6;
    int valor, cont = 0, i = num;

    do{
        if (int(cad[cont]) != 0){
            valor = int(cad[cont]);
            if (valor > 96 && valor < 123) {
                valor -= 32;
                cad[cont] = char(valor);
            }
        }
        cont ++;
        num --;

    }while(num != 0);

    cout << "\n\n";

    for (;num<i;num++) cout << cad[num];
}

void num_cad (char cad_8[],int num){
    char *cad = cad_8;
    char *caraceres = new char [num];
    int c_c = 0, valor;
    cout << "\n\nNumero =  ";
    for (int i=0 ; i<=num; i++){
        valor = int(cad[i]);
        if ( valor > 47 && valor < 58){
            cout << cad[i];
        }
        else {
            caraceres[c_c] = cad[i];
            c_c++;
        }
    }
    cout << "\n\nCaracteres =  ";
    for (int i = 0; i <= c_c ; i++) cout << caraceres[i];
    cout << "\n\n";
}

void rom_ara(char cad_10[], int num)
{
    char * cad = cad_10;
    int val = 0;
    for (int i=0; i<num;){
        if(cad[i] == 'I' || cad[i] == 'i' ){
            if (cad[i+1] == 'X' || cad[i+1] == 'x') {
                val += 9;
                i+= 2;
            }
            else if (cad[i+1] == 'V' || cad[i+1] == 'v') {
                val += 4;
                i+= 2;
            }
            else if (cad[i+1] == 'I' || cad[i+1] == 'i') {
                if (cad[i+2] == 'I' || cad[i+2] == 'i') {
                    val += 3;
                    i+= 3;
                }
                else{
                    val += 2;
                    i += 2;
                }
            }
            else {
                val++;
                i++;
            }
        }

        else if (cad[i] == 'V' || cad[i] == 'v' ){
            val += 5;
            i ++;
        }

        else if (cad[i] == 'X' || cad[i] == 'x' ){
            if (cad[i+1] == 'L' || cad[i+1] == 'l'){
                val += 40;
                i += 2;
            }
            else if (cad[i+1] == 'C' || cad[i+1] == 'c'){
                val += 90;
                i += 2;
            }
            else if (cad[i+1] == 'X' || cad[i+1] == 'x'){
                if (cad[i+2] == 'X' || cad[i+2] == 'x'){
                    val += 30;
                    i += 3;
                }
                else{
                    val += 20;
                    i += 2;
                }
            }
            else{
                val += 10;
                i ++;
            }
        }

        else if (cad[i] == 'L' || cad[i] == 'l' ){
            val += 50;
            i ++;
        }

        else if (cad[i] == 'C' || cad[i] == 'c' ){
            if (cad[i+1] == 'D' || cad[i+1] == 'd'){
                val += 400;
                i += 2;
            }
            else if (cad[i+1] == 'M' || cad[i+1] == 'm'){
                val += 900;
                i += 2;
            }
            else if (cad[i+1] == 'C' || cad[i+1] == 'c'){
                if (cad[i+2] == 'C' || cad[i+2] == 'c'){
                    val += 300;
                    i += 3;
                }
                else{
                    val += 200;
                    i += 2;
                }
            }
            else{
                val += 100;
                i ++;
            }
        }

        else if (cad[i] == 'D' || cad[i] == 'd' ){
            val += 500;
            i ++;
        }

        else if (cad[i] == 'M' || cad[i] == 'm' ){
            val += 1000;
            i ++;
        }

        else cout << "\n\n Valor = " << cad[i] << "  INDETERMINADO en Romano\n\n";
    }

    cout << "\n\nEl numero en arabigo es = " << val << "\n\n";
}
