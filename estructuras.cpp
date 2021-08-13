 	/******************************************************************************
Name: Primer ejercicio de Estructuras

Author: Juan Romero 
Date: 12/08/2021

Purpose: Repasar conceptos básicos sobre Estructuras

Usage: plug and play

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>


struct casa{
  int area =0;
  int altura =0;
  int N_habitaciones=0;
  int pisos=0;
  int area_piso =0;
  void area_por_piso(){area_piso = area/pisos;};

    struct credito{
      int numero_meses =0;
      long int costo_total =0;
      long int cuota_inicial =0;
    }Credito;
};

int main() {
  setlocale(LC_ALL, "spanish");
  casa::credito credito_pepito = {12,100000000,1000000};
  casa pepito = {120,5,3, 2,0, credito_pepito};
  pepito.area_por_piso();
  cout << "La casa de Pepito tiene un área de "<<pepito.area <<endl;
  cout << "La casa de Pepito tiene un pisos de "<<pepito.pisos <<endl;
  cout << "El área de cada piso es: "<< pepito.area_piso << endl;


  casa Tom;
  Tom.area = 80;
  Tom.altura = 5;
  Tom.N_habitaciones = 3;
  Tom.pisos = 1;


return 0;
}

