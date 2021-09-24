
/******************************************************************************
Name: Herencia de clases
Author: Juan Romero 
Date: 05/11/2020

Purpose: Primera clase de herencia

Usage: plug and play

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class comida{
  public:
    string nombre_plato = "arroz";
    float precio = 10000;
    string  ingrediente1 = "agua";
    string  ingrediente2 = "agua";
    string  ingrediente3 = "agua";
    bool bebida = false;

    // +++++++++ constructores  +++++++++++++++++++++
    comida (string  temp_ingrediente1, string  temp_ingrediente2, string  temp_ingrediente3, float temp_Precio_ingredientes, float temp_precio): ingrediente1(temp_ingrediente1), ingrediente2(temp_ingrediente2), ingrediente3(temp_ingrediente3), Precio_ingredientes(temp_Precio_ingredientes), precio(temp_precio){ ganancia = precio - Precio_ingredientes;};
    comida (){};
  // +++++++++++ fin constructores ++++++++++++
  protected:
    float Precio_ingredientes = 0;
    float ganancia = 0;
};

class restaurante :public comida {
  public:
    string nombre = "Panchita";
    int num_platos = 3;
    int num_mesas = 3;

    // ******** Constructores *********
    restaurante(string  temp_ingrediente1, string  temp_ingrediente2, string  temp_ingrediente3, float temp_Precio_ingredientes, float temp_precio, string temp_nombre): comida (  temp_ingrediente1,   temp_ingrediente2,   temp_ingrediente3, temp_Precio_ingredientes,  temp_precio){ 
      nombre = temp_nombre;
      cout << "El objeto ha sido creado"<<endl;
    }; // Constructor que anida el constructor definido en la clase padre
    restaurante (){};
    // *********************************** Método
    void print_ganancias(){ cout<< "Las ganancias son: " << ganancia;};

  private:
    int num_empleados = 1;
    double dinero_caja = 50000;
    double dinero_deudas = 100000;
};
 
int main() {

 comida mute("mute", "agua", "maiz", 4000, 6000);
 mute.nombre_plato = "Mute Santandereano aburrido";
 cout << "El plato "<< mute.nombre_plato << " es un plato que tiene " << mute.ingrediente3 << ", "<< mute.ingrediente2 << " y "<< mute.ingrediente1 <<". El costo del plato es: " <<mute.precio <<endl;
//  ++++++++++++++++ Objeto 2 / clase heredada / hija +++++++++++
  restaurante Vegas;
  Vegas.num_platos = 5; 
  Vegas.num_mesas = 5;
  Vegas.precio =7000;
  Vegas.nombre_plato = " Plato ejecutivo";
  cout << "El restautate " << Vegas.nombre << " tiene como plato principal " << Vegas.nombre_plato << " a un costo de : " << Vegas.precio <<endl;

//  ++++++++++++++++ Objeto 2 / clase heredada - constructor / hija +++++++++++

  restaurante Guisos ("mute", "agua", "maiz", 4000, 6000, "Guisos");
  cout << Guisos.nombre <<endl;
  cout << "¿El plato tiene bebida ?"<<Guisos.bebida<<endl;

return 0;
}
