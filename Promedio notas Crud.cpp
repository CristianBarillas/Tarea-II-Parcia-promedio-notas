#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definición de la estructura Estudiante
struct Estudiante {
    int id;
    string nombre;
    string apellido;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float promedio;
    string resultado;
};

// Función para crear un nuevo registro de estudiante
void crearEstudiante(ofstream &archivo) {
    Estudiante estudiante;

    cout << "\nIngrese el ID del estudiante: ";
    cin >> estudiante.id;
    cout << "Nombre: ";
    cin >> estudiante.nombre;
    cout << "Apellido: ";
    cin >> estudiante.apellido;
    cout << "Nota 1: ";
    cin >> estudiante.nota1;
    cout << "Nota 2: ";
    cin >> estudiante.nota2;
    cout << "Nota 3: ";
    cin >> estudiante.nota3;
    cout << "Nota 4: ";
    cin >> estudiante.nota4;

    // Calcular promedio
    estudiante.promedio = (estudiante.nota1 + estudiante.nota2 + estudiante.nota3 + estudiante.nota4) / 4;

    // Determinar resultado
    estudiante.resultado = (estudiante.promedio >= 60) ? "Aprobado" : "Reprobado";

    // Escribir el estudiante en el archivo
    archivo.write(reinterpret_cast<char *>(&estudiante), sizeof(Estudiante));
}

// Función para leer todos los registros de estudiantes del archivo
void leerEstudiantes(ifstream &archivo) {
    Estudiante estudiante;

    // Leer y mostrar cada estudiante hasta que se alcance el final del archivo
    while (archivo.read(reinterpret_cast<char *>(&estudiante), sizeof(Estudiante))) {
        cout << "\nID: " << estudiante.id << endl;
        cout << "Nombre: " << estudiante.nombre << endl;
        cout << "Apellido: " << estudiante.apellido << endl;
        cout << "Nota 1: " << estudiante.nota1 << endl;
        cout << "Nota 2: " << estudiante.nota2 << endl;
        cout << "Nota 3: " << estudiante.nota3 << endl;
        cout << "Nota 4: " << estudiante.nota4 << endl;
        cout << "Promedio: " << estudiante.promedio << endl;
        cout << "Resultado: " << estudiante.resultado << endl;
    }
}

int main() {
    ofstream archivoSalida("notas.dat", ios::binary | ios::app); // Abre el archivo en modo binario para agregar registros
    ifstream archivoEntrada("notas.dat", ios::binary); // Abre el archivo en modo binario para leer registros

    int opcion;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Agregar Estudiante" << endl;
        cout << "2. Mostrar Estudiantes" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crearEstudiante(archivoSalida);
                break;
            case 2:
                leerEstudiantes(archivoEntrada);
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);

    // Cierre de archivos
    archivoSalida.close();
    archivoEntrada.close();

    return 0;
}
