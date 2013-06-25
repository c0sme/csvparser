class TABLA {
	public:
		//TABLA();
		//~TABLA();
		//int Cargar(const char *nomFichero, const char *sep);
		char* Cargar();
};


char* TABLA::Cargar () {

	char *cadena;
	cadena = leerFichero("/home/user/Desktop/C/practica/data.csv");
    return cadena;
}