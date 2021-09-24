/******************************************************************************
Name: Lectura de archivos txt

Author: Juan Romero 
Date: 16/09/2021

Purpose: 

Usage: Plug and place

*******************************************************************************/

// Creación de un archivo secuencial.
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

int main()
  {
    // el constructor de ifstream abre el archivo
    ifstream archivoClientes( "clientes.txt", ios::in );
    // sale del programa si ifstream no pudo abrir el archivo
  if ( !archivoClientes )
  {
    cerr << "No se pudo abrir el archivo" << endl;
    exit( EXIT_FAILURE );
  } // fin de if
  // obtiene la solicitud del usuario (por ejemplo, saldo en cero, de crédito o débito)
  // int solicitud = obtenerSolicitud();
int i,n=0;
string lines;
for( n =0; getline(archivoClientes,lines); n++); //permite saber cuantas líneas tienen el archivo txt
cout<< "número de lineas "<<n<<endl;
archivoClientes.clear(); // restablece eof para la siguiente entrada
archivoClientes.seekg( 0 ); // se reposiciona al inicio del archivo

  int cuenta[n]; // el número de cuenta
  string nombre[n]; // el nombre del propietario de la cuenta
  double saldo[n]; // el saldo de la cuenta

while ( !archivoClientes.eof() )
  {  
    archivoClientes >> cuenta[i] >> nombre[i] >> saldo[i];
    i++;
    // obtiene una solicitud adicional del usuario
  } // fin de while exterior

archivoClientes.clear(); // restablece eof para la siguiente entrada
archivoClientes.seekg( 0 ); // se reposiciona al inicio del archivo

  for (int j=0;j<=n-1;j++){
    cout << "cuenta"<<j<<": "<<saldo[j]<<endl;
  }

 return 0;
} // fin de main


