#include <iostream>
#include <math.h>

// Tomé la estructura del ejemplo con struct
struct Punto {
    double x, y, z;
};

// Función para ordenar los 3 números
void ordenar_tres_numeros(double &a, double &b, double &c) {
    if (a > b) std::swap(a, b);
    if (a > c) std::swap(a, c);
    if (b > c) std::swap(b, c);

}

int main(){
std::cout<< "Ordenar números" << std::endl;

    /*Punto punto1;
    punto1.x = 2;
    punto1.y = 8;
    punto1.z = 1;

    ordenar_tres_numeros(punto1.x, punto1.y, punto1.z);


// Estas lineas me habían quedado por fuera
    std::cout << "Numeros ordenados: " << std::endl; 
    std::cout << punto1.x << " " << punto1.y << " " << punto1.z<< std::endl;
*/
return 0;

}