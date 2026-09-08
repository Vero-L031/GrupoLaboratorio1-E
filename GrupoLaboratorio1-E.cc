#include <iostream>




//Funciones
void RetirarStock (int *stock, int cantidad);


int main(){



   int Stockretiro = 0; 
    std::cout << "\n¿Cuanta cantidad de stock deseas retirar ?: ";
    std::cin >> Stockretiro; 

   
        RetirarStock(&pro.cantidad, Stockretiro); 
  
    return 0;
}



// Paso por puntero
void RetirarStock(int *stock, int cantidad)
{
    *stock -= cantidad;
}