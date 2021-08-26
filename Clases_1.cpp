/******************************************************************************
Name: Principios básicos de clases

Author: Juan Romero 
Date: 26/08/2021

Purpose:  Crear la primera clase

Usage: Plug and play

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

class biblioteca
{ 
  private:
    string categoria = "NaN";
    int num_inventario = 0;
    bool disponibilidad = false;
  public:
    void Asignar_nomb(string nombre){Nombre_libro = nombre;};
    void Asignar_categoria(string Categoria){categoria = Categoria;};
    void Asignar_inventario(int inventario);
    void Consulta_disponibilidad(){
      cout << "El libro " << Nombre_libro << "está disponible : "<< disponibilidad <<endl;
    }
    string Nombre_libro ="NaN";

};

void biblioteca::Asignar_inventario(int inventario){ cout << "Por favor ingrese el número del inventario del libro "<<num_inventario <<": "<<endl;
  cin >> inventario;
  //num_inventario = inventario;
};
int main() {
  setlocale(LC_ALL, "spanish");

 // biblioteca Rayuela ={"Rayuela", "Jóvenes", 00001,true};
  biblioteca Rayuela;
  Rayuela.Asignar_nomb("Rayuela");
  Rayuela.Asignar_categoria("Infantil");
  Rayuela.Asignar_inventario(0001);
  cout<< "El nombre del libro es: "<< Rayuela.Nombre_libro<<endl;
  Rayuela.Consulta_disponibilidad();

  return 0;
}
