#include <iostream>
using namespace std;

void insertar (int a[], int n);
void imprimir(int a[], int n);
void menor(int a[], int n);

int main()
{
    int n;
    cout << "Ingrese el limite de numeros: ";
    cin >>n;
    int b[n];
    insertar(b,n);
    imprimir(b,n);
    menor(b,n);
}
void insertar (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >>a[i];
    }
}
void imprimir(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout <<a[i];
    }
}
void menor(int a[], int n)
{
    int b;
    b=a[0];
    for (int i=1;i<n;i++)
    {
        if (b>a[i])
        {
            b=a[i];
        }
    }
    cout << "MENOR ELEMENTO ES: "<<b;
}
