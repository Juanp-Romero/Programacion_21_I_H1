/******************************************************************************
Name: Clases Abstractas

Author: Juan Romero 
Date: 14/09/2021

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

enum TipoSolicitud { SALDO_CERO = 1, SALDO_CREDITO, SALDO_DEBITO, TERMINAR };
int obtenerSolicitud();
bool debeMostrar( int, double );
void imprimirLinea( int, const string &, double );

int obtenerSolicitud()
{
  int solicitud; // solicitud del usuario
  // muestra las opciones de solicitud
  cout << "\nEscriba la opcion" << endl
  << " 1 - Listar cuentas con saldos en cero" << endl
  << " 2 - Listar cuentas con saldos de credito" << endl
  << " 3 - Listar cuentas con saldos de debito" << endl
  << " 4 - Finalizar ejecucion" << fixed << showpoint;
  do // introduce la solicitud del usuario
  {
    cout << "\n? ";
    cin >> solicitud;
  } while ( solicitud < SALDO_CERO && solicitud > TERMINAR );
    return solicitud;
  } // fin de la función obtenerSolicitud
  // determina si se va a mostrar el registro dado
  bool debeMostrar( int tipo, double saldo )
  {
  // determina si se van a mostrar los saldos en cero
    if ( tipo == SALDO_CERO && saldo == 0 )
      return true;
    // determina si se van a mostrar los saldos de crédito
    if ( tipo == SALDO_CREDITO && saldo < 0 )
      return true;
    // determina si se van a mostrar los saldos de débito
    if ( tipo == SALDO_DEBITO && saldo > 0 )
      return true;
  return false;
} // fin de la función debeMostrar
// muestra un solo registro del archivo
void imprimirLinea( int cuenta, const string &nombre, double saldo )
{
  cout << left << setw( 10 ) << cuenta << setw( 13 ) << nombre
  << setw( 7 ) << setprecision( 2 ) << right << saldo << endl;
} // fin de la función imprimirLinea

int main()
  {
    // el constructor de ifstream abre el archivo
    ifstream archivoClientesSalida( "clientes.txt", ios::in );
    // sale del programa si ifstream no pudo abrir el archivo
  if ( !archivoClientesSalida )
  {
    cerr << "No se pudo abrir el archivo" << endl;
    exit( EXIT_FAILURE );
  } // fin de if
  int cuenta; // el número de cuenta
  string nombre; // el nombre del propietario de la cuenta
  double saldo; // el saldo de la cuenta
  // obtiene la solicitud del usuario (por ejemplo, saldo en cero, de crédito o débito)
  int solicitud = obtenerSolicitud();
  // procesa la solcitud del usuario
  while ( solicitud != TERMINAR )
  {
    switch ( solicitud )
    {case SALDO_CERO:
    cout << "\nCuentas con saldos en cero:\n";
    break;
    case SALDO_CREDITO:
    cout << "\nCuentas con saldos de credito:\n";
    break;
    case SALDO_DEBITO:
    cout << "\nCuentas con saldos de debito:\n";
    break;
  } // fin de switch
  // lee la cuenta, el nombre y el saldo del archivo
  archivoClientesSalida >> cuenta >> nombre >> saldo;
  // muestra el contenido del archivo (hasta eof)
  while ( !archivoClientesSalida.eof() )
  {
    // muestra el registro
    if ( debeMostrar( solicitud, saldo ) )
      imprimirLinea( cuenta, nombre, saldo );
      // lee la cuenta, el nombre y el saldo del archivo
      archivoClientesSalida >> cuenta >> nombre >> saldo;
    } // fin de while interior
    archivoClientesSalida.clear(); // restablece eof para la siguiente entrada
    archivoClientesSalida.seekg( 0 ); // se reposiciona al inicio del archivo
    solicitud = obtenerSolicitud();
    // obtiene una solicitud adicional del usuario
  } // fin de while exterior
  cout << "Fin de ejecucion." << endl;
} // fin de main
// obtiene la solicitud del usuario
