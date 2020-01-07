#include <iostream>
#include <fstream>
using namespace std;
typedef int tBus[20];
void ingresar(tBus num, int con);
void mostrar(tBus num, int con);
void buscar(tBus num, int con, int bus);

int main()
{
    setlocale(LC_CTYPE,"Spanish" );
    tBus num;
    int tam, i,bus;
    cout << "INGRESE EL TAMAÑO DEL ARREGLO:";
    cin >> tam;
    ingresar(num,tam);
    cout << "INGRESE EL NUMERO A BUSCAR: ";
    cin >> bus;

    cout << tam;
    mostrar(num, tam);
    buscar(num,tam, bus);

    return 0;
}
void ingresar(tBus num, int con){
    int i,numero, bus;
    for(i=0; i<con;i++){
    cout << "INGRESE UN NUMERO: ";
    cin >> numero;
    num[i]=numero;
    }
}
void mostrar(tBus num, int con){
   int i,numero, bus;
    cout << "LOS ELEMNTOS SON: "<< endl;
    cout << con;
    for(i=0; i<con;i++){
    cout << num[i] << " || ";
    }
    cout << endl;
}
void buscar(tBus num, int con, int bus){
    int i;
    bool c;
    c=false;
    ofstream archivo;
    archivo.open("lista.txt");
    for(i=0;i<con;i++)
    {
        if(num[i]==bus)
        {
            cout << "ELEMENTO ENCONTRADO EN LA POSICION" << i+1;
           archivo <<"ELEMENTO ENCONTRADO EN LA POSICION" << i+1;
            c=true;
        }
    }
    if(c==false){
        cout << "ELEMENTO NO ENCONTRADO ";
    }
    archivo << "LOS ELEMNTOS SON: "<< endl;
    for(i=0; i<con;i++){
    archivo<< num[i] << " || ";
    }
    archivo.close();

}
