#include <iostream>

void relleno(float a);
float Imprimecabezas(float *a);

int main(void)
{
	int numero;
	std::cout<<"Escriba un número del 3 al 11"<<std::endl;
	std::cin>> numero;
	if(numero < 3 || numero > 11)
	{
		std::cout<<"El número ingresado no está en el rango solicitado."<<std::endl;
	}
	else{
		float M[numero+2][numero];
		relleno(M,numero);
		Imprimecabezas(M,numero);
	}

	return 0;
}

void relleno(float **a,int numero)
{
	int b= numero+2;
	for (float i=0;i<numero;i++)
	{
		for(float j=0;j<(b);j++)
		{
			a[j][i]= i+j;
		}
	}
}

float Imprimecabezas(float **a,int numero)
{
	int b= numero+2;
	float suma;
	std::cout << "La primera fila es "<<std::endl;
	for (float i=0;i<numero;i++)
	{
		std::cout<<a[i][0]<<std::endl;
	}
	std::cout << "la suma de los elementos de la primera columna es "<<std::endl;
	for (float i=0;i<numero;i++)
	{
		suma+= a[0][i];
	}
	std::cout<<""<<suma<<std::endl;
}
