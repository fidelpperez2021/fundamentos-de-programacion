#include <iostream>

int main()
{
	// declaraci�n de variables.
	int NumeroA;
	int NumeroB;
	int Suma;
	
	//Solicitud de n�meros enteros.
	std::cout<<"Introduzca el primer entero:\n"; std::cin>>NumeroA;
	std::cout<<"Introduzca el segundo entero:\n"; std::cin>>NumeroB;

	//Suma de los dos d�gitos
	Suma=NumeroA+NumeroB;
	std::cout<<"El resultado de la suma es:"<<Suma<<::std::endl;
	
	return 0;
}
