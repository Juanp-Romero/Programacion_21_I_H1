/******************************************************************************
Name: Repaso Punteros

Author: Juan Romero 
Date: 10/08/2021

Purpose: Repasar conceptos básicos sobre punteros

Usage: plug and play

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>
#include "sumar.h"

int main() {
  setlocale(LC_ALL, "spanish");
  int V[5]={10,20,30,40,50};
  int *pV = &V[0];
  
  sumar(pV, 5);
    for (int i= 0; i< 5;i++){
      cout << "El nuevo valor del vector es: "<<*(pV+i) << endl;    };
  return 0;
}
