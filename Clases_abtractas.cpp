/******************************************************************************
Name: Clases Abstractas

Author: Juan Romero 
Date: 14/09/2021

Purpose: 

Usage: Plug and place

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

class construccion{
  public:
    string  material1 = " cemento";
    string  material2 = " piedra";
    string  material3 = " arena";
    virtual void pañetar() =0;
  private:
    double paga =100000;
};

class construir_pared : public construccion{
  public:
    int altura = 2;
    void pañetar(){
      cout << "Aplicar 2 parte de" << material1 <<", 1 parte de" << material2<< " y 1 parte de "  << material3 <<endl;
    };
  private:

};

class construir_techo : public construccion{
  public:
    int altura = 2;
    string material4 = " estuco";
    void pañetar(){
      cout << "Aplicar 2 parte de" << material1 <<", 1 parte de" << material4<< " y 1 parte de "  << material3 <<endl;
    };
  private:

};

int main() {
  setlocale(LC_ALL, "spanish");

  construir_pared pared;
  pared.pañetar();

  construir_techo techo;
  techo.pañetar();

  return 0;
}
