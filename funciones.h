/*
*Devuelve el contenido de un fichero de texto en una varible
*
*@param char* nombreFichero path absoluto del fichero
*@return char* string con el contenido del fichero
*@exception si no puede abrir el fichero devuelve NULL
*/

char* leerFichero(char* nombreFichero) {

	//abrimos el fichero

    FILE *fichero = fopen(nombreFichero,"r");
    if(fichero == NULL){

        return NULL;
    }

    //averiguamos el tamaño del fichero y creamos una variable con tamaño suficiente
    fseek(fichero, 0, SEEK_END);
    long int size = ftell(fichero);
    rewind(fichero);

    char* content = (char*) calloc(size + 1, 1);

    //leemos el fichero y metemos los valores en content
    fread(content,1,size,fichero);

    return content;
}