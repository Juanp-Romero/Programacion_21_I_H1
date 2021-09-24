
/******************************************************************************
Name: Herencia de clases
Author: Juan Romero 
Date: 09/09/2021

Purpose: herencia múltiple

Usage: plug and play

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class deporte{
  public:
    int tiempo =90;
    int num_tiempos =2;
    int num_jugadores =22;
    void ingresar_financiacion( string fin){financiacion = fin;};
      private:
    string financiacion = "Ardila Lule";
};

class directivos{
  public:
    int nombres[5];
    string accionista_mayoritario;
  private:
    int ganancias = 0;
    string contratos = "0";
};

class equipo_futbol: public deporte, public directivos{
  public:
    string nombre_equipo ="nn";
    string nombre_jugadores[25];
    string nombre_tecnico = "Maturana";
  private:
    string formacion;
    string prox_fichajes[5]; 
};

int main() {

  equipo_futbol bucaros;
  bucaros.nombre_tecnico = "Sergio Novoa";
  bucaros.nombre_equipo = "Atlético Bucaramanga";
  bucaros.accionista_mayoritario = "Oscar Álvarez";
  bucaros.nombre_jugadores[0] = "Sherman Cárdenas";
  bucaros.nombre_jugadores[1] = "Brayan Fernadez";
  bucaros.nombre_jugadores[2] = "James Aguirre";
  bucaros.ingresar_financiacion("Fresa Leche");

  cout << "El equipo " << bucaros.nombre_equipo << " cuenta con estrellas como " <<  bucaros.nombre_jugadores[0] <<" ,"<< bucaros.nombre_jugadores[1] <<" o " << bucaros.nombre_jugadores[2] << ". Busca su primera estrella con " <<  bucaros.nombre_tecnico  << " a la cabeza." <<endl; 
return 0;
}
