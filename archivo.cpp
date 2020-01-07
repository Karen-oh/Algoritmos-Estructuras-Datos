#include <iostream>
#include <fstream>
#include <string>
void abrir();
void leer();

using namespace std;
int main()
{
	int  opcion; 
	cout << "1.- Abrir archivo" << endl;
	cout << "2.-Leer el archivo" << endl;
	cout <<"3.salir"<<endl;
	cout << "Escoga una opcion: ";
	cin >> opcion;
	while (opcion!=3){
	
	if(opcion==1){
	abrir();	
	}
	if(opcion==2){
		 leer();
	}	
	cout << "1.- Abrir archivo" << endl;
	cout << "2.-Leer el archivo" << endl;
	cout <<"3.salir"<<endl;
	cout << "Escoga una opcion: ";
	cin >> opcion;
	}
	return 0;
}
void abrir(){
    string nombre;
	string apellido;
	int edad;
	char r;
	string Narchivo;
	cout << "Ingrese el nombre del archivo: ";
	getline(cin, Narchivo);
	ofstream archivoP;
	
	archivoP.open(Narchivo.c_str(), ios::out);cin.ignore();
	do
	{
		cout << "\t Ingrese su nombre: ";
		getline(cin, nombre, '\n');
		
		cout << "\t Ingrese su apellido: ";
		getline(cin, apellido, '\n');
		cout << "\t Ingrese su edad: ";
		cin >> edad;
		archivoP << nombre << " " << apellido << " " << edad << "\n";
		cout << "Desea ingresar otro contacto s/n: " << endl;
		cin >> r;
		cin.ignore();
	} while (r == 's');
	archivoP.close();
	
}
void leer(){
	string nombre;
	string apellido;
	int edad;
	ifstream archivoL("contactos.txt");
	string texto;
	while (!archivoL.eof())
	{
		archivoL >> nombre >> apellido >> edad;
		if (!archivoL.eof())
		{
			getline(archivoL, texto);
			cout << "Nombre :" << nombre << endl;
			cout << "Apellido : " << apellido << endl;
			cout << "Edad : " << edad << endl;
		}
	}
	archivoL.close();
}
