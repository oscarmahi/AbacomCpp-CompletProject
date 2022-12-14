#include "funciones.h"

//***************************************//
//  IMPLEMENTACIÓN DE FUNCIONES         //
//**************************************//


namespace funcion {
    //funcion para sacar un mensaje por pantalla
    void mensaje(string texto) {
        cout << texto << endl;
    }

    //sobrecarga de funciones para imprimir por pantalla texto y numero
    void mensaje(string texto, int valor) {
        cout << texto << " " << valor << endl;
    }

    //funcion consultar y pedir un numero por pantalla
    int consultar(string consulta) {
        int numeroPedido;
        cout << consulta << " ";
        cin >> numeroPedido;

        return numeroPedido;
    }

    //funcion para inicializar el numero aleatorio
    void inicializar() {
        srand(time(NULL));
    }

    //funcion valor aleatorio
    int numeroAleatorio(int minimo, int rango) {
        int valor = minimo + rand() % (rango);     //genera un numero aleatorio pero siempre es el mismo. Por eso hacemos la funcion inicializar

        return valor;
    }
}