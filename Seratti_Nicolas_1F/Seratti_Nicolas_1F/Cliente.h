#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "Fecha.h"
#include "Utn.h"

typedef struct
{
    int codigodecliente;
    char apellido[31];
    char nombre[31];
    char sexo;
    char domicilio[51];
    char telefono[21];
    int isEmpty;// 0 si esta vacio, 1 si esta ocupado, -1 si esta borrado
}eCliente;

typedef struct
{
    int codigodejuegos;
    char descripcionjuegos[51];
    float importe;
    int isEmpty;
}eJuegos;

typedef struct
{
    int codigodealquileres;
    int codigodejuegos;
    int codigodecliente;
    eFecha fecha;
}eAlquileres;

void cargarHarcodeEstructurajuegos(eJuegos listado[],int tamanio);
void inicializarEstadosEstructura(eCliente listado[],int tamanio);
void menu(eCliente[], int);
void alta(eCliente[], int, int);
int idAutoIncrementalEstructura(eCliente[], int);
int idAutoIncrementalEstructurajuegos(eJuegos[], int);
void modificarEstructura(eCliente[], int);
char modificarStringEstructura(eCliente listado[],int indice,char caracter[]);
void mostrarListaEstructura(eCliente listado[],int tamanio);
void mostrarUnoEstructura(eCliente listado[],int tamanio,int i);
int buscarPorIdEstructura(eCliente listado[],int tamanio,int id);
void darDeBajaEstructura(eCliente[],int,char[]);
void borrarEntidadEstructura(eCliente listado[],int indice,char mensaje[]);
void ordenarSegunCriterio(eCliente listado[],int tamanio);
void mostrarUnoEstructurajuegos(eJuegos listado[],int tamanio,int i);
void mostrarListaEstructurajuegos(eJuegos listado[],int tamanio);
