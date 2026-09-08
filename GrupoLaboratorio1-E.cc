#include <iostream>
#include <string>

void ConsultarStock(int stock); 

struct Producto{
    std::string nombreProducto;
    int stock = 0;
};

void IngresarStock(int &stock, int cantidad);

int main(){
    int cantidad;
    Producto pro;
    
    std::cout<<"Bienvenido, igrese un producto: ";
    std::getline(std::cin, pro.nombreProducto);
    std::cout<<"Cantidad del producto que decea ingresar: ";
    std::cin>>cantidad;

    
    if (cantidad<50)
    {
        std::cout<<"La cantidad no debe ser menos de 50 unidades del producto";
    }
    else
    {
        pro.stock = 0;
        ConsultarStock(pro.stock);

        IngresarStock(pro.stock, cantidad);
        
        std::cout << "nmbre: " << pro.nombreProducto << std::endl;
        ConsultarStock(pro.stock);
    }
    
    return 0;
}

void ConsultarStock(int stock){
    std::cout << "Stock disponible: " << stock << " unidades." << std::endl; 
}

void IngresarStock(int &stock, int cantidad){
    stock += cantidad;
}