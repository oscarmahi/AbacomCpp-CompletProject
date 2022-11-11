//************************************************************//
//       JUEGO DE ADIVINANZA-ORGANIZACIÓN DE FICHEROS         //
//************************************************************//

#include "funciones.h"
using namespace funcion;

//programa principal
int main() {
    inicializar();
    int valor = numeroAleatorio(1, 100);
    int valorUsuario;
    do {
        valorUsuario = consultar("Introduce un numero del 1 al 100: ");
        if (valor > valorUsuario) {
            mensaje("El valor es mayor.");
        }
        if (valor < valorUsuario) {
            mensaje("El valor es menor");
        }
    } while (valorUsuario != valor);
    mensaje("Acerto, el valor que estaba pensando es el : ", valor);
    return 0;
}

