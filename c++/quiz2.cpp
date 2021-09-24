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

void Calculo_salud(float *Puntero_salario, float *Puntero_salud, int n){

    for (int i= 0; i< n;i++){
      *(Puntero_salud+i) = *(Puntero_salario+i)*0.125;
    };
  
};

void print_vector(float v[],int n){
    for (int i= 0; i< n;i++){
      cout << "El pago correspondiente a la salud es de: "<< v[i] << endl;
    };
  
}

int main() {
  setlocale(LC_ALL, "spanish");
  cout <<"Por favor ingrese el número de usuarios"<<endl;
  int n; // número de usuarios
  cin >> n;
  float salario[n]; // vector que contienen los salarios
  string nombre[n]; // vector que contienen los salarios
  float edad[n]; // vector que contienen los salarios
  float salud[n]; // vector que contienen los salarios
  float *p_salario = &salario[0]; // puntero del vector salario
  float *p_salud = &salud[0]; // puntero del vector salud
  float *p_edad = &edad[0]; // puntero del vector edad

  for (int i= 0; i< n;i++){
    cin.get();
    cout <<"Por favor ingrese el nombre del usuario "<<i<< ":"<<endl; 
    getline(cin,nombre[i]);
    cout <<"Por favor ingrese el salario del usuario "<<i<< ":"<<endl; 
    cin>> salario[i];
    cout <<"Por favor ingrese la edad del usuario "<<i<< ":"<<endl; 
    cin>> *(p_edad+i); // equivalente a edad [i]
  };

  Calculo_salud(p_salario,p_salud, n);
  print_vector(salud, n);
}

