#pragma once

//*****************************************//
//       DECLARACI�N DE FUNCIONES         //
//****************************************//
// esa declaraci�n pragma once es para que se compile s�lo una vez la declaraci�n de funciones
//declaraccion de funciones, as� puedo poner el main antes que las funciones, sino no hace falta hacwer esto

#include <iostream>   //biblioteca que importo
#include <time.h>       // libreria time del sistema
using namespace std;  //esto es para el espacio de nombres, que vamos a usar el std

namespace funcion {
	//funcion para sacar un mensaje por pantalla
	void mensaje(string texto);

	//sobrecarga de funciones para imprimir por pantalla texto y numero
	void mensaje(string texto, int valor);

	//funcion consultar
	int consultar(string consulta);

	//funcion para inicializar el numero aleatorio
	void inicializar();

	//funcion valor aleatorio
	int numeroAleatorio(int minimo, int rango);
}
