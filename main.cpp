#include <iostream>
void ingresar(int num[]);
void copiar(int num[]);
void imprimir(int copia[],int num[]);

using namespace std;

int main() {
  int num[10];
  
  cout << "Bienvenido a almacenes De Prati\n";
  cout << "Porfavor ingrese los numeros\n";
  ingresar(num);

  return 0;
}

void ingresar(int num[])
{
  for(int i=0;i<10;i++)
  {
    do {
      cout << "Numero " << i+1 << ": " ; 
      cin >> num[i];
      if(num[i]<50 || num[i]>100 )
      {
        cout << "Vuelva a ingresar el valor: ";
      }
      }while (num[i]<50 || num[i]>100);
  }

  copiar(num);

}

void copiar(int num[])
{
  int copia[10];

  for (int i=0;i<10;i++)
  {
    copia[i]=num[i]*0.5;
  }

  imprimir(copia,num);
}

void imprimir(int copia[] , int num[])
{
  cout << endl << "Arreglo orginal\n" << "(";
  for (int i=0;i<10;i++)
  {
    cout << num[i] << ", ";
  }
  cout << ")";

  cout << endl << endl << "Arreglo Multiplicado por 0.5\n" << "(";
  for (int i=0;i<10;i++)
  {
    cout << copia[i] << ", ";
  }
  cout << ")";
}