/******************************************************************************
Numeros malvados y felices
Desarrollado online
Autor: Todos
Fecha: Agosto 12/2021
*******************************************************************************/
#include <iostream>
#include <math.h>
#define TAM_MAX 20

using namespace std;

int menu();

bool numero_feliz(unsigned long long numero );

bool numero_malvado(unsigned long long numero);

int vec_digitos (unsigned long long numero, short vector[] );

int enteroToBinario(unsigned long long numero, short vecBinario[]);


int main(){

int opcion, n , m;
opcion = menu();

 unsigned long long numero;

 while(opcion != 2)
   {
	   	cout <<"Ingrese numero ==> "; cin >> numero;
		while(1 >numero or numero > 999999999999999)
		{
			cout <<"Ingrese numero valido ==> "; cin >> numero;
		}

	   	switch(opcion) 
	   	{
	   	    cout <<"\n"<< "-----------------------------------------"<< endl;
	   		case 1:  cout <<"   \n\n\tCaracteristicas de numeros " << endl;
	   		if(numero_feliz(numero ) == true){
	   		    cout <<"\n\n\n"<< numero << " Es feliz"<< endl;
	   		    cout <<"\n"<< "-----------------------------------------"<< endl;
	   		    
	   		} else {
	   		    cout <<"\n\n\n"<< numero << " No es Feliz, es Malvado"<< endl;
	   		    cout <<"\n"<< "-----------------------------------------"<< endl;
	   		    
	   		}
	   		break;
	   		
	   		if (numero_malvado(numero) == true){
	   		    cout<<"\n\n\n"<<numero<<" Es malvado "<<endl;
	   		    
	   		} else {
	   		    cout<<"\n\n\n"<<numero<<" "<<"No es malvado "<<endl;
	   		}
	   		
	   		break;
	   		
	   		case 2: cout << "Salir  hasta luego ";
	   		break;
	   		default :cout<<"Opcion invalida ";

	   }
	   opcion = menu();
   }
   return 0;

}

int menu(){

	int opcion;

cout <<"\n"<< "-----------------------------------------"<< endl;
 	cout<< "\n *Menu de trabajo con Numeros **"<<endl<<endl;
 	cout<< "1. Caracteristicas del numero"<<endl;
 	cout<< "2. Salir"<<endl;
 	cout<< "Ingrese una opcion --->";
 	cin>>opcion;
 	while(opcion < 0 || opcion > 2)
	{
		cout << "\a\a";
		cout << "Opcion no valida, ingrese de nuevo: ";
		cin >> opcion;
	}
	if(opcion == 2 ){
		cout<<"      \n\n\nGracias por utilizar nuestro programa";
	}
	
	return opcion;
}

//*************

bool numero_feliz(unsigned long long numero )
{
	bool esFeliz;
	int contador = 0;
	int n, i;
	unsigned long long suma ;
	short vector[TAM_MAX];

	suma = numero;
	while(suma != 1 and contador <= 200)
	{
		n = vec_digitos(suma, vector );
		suma = 0;
		for ( i = TAM_MAX - n; i< TAM_MAX; i++)
		{
			suma = suma + vector[i] * vector[i];


		}
		contador = contador + 1;


	}
	//cout<<"suma  "<< suma;
	if ( suma == 1)
		{
			esFeliz = true;
		}
	else {
			esFeliz = false;

		}
	//cout << endl << "Numero de Pasadas es ==> " << contador << endl;
	return esFeliz;
	}

//******************

bool numero_malvado(unsigned long long numero)
{
	short vecBinario[TAM_MAX];
	int n,i;
	long cociente;
	int suma=0;

	n=enteroToBinario(numero,vecBinario);

	for (i=TAM_MAX-n;i<TAM_MAX;i++)
	{
		suma=suma+vecBinario[i];
	}
	if (suma%2==0)
	{
		return true;
		}
	else
	{
		return false;
	}
}

//************
 int  vec_digitos(unsigned long long numero, short vector[] )
{

	unsigned int c;
	int i ;
	int n = 1;
	c = numero;

	for( i = 0; i < TAM_MAX; i++)
 	{
 		vector[i] = 0;
	 }

	 i = TAM_MAX - 1;

	while(c >= 10)
	{
		vector[i] = c % 10;
		c = c / 10;
		n = n + 1;
		i-- ;
	}
	vector[i] = c ;
	//cout << " Numero digitos "  << n << endl;
	//mostrarVectorsS( n,  vector );

	return n;
}

//**********
int enteroToBinario(unsigned long long numero, short vecBinario[])
{
	long long cociente;
	int i;
	int n;

	for(i=0;i<TAM_MAX;i++)
	{
		vecBinario[i]=0;
	}
	i=TAM_MAX-1;
	n=1;
	cociente=numero;

	while(cociente>0)
	{
		vecBinario[i]=cociente%2;
		cociente=cociente/2;
		i--;
		n++;

	}
	return n;
}

