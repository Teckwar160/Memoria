#include <iostream>

#include <ctype.h>
#include <stdio.h>
#include "Librerias\archivos.h"
#include <locale.h>


using namespace std;

//Variables

string notificacion = "Elige una opción";

//Prototipos



//Main



int main(){

	//Variables

	char decision;

	//Programa
	setlocale(LC_CTYPE,"Spanish");
	do{

		cout << "\n\n\tMemoria\n\n";

		cout << "Notificacion: " << notificacion << endl << endl;
		cout << "a) Crear un examen" << endl
             << "b) Salir" << endl;
		cout << "=> ";
		cin >> decision;
		fflush(stdin);

		decision = toupper(decision);

		switch(decision){
			case 'A':
				crear();
				notificacion = mensaje();
				system("cls");
				break;
            case 'B':
                system("cls");
                break;



			default:
				notificacion = "Opción invalida";
				break;
		}
		system("cls");
	}while(decision != 'B');



}

//Funciones
