#include <iostream>
#include "Enemigo.h"
#include "EnemigoFinal.h"

const int FILAS = 6;
const int COLUMNAS = 5;

enum ContenidoCasilla {
    VACIO,
    ENEMIGO,
    ENEMIGO_FINAL,
    JUGADOR
};

class Tablero {
private:
    ContenidoCasilla tablero[FILAS][COLUMNAS];
    int jugadorX;
    int jugadorY;

public:
    Tablero() {
        // Inicializar el tablero vacío
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                tablero[i][j] = VACIO;
            }
        }

        // Inicializar la posición del jugador
        jugadorX = 1;
        jugadorY = 3;
        tablero[jugadorY][jugadorX] = JUGADOR;
    }

    void colocarEnemigo(Enemigo enemigo) {
        // Obtener la posición del enemigo
        int posX = enemigo.getPosX();
        int posY = enemigo.getPosY();

        // Verificar si la posición está dentro de los límites del tablero
        if (posX >= 0 && posX < COLUMNAS && posY >= 0 && posY < FILAS) {
            tablero[posY][posX] = ENEMIGO;
        }
    }

    void colocarEnemigoFinal(EnemigoFinal enemigoFinal) {
        // Obtener la posición del enemigo final
        int posX = enemigoFinal.getPosX();
        int posY = enemigoFinal.getPosY();

        // Verificar si la posición está dentro de los límites del tablero
        if (posX >= 0 && posX < COLUMNAS && posY >= 0 && posY < FILAS) {
            tablero[posY][posX] = ENEMIGO_FINAL;
        }
    }

    void mostrarTablero() const {
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                // Mostrar el contenido de cada celda
                switch (tablero[i][j]) {
                case VACIO:
                    std::cout << "     ";
                    break;
                case ENEMIGO:
                    std::cout << " E ";
                    break;
                case ENEMIGO_FINAL:
                    std::cout << " EF";
                    break;
                case JUGADOR:
                    std::cout << " J ";
                    break;
                }
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Tablero tablero;

    Enemigo enemigo1(100, "Enemigo1", 10, 5, 0, 2);
    Enemigo enemigo2(120, "Enemigo2", 15, 8, 1, 4);
    EnemigoFinal enemigoFinal(200, "EnemigoFinal", 20, 10, 5, 4, true, 12);

    tablero.colocarEnemigo(enemigo1);
    tablero.colocarEnemigo(enemigo2);
    tablero.colocarEnemigoFinal(enemigoFinal);

    tablero.mostrarTablero();

    return 0;
}





// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
