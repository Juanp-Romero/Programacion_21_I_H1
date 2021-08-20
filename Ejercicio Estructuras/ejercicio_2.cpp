#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<iomanip>

using namespace std;
int pos=0;
struct carro{
  float costo=0;
  char color[100];
  char marca[100];
  float valor_con_credito=0;
  void compra_credito(){valor_con_credito=(costo*0.05)+costo;};
};
int main() {

  ofstream datos;
  datos.open("datos.txt",ios::out);
  struct carro carros[3];
	
  for(int i=0;i<3;i++){
  	cout<<"Ingrese el valor en millones del carro "<<i+1<<":";cin>>carros[i].costo;
  	cin.get();
  	cout<<"Ingrese el color del carro "<<i+1<<":";cin.getline(carros[i].color,100, '\n');
  	cout<<"Ingrese la marca del carro "<<i+1<<":";cin.getline(carros[i].marca,100, '\n');
  	carros[i].compra_credito();
  	cout<<"El carro marca "<<carros[i].marca<<" de color "<<carros[i].color<< 
    " tiene un valor de " <<carros[i].costo<< " millones y con el credito tiene un valor de "<<carros[i].valor_con_credito<<" millones"<<endl;
  }
	for(int j=0;j<3;j++){
     datos<<"El carro marca "<<setw(8)<<carros[j].marca<<" de color "<<setw(8)<<carros[j].color<< 
    " tiene un valor de "<<setw(6)<<carros[j].costo<< " millones y con el credito tiene un valor de "<<setw(6)<<carros[j].valor_con_credito<<" millones"<<endl;
	}
  system("pause");
  return 0;
}
