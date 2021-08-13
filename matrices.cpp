/******************************************************************************
Name: Matrices

Author: Juan Romero 
Date: 04/22/2021

Purpose: Bases de matrices en c++

Usage: plug and play

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

void Print_matriz(int M[4][3]){
  
  for(int i=0; i<4;i++ ){
    for(int j=0; j<3;j++ ){
      cout <<setw(3)<< M[i][j] <<"  ";
    }
    cout <<endl;
  }    
};

int main() {
  setlocale(LC_ALL, "spanish");

  int V[5]={1,2,3,4,5};
  for(int i=0; i<5;i++ ){
    cout << V[i]<<endl;
  }

  cout <<"Matriz ;"<<endl;

  int M[4][3] ={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
  int M_sumada[4][3];
  
  Print_matriz(M);
  
  return 0;
}
