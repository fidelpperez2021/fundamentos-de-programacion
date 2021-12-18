# incluye  < iostream >

int  main ()
{
	// declaración de variables.
	int NumeroA;
	int NumeroB;
	int Suma;
	
	// Solicitud de números enteros.
	std :: cout << " Introduzca el primer entero: \ n " ; std :: cin >> NumeroA;
	std :: cout << " Ingrese el segundo entero: \ n " ; std :: cin >> NumeroB;

	// Suma de los dos dígitos
	Suma = NumeroA + NumeroB;
	std :: cout << " El resultado de la suma es: " << Suma << :: std :: endl;
	
	return  0 ;
}
