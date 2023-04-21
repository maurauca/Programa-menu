#include <iostream>
#include "funciones.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int cant, edad, i = 0, opcion;

    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            cout << "Ingresa la edad: ";
            cin >> edad;
            agregarEdad(edad);
            system("pause");
            break;
        case 2:
            mostrarEdades();
            system("pause");
            break;
        case 3:
            mostrarEdadesMayores();
            system("pause");
            break;
        case 4:
            break;
        default:
            cout << "Opcion invalida..." << endl;
            system("pause");
            break;
        }
    } while (opcion != 4);

    return 0;
}
