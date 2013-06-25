/// reading a text file
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "Tabla.h"

//main para hacer pruebas
int main() {

	TABLA tabla;
	char *cadena;
	cadena = tabla.Cargar();

	printf("%s",cadena);
	return 0;
}
