/******************************************************************************
Name: Serie Fibonnaci

Author: Juan Romero 
Date: 04/22/2021

Purpose: Cálculo de la sumatoria y productoria hasta el n número de la serie Fibonnaci

Usage: Plug play

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

void Fibonacci_calc( int n){
  int v[n];
    v[0]=0;
    v[1]=1;  
    int sumatoria =0;
    int productoria =1;
    for(int j = 2; j < n; j++){   
      v[j] = v[j-1]+v[j-2];
    }
    cout << "Lo números de la serie fibonnaci son: \n" <<endl;
    for(int i = 0; i < n; i++){      
      cout<< v[i]<< endl;      
      sumatoria += v[i];
    }
      for(int i = 0; i < n-1; i++){      
      productoria *=  v[i + 1] ;
    }

    cout <<"La sumatoria hasta "<< n <<" es: "<< sumatoria <<endl;
    cout <<"La productoria hasta "<< n <<" es: "<< productoria <<endl;
}

int main() {
  setlocale(LC_ALL, "spanish");

  int n =0; 
  cout <<"Por favor ingrese el limite de la serie fibonnaci que desea calcular   NIÑO MÚSICA"<<endl;
  cin >> n;  
  Fibonacci_calc(n);
  return 0;
}
