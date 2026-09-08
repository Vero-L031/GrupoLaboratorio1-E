#include <iostream>
#include <string>

void ConsultarStock(int stock); 

struct Producto{
    std::string nombreProducto;
    int stock = 0;
};

void IngresarStock(int &stock, int cantidad); 
void RetirarStock(int *stock, int cantidad); 

int main() {
    int cantidad;
    Producto pro;

    std::cout << "Bienevnido, ingrese un producto: ";
    std::cin >> pro.nombreProducto;

    do {
        std::cout << "Cantidad del producto que decea ingresar (Minimo 50): ";
        std::cin >> cantidad;
        if (cantidad < 50) {
            std::cout << "Error: La cantidad no debe ser menor a 50 unidades del producto.\n" << std::endl;
        }
    } while (cantidad < 50);

    pro.stock = 0; 
    IngresarStock(pro.stock, cantidad);

    std::cout << "\n      Producto registrado       " << std::endl;
    std::cout << "Nombre: " << pro.nombreProducto << std::endl;
    std::cout << "Stock total: " << pro.stock << std::endl;

    int Stockretiro = 0;
    std::cout << "¿Cuanta cantidad de stock deseas retirar: ";
    std::cin >> Stockretiro;

    
    if (Stockretiro > pro.stock || Stockretiro <= 0) {
        std::cout << "Error: Cantidad invalida o no hay suficiente stock." << std::endl;
    } else {
        RetirarStock(&pro.stock, Stockretiro);
        std::cout << "\n Retiro exitoso " << std::endl;
        std::cout << "Stock restante: " << pro.stock << std::endl;
    }

    return 0;
}

void IngresarStock(int &stock, int cantidad) {
    stock += cantidad; 
}

void RetirarStock(int *stock, int cantidad) {
    if (stock != nullptr) {
        *stock -= cantidad; 
    }
}
