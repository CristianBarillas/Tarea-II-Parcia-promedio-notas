#include <iostream>
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
};

int main() {
    int n;
    cout << "Ingrese el número de estudiantes: ";
    cin >> n;

    // Crear un arreglo dinámico de estudiantes
    Estudiante *estudiantes = new Estudiante[n];

    // Ingresar los datos de los estudiantes
    for (int i = 0; i < n; ++i) {
        cout << "\nIngrese los datos del estudiante " << i+1 << ":" << endl;
        cout << "ID: ";
        cin >> estudiantes[i].id;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Apellido: ";
        cin >> estudiantes[i].apellido;
        cout << "Nota 1: ";
        cin >> estudiantes[i].nota1;
        cout << "Nota 2: ";
        cin >> estudiantes[i].nota2;
        cout << "Nota 3: ";
        cin >> estudiantes[i].nota3;
        cout << "Nota 4: ";
        cin >> estudiantes[i].nota4;

        // Calcular el promedio
        estudiantes[i].promedio = (estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3 + estudiantes[i].nota4) / 4;

        // Determinar si el estudiante aprobó o reprobó
        if (estudiantes[i].promedio >= 60) {
            cout << "El estudiante " << estudiantes[i].nombre << " " << estudiantes[i].apellido << " ha aprobado con un promedio de " << estudiantes[i].promedio << "." << endl;
        } else {
            cout << "El estudiante " << estudiantes[i].nombre << " " << estudiantes[i].apellido << " ha reprobado con un promedio de " << estudiantes[i].promedio << "." << endl;
        }
    }

    // Liberar la memoria del arreglo dinámico
    delete[] estudiantes;

    return 0;
}
