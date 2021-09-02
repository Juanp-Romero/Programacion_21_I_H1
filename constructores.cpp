/******************************************************************************
Name: Principios de constructores

Author: Juan Romero 
Date: 31/08/2021

Purpose: Explicar los principios básicos de constructores

Usage: 

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

class Universidad{
  public:
    int N_estudiantes;
    int N_escuelas;
    string Ubicacion;
    Universidad(int _N_estudiantes,  int _N_escuelas,  string _Ubicacion);
  private:

    long int presupuesto; 
};

Universidad::Universidad (int _N_estudiantes,  int _N_escuelas,  string _Ubicacion){
  N_estudiantes = _N_estudiantes;
  N_escuelas = _N_escuelas;
  Ubicacion = _Ubicacion;
};

int main() {
  setlocale(LC_ALL, "spanish");

  Universidad UIS(28000,12, "Cr 9  calle 27");
//  UIS.N_estudiantes = 28000;
//  UIS.N_escuelas = 12;
//  UIS.Ubicacion = "Cr 9  calle 27";

cout << "El número de estudiantes es: "   << UIS.N_estudiantes <<endl;

  return 0;
}
