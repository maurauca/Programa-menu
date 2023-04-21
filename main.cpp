#include<iostream>
#include "funciones.cpp"
using namespace std;

int main(int argc, char const *argv[])
{   
    int edad, cant, i= 0;
    cout<<"Cuantas edades desea ingresar? ";
    cin>>cant;

    while(i<cant){
        cout<<"Dime la edad: ";
        cin >> edad;
        if (hayEspacio())
            agregarEdad(edad);
            i++;
        else{
        cout<<"No hay espacio";
        system("pause");
        break;
    }
    } 
    
    system("cls");
    cout<<"Imprimiendo edades:\n";

    mostrarEdades();
    return 0;
}
