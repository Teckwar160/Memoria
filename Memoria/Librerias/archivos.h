#include <fstream>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//Variables
string notifi;
//Prototipos
void crear();
void abrir();
string quitadorDeEspacios(string palabra);
string mensaje();

//Funciones

void crear(){
	//Variables
	ofstream archivo;
	string  nombre;
	string ruta = "Archivos/";
	char nombreArchivo[100];
	char nombreArchivoSE[100];
	char salida;

	//Programa
	setlocale(LC_CTYPE,"Spanish");

	//crea el archivo

	do{
        system("cls");
        cout << "Notificacion: " << "No usar espacios estos no se tomaran en cuenta" << endl << endl;
        cout << "¿Como se llamara el examen?" << endl;
        cout << "=> ";
        cin >> nombre;

        do{
            cout << "\n¿Es correcto? s/n: ";
            cin  >> salida;

            salida = toupper(salida);
            fflush(stdin);


        }while(salida != 'S' && salida != 'N');

        system("cls");
	}while(salida != 'S');

	nombre = quitadorDeEspacios(nombre);

	ruta = ruta + nombre + ".txt";

	strcpy(nombreArchivo,ruta.c_str());

	archivo.open(nombreArchivoSE,ios::app);
	archivo.close();

	notifi = "El archivo se creo con exito";


}

void abrir(){






}

string quitadorDeEspacios(string palabra){

    int largo;
    int i,a=0;
    char palabraChar[100];
    string palabraSalida;

    strcpy(palabraChar,palabra.c_str());

    largo = strlen(palabraChar);
    while(palabraChar[a]!='\0'){
        if (palabraChar[a]==' '){
            for(i=a;i<largo;i++){
                palabraChar[i]=palabraChar[i+1];
            }
            largo--;
        }
        a++;
    }

    string palabraSalida(palabraChar);

    return palabraSalida;
}

string mensaje(){
    return notifi;
}

