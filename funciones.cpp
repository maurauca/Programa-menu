#include<iostream>
using namespace std;
#define MAX 100
//Arreglo
int edades[10];
int pos = 0; //posicion de elemento

void agregarEdad(int edad);
bool hayEspacio();
void mostrarEdades();
bool esMayor(int edad);
int menu();
void mostrarEdadesMayores();


void agregarEdad(int edad){
    edades[pos] = edad;
    pos++;
}


bool hayEspacio(){
    return pos < MAX;
}

void mostrarEdades(){
    for (int i = 0; i < pos; i++)
    {
        cout<<edades[i]<<endl;
    }
    
}

bool esMayor(int edad){
    return edad >= 18;
}

void mostrarEdadesMayores(){
    for (int i = 0; i < pos; i++)
    {
        if(esMayor(edades[i]))
        cout<<edades[i]<<endl;
    }
    
}
int menu(){
    int opcion;
    system("cls");
    cout << "Listado de edades" << endl;
    cout << "1. Agregar edad" << endl;
    cout << "2. Mostrar edaddes" << endl;
    cout << "3. Mostrar edad mayores o igual a 18" << endl;
    cout << "4. Salir" << endl;
    cout << "Digite la opcion: " << endl;
    cin >> opcion;
    return opcion;
}
