/******************************************************************************
Name: Escritura en archivos .txt

Author: Juan Romero 
Date: 19/08/2021

Purpose: Mostrar la aplicación de escritura de archivos 

Usage: plug and play

*******************************************************************************/

#include <iostream>
#include <fstream> // flujo de archivo
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  ofstream file;
  int a[5] = {1,2,3,4,5};
  int b;
  file.open("archivo.txt",ios::out);
  string nombres[5];
  cout << "Ingrese el valor de la variable b -> "<<endl;
  cin >>b;

  cin.get();
  for(int j=0; j <5; j++){
    cout << "Ingrese el nombre # " << j+1 << endl;
    getline(cin, nombres[j]);
  };


  if ( !file )
    {
      cerr << "No se pudo abrir el archivo" << endl;
      exit( EXIT_FAILURE );
    } // Validación de el archivo de texto          
 
 
  for(int i=0; i <5; i++){
 //   file <<  "Nombre " << i + 1<<" : " << setw(20)<<nombres[i] << "la nota es :"  <<setw(3) << a[i]<<endl;
    file <<  "Nombre " << i + 1<<" : " <<nombres[i] << "la nota es :"  << a[i]<<endl;
  };

  file.close();
  return 0;
}
