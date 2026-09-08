#include <iostream>
#include <string>


struct Producto{
    std::string nombreProducto;
    int stock;
};

void IngresarStock(int &stock, int cantidad);

int main(){
    int cantidad;
    Producto pro;
    std::cout<<"Bienvenido, igrese un producto: ";
    std::cin>>pro.nombreProducto;
    std::cout<<"Cantidad del producto que decea ingresar: ";
    std::cin>>cantidad;
    if (cantidad>50)
    {
        std::cout<<"La cantidad no debe superar 50 unidades del producto";
    }
    else
    {
        pro.stock = 0;
        IngresarStock(pro.stock, cantidad);
        
        std::cout << "\n      Producto registrado       " << std::endl;
        std::cout << "Nombre: " << pro.nombreProducto << std::endl;
        std::cout << "Stock total: " << pro.stock << std::endl;
    }
    

    return 0;
}

void IngresarStock(int &stock, int cantidad){
    stock += cantidad;
}