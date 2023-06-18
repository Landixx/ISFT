#include <iostream>
#include <string>

using namespace std;

struct Pedido {
    int numeroMesa;
    string nombreMozo;
    string fecha;
    string hora;
    string primerPlato;
    string platoPrincipal;
    string postre;
};

void mostrarPedido(const Pedido & pedido);

int main(){
    Pedido pedido;

 cout << "Ingrese el número de mesa: ";
 cin >> pedido.numeroMesa;
 cout << "Ingrese el nombre del mozo: ";
 cin.ignore();
 getline(cin, pedido.nombreMozo);
 cout << "Ingrese la fecha: ";
 getline(cin, pedido.fecha);
 cout << "Ingrese la hora del pedido: ";
 getline (cin, pedido.hora);
 cout << "Ingrese el primer plato: ";
 getline(cin, pedido.primerPlato);
 cout << "Ingrese el plato principal: ";
 getline(cin, pedido.platoPrincipal);
 cout << "Ingrese el postre: ";
 getline(cin, pedido.postre);

 cout << "\nComanda recibida:\n";
 mostrarPedido (pedido);

return 0;
 
}

void mostrarPedido (const Pedido & pedido){

    cout << "Número de mesa: " << pedido.numeroMesa << endl;
    cout << "Nombre del mozo: " << pedido.nombreMozo << endl;
    cout << "Fecha: " << pedido.fecha << endl;
    cout << "Hora: " << pedido.hora << endl;
    cout << "Primer plato: " << pedido.primerPlato << endl;
    cout << "Plato principal: " << pedido.platoPrincipal << endl;
    cout << "Postre: " << pedido.postre << endl;
}


