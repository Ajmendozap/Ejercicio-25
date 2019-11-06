#include <iostream>

void relleno(float **a, int numero);
float Imprimecabeza(float **a, int numero);
float Imprimematriz(float **a,int numero);

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
		float ** M= new float *[numero+2];
        for (int i;i<numero;i++)
        {
            M[i]= new float[numero];
        }
		relleno(M,numero);
        Imprimecabeza(M,numero);
        Imprimematriz(M,numero);
	}

	return 0;
}

void relleno(float **a,int numero)
{
	for (int i=0;i<numero+2;i++)
	{
		for(int j=0;j<numero;j++)
		{
			a[j][i]= i+j;
		}
	}
}

float Imprimecabeza(float **a,int numero)
{
	float suma=0;
	std::cout << "La primera fila es: "<<std::endl;
	for (int i=0;i<numero+2;i++)
	{
        float b= a[0][i];
		std::cout<<""<<b<<""<<std::endl;
	}
	std::cout << "la suma de los elementos de la primera columna es: "<<std::endl;
	for (int i=0;i<numero;i++)
	{
		suma+= a[0][i];
	}
	std::cout<<""<<suma<<""<<std::endl;
}
float Imprimematriz(float **a,int numero)
{
    for(int i;i<numero+2;i++)
    {
        for(int j;j<numero;j++)
        {
            std::cout<<a[j][i];
        }
        std::cout<<std::endl;
    }
}