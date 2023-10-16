#include <iostream>

using namespace std;

int main (){
	
	double kilometros, resultado;
	int conversor;

	cout<<"Opcion 1: Metros \n";
	cout<<"Opcion 2: Yardas \n";
	cout<<"Opcion 3: Pies \n";
	cout<<"Opcion 4: Centrimetros \n";
	cout<<"\n Seleccione una opcion ";
	cin>>conversor;
	
	switch (conversor){
	case 1: cout<<"\n Kilometros a convertir: ";
	cin>>kilometros;
	resultado = kilometros * 1000;
	cout<<"La conversion de "<<kilometros<<" kilometros a metros es: "<<resultado;
	break;
	
	case 2: cout<<"\n Kilometros a convertir: ";
	cin>>kilometros;
	resultado = kilometros * 1094;
	cout<<"La conversion de "<<kilometros<<" kilometros a yardas es: "<<resultado;
	break;
	
	case 3: cout<<"\n Kilometros a convertir: ";
	cin>>kilometros;
	resultado = kilometros * 3281;
	cout<<"La conversion de "<<kilometros<<" kilometros a pies es: "<<resultado;
	break;
	
	case 4: cout<<"\n Kilometros a convertir: ";
	cin>>kilometros;
	resultado = kilometros * 100000;
	cout<<"La conversion de "<<kilometros<<" kilometros a centimetros es: "<<resultado;
	break;
	default: cout<<"Opcion incorrecta";
	}
	return 0;
}

