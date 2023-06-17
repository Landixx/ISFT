#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

void agregarAsistencia (ofstream& archivo);

struct Asistencia {
    int dni;
    string nombre;
    string apellido;
    string carrera;
    string materia;
    string fecha;
    string hora;
    string estadoAsistencia;
};

int main () {
    int opcion;

    ifstream testOpenFile ("asistencia.csv");
    bool fileExists = testOpenFile.good ();
    testOpenFile.close ();

    ofstream archivo ("asistencia.csv", ios::app);

    if (!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    if (!fileExists) {
        archivo << "DNI, Apellido, Carrera, Materia, Fecha, Hora, Estado_de_Asistencia\n";

    }

    do {

        cout << "=== Menu ===" << endl;
        cout << "1. Agregar asistencia." << endl;
        cout << "2. Salir." << endl;
        cout << "Seleccione una opcion: ";
        cin  >> opcion;

        cin.ignore (numeric_limits<streamsize>::max () , '\n');

        switch (opcion) {
            case 1:
                 agregarAsistencia (archivo);
            break;

            case 2:
                cout << "Saliendo.." << endl;
            break;

            default:
                cout << "Opción invalida. Intente nuevamente." << endl;     
        }
    } while (opcion != 2);

    archivo.close();

    return 0;

}

void agregarAsistencia (ofstream& archivo) {
    Asistencia asistencia;

    cout << "DNI: ";
    cin >> asistencia.dni;
    cout << "Nombre: ";
    cin >> asistencia.nombre;
    cout << "Apellido: ";
    cin >> asistencia.apellido;
    cout << "Carrera: ";
    cin >> asistencia.carrera;
    cout << "Materia: ";
    cin >> asistencia.materia;
    cout << "Fecha: ";
    cin >> asistencia.fecha;
    cout << "Hora: ";
    cin >> asistencia.hora;
    cout << "Estado de la Asistencia: ";
    cin >> asistencia.estadoAsistencia;

    archivo << asistencia.dni << ","
            << asistencia.nombre << ","
            << asistencia.apellido << ","
            << asistencia.carrera << ","
            << asistencia.materia << ","
            << asistencia.fecha << ","
            << asistencia.hora << ","
            << asistencia.estadoAsistencia << "\n";


    cout << "Asistencia cargada correctamente." << endl;
}