//Capturar un número cualesquiera e informar 
//si es o no es mayor de 100.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero = 0;
	cout<<"EL PROGRAMA FINALIZARA CUANDO INGRESE 0\n";
	do{
	cout<<"Ingrese un numero: "; cin>>numero;
	
	if(numero > 100){
		cout<<"El numero es mayor a 100.\n\n";
	}
	else if(numero == 100){
		cout<<"El numero es igual a 100.\n\n";
	}
	else
	{
		cout<<"El numero es menor a 100.\n\n";
	}
	
	}while(numero != 0);
	getch();
	return 0;
}
