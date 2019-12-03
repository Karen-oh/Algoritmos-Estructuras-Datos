#include <iostream>
#include <stdlib.h>
using namespace std;
int menu();
typedef int tMonto[20];
int main()
{
    tMonto num;
    int i=0, cont=0,opcion,numero,aux,impar=0,par=0,div;
    cout << "***BIENVENIDO***" <<endl;
    cout << "INGRESE LAS CANTIDADES (INGRESE 0 PARA TERMINAR ) " << endl;
    cin >> numero;
    while(numero!=0){
        num[i]=numero;
        i++;
        cont++;
        cin >> numero;
    }
    opcion=menu();
    while(opcion!=4){
    switch(opcion){
case 1:
    for(int i=0;i<cont;i++){
            for(int j=i+1;j<cont;j++){
             if(num[i]>num[j]){
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;
             }
            }
    }
    for(int i=0;i<cont;i++){
        cout << num[i] <<endl;
    }


    break;
case 2:
    for(int i=0;i<cont;i++){
            for(int j=i+1;j<cont;j++){
             if(num[i]<num[j]){
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;
             }
            }
    }
    for(int i=0;i<cont;i++){
        cout << num[i] <<endl;
    }
    break;
case 3:
    for(int i=0;i<cont;i++){
        if(num[i]%2!=0){
            impar=impar+num[i];
        }
        if(num[i]%2==0){
            par=par+num[i];
        }
    }
    cout << "LA SUMA DE LOS NUMEROS IMPARES ES: "<<impar << endl;
    cout << "LA SUMA DE LOS NUMEROS PARES ES: " << par << endl;
     break;
case 4:
    break;
    }
    opcion=menu();
}
 return 0;
}
int menu(){
int opcion=-1;
cout << "1.-ORDENAR LOS MONTOS DE MENOR A MAYOR" <<endl;
cout << "2.-MOSTRAR LOS MONTOS DE MAYOR A MENOR" << endl;
cout << "3.-MOSTRAR LAS SUMA DE LOS NUMERO IMPARES Y PARES" <<endl;
cout << "4.-SALIR";
cout << "SELECCIONE UNA OPCION...";
cin >>opcion;
system("cls");
while(opcion >4){
   cout << "SELECCIONE UNA OPCION VALIDA..."<<endl;
   cin >> opcion;
}

return opcion;
}
