/******************************************************************************
Name: Creación de constructores

Author: Juan Romero 
Date: 02/09/2021

Purpose: Mostrar varias formas de crear constructores

Usage: plug and play

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

class ropa{
  public:
    string referencia = "básica";
    string talla = "s";
    int precio_venta = 5000;
    int codigo = 0001;

    void print_precio_prov(){ cout << "El precio del proveedor es: " << precio_proveedor << endl;};
    //**********************           constructores
    ropa (){}; // constructor por defecto vacío
    ropa(int temp_precio_venta , string temp_referencia ); // primer constructor: 1 entrada
    ropa(string _talla, int _cell_mayorista); // segundo constructor: 2 entradas
    ropa ( int temp_precio_proveedor, int temp_codigo, string temp_talla): precio_proveedor(temp_precio_proveedor), codigo(temp_codigo), talla(temp_talla) {
      cout << "Se creó correctamente el producto"<< endl;    
    }; // tercer contructor : 3 entradas
    //***********************     fin constructores
 private:
    int precio_proveedor = 2000;
    int cell_mayorista = 555555555;
};

 ropa :: ropa(int temp_precio_venta , string temp_referencia ) : precio_venta(temp_precio_venta), referencia(temp_referencia){ //  // definición del constructor  primer constructor: 2 entradas
    cout << " Se usó la otra notación de constructores " <<endl;  
    precio_proveedor = 0.6*precio_venta;
 };

ropa::ropa(string _talla, int _cell_mayorista){  // definición del constructor  segundo constructor: 2 entradas
  talla = _talla;
  cell_mayorista = _cell_mayorista;
};

int main() {
  setlocale(LC_ALL, "spanish");

  ropa camisa_basica;
  ropa camisa_cara("M", 555999999);
  ropa camisa_deportiva(6000, "deportiva");
  camisa_cara.referencia = "costosa";
  cout <<"La camisa " << camisa_basica.referencia<<" tiene un costo de: "<<camisa_basica.precio_venta <<endl;
  cout <<"La camisa " << camisa_cara.referencia<<" tiene un costo de: "<<camisa_cara.precio_venta <<endl;
   cout <<"La camisa " << camisa_deportiva.referencia<<" tiene un costo de: "<<camisa_deportiva.precio_venta <<endl; 

  camisa_deportiva.print_precio_prov();
  ropa pantalon( 8000, 7777, "32");
  pantalon.referencia = "pantalón";

  cout << "El código de " << pantalon.referencia<<" es: " << pantalon.codigo <<endl;

  return 0;
};
