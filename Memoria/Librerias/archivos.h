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
string mensaje();

//Funciones

void crear(){
	//Variables
	ofstream archivo;
	string  nombre;
	string ruta = "Archivos/";
	char nombreArchivo[100];

	//Programa
	setlocale(LC_CTYPE,"Spanish");

	system("cls");
	cout << "¿Com se llamara el archivo?" << endl;
	cout << "=> ";
	cin >> nombre;

	ruta = ruta + nombre + ".txt";

	strcpy(nombreArchivo,ruta.c_str());

	archivo.open(nombreArchivo,ios::app);
	archivo.close();

	notifi = "El archivo se creo con exito";
}

string mensaje(){
    return notifi;
}

