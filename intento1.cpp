#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;
class Mascota{
	private:
		int codigo;
		char nombre[20];
		char tipo[25];
	public:
		Mascota *sig;
		Mascota *cabeza;
		void insertarLista(Mascota *&); //create
		void mostrarLista(Mascota *);	//read
		void guardarLista(Mascota *);
		void guardarListaaux(Mascota *);	
		void modificarNodo(Mascota *);	//update
		void eliminarNodo(Mascota *);	//delete
		void leerLista(Mascota *&);
		void buscarRegistro(Mascota *);
		bool compararcodigo(long int);
		bool verificarcodigo(long int);
		int validarNumero();
		void error(void);
};
class Veterinarios{
	private:
		int CI;
		char nom[20];	
	public:
		Veterinarios *sig;
		Veterinarios *cabeza;
		void insertarLista(Veterinarios *&); //create
		void mostrarLista(Veterinarios *);	//read
		void guardarLista(Veterinarios *);	
		void guardarListaaux(Veterinarios *);	
		void modificarNodo(Veterinarios *);	//update
		void eliminarNodo(Veterinarios *);	//delete
		void leerLista(Veterinarios *&);
		void buscarRegistro(Veterinarios *);
		bool compararcodigo(long int);
		bool verificarcodigo(long int);
		int validarNumero();
		void error(void);
};
class Diagnostico{
	private:
		int codigo;
		int CI;
		float peso;
		float presion;
		float temperatura;
		char diagnostico[50];	
	public:
		Diagnostico *sig;
		Diagnostico *cabeza;
		void insertarLista(Diagnostico *&); //create
		void mostrarLista(Diagnostico *);	//read
		void guardarLista(Diagnostico *);	
		void modificarNodo(Diagnostico *);	//update
		void eliminarNodo(Diagnostico *);	//delete
		void leerLista(Diagnostico *&);
		void buscarRegistro(Diagnostico *);
		bool compararcodigo(long int);
		bool verificarcodigo(long int);
		int validarNumero();
		void error(void);
};

int main(){
	Mascota *lista = NULL;	//mascotas
	lista=new(Mascota);
	lista->leerLista(lista);
	int opcion;
	do{
		system("cls");
		lista->mostrarLista(lista);
		cout<<("\n\n\n\t\t Menu de opciones ");
		cout<<("\n1.-Insertar nuevo registro");
		cout<<("\n2.-Actualizar el registro");
		cout<<("\n3.-Borrar el registro");
		cout<<("\n4.-Leer el registro");
		cout<<("\n5.-Buscar un registro");
		cout<<("\n6.-Salir del programa");
		cout<<("\n\nSeleccione una opcion: ");
		opcion=lista->validarNumero();
		switch (opcion){
		case 1:
			system("cls");
			lista->insertarLista(lista);
			lista->guardarLista(lista);
			system("pause");
			break;
		case 2:
			system("cls");
			lista->modificarNodo(lista);
			lista->guardarLista(lista);
			system("pause");
			break;
		case 3:
			system("cls");
			lista->eliminarNodo(lista);
			lista->guardarLista(lista);
			system("pause");
			break;
		case 4:
			system("cls");
			lista->mostrarLista(lista);
			system("pause");
			break;
		case 5:
			system("cls");
			lista->buscarRegistro(lista);
			system("pause");
			break;
		case 6:
			system("cls");
			cout<<("\nGracias por utilizar el programa");
			break;
		default:
			system("cls");
			cout<<("\nSeleccione una opcion valida");
		}
	} while (opcion != 6);
	Veterinarios *lista2 = NULL; //veterinarios
	lista2=new(Veterinarios);
	lista2->leerLista(lista2);
	do{
		system("cls");

		lista2->mostrarLista(lista2);

		cout<<("\n\n\n\t\t Menu de opciones ");
		cout<<("\n1.-Insertar nuevo registro");
		cout<<("\n2.-Actualizar el registro");
		cout<<("\n3.-Borrar el registro");
		cout<<("\n4.-Leer el registro");
		cout<<("\n5.-Buscar un registro");
		cout<<("\n6.-Salir del programa");
		cout<<("\n\nSeleccione una opcion: ");
		opcion=lista2->validarNumero();
		switch (opcion){
		case 1:
			system("cls");
			lista2->insertarLista(lista2);
			lista2->guardarLista(lista2);
			system("pause");
			break;
		case 2:
			system("cls");
			lista2->modificarNodo(lista2);
			lista2->guardarLista(lista2);
			system("pause");
			break;
		case 3:
			system("cls");
			lista2->eliminarNodo(lista2);
			lista2->guardarLista(lista2);
			system("pause");
			break;
		case 4:
			system("cls");
			lista2->mostrarLista(lista2);
			system("pause");
			break;
		case 5:
			system("cls");
			lista2->buscarRegistro(lista2);
			system("pause");
			break;
		case 6:
			system("cls");
			cout<<("\nGracias por utilizar el programa");
			break;
		default:
			system("cls");
			cout<<("\nSeleccione una opcion valida");
		}
	} while (opcion != 6);
	Diagnostico *lista3 = NULL; //diagnosticos
	lista3=new(Diagnostico);
	lista3->leerLista(lista3);
	do{
		system("cls");

		lista3->mostrarLista(lista3);

		cout<<("\n\n\n\t\t Menu de opciones ");
		cout<<("\n1.-Insertar nuevo registro");
		cout<<("\n2.-Actualizar el registro");
		cout<<("\n3.-Borrar el registro");
		cout<<("\n4.-Leer el registro");
		cout<<("\n5.-Buscar un registro");
		cout<<("\n6.-Salir del programa");
		cout<<("\n\nSeleccione una opcion: ");
		opcion=lista3->validarNumero();
		switch (opcion){
		case 1:
			system("cls");
			lista3->insertarLista(lista3);
			lista3->guardarLista(lista3);
			system("pause");
			break;
		case 2:
			system("cls");
			lista3->modificarNodo(lista3);
			lista3->guardarLista(lista3);
			system("pause");
			break;
		case 3:
			system("cls");
			lista3->eliminarNodo(lista3);
			lista3->guardarLista(lista3);
			system("pause");
			break;
		case 4:
			system("cls");
			lista3->mostrarLista(lista3);
			system("pause");
			break;
		case 5:
			system("cls");
			lista3->buscarRegistro(lista3);
			system("pause");
			break;
		case 6:
			system("cls");
			cout<<("\nGracias por utilizar el programa");
			break;
		default:
			system("cls");
			cout<<("\nSeleccione una opcion valida");
		}
	} while (opcion != 6);
	return 0;
}
void Mascota::insertarLista(Mascota *&lista){
	bool bandera = false;
	Mascota *MascotaNuevo = (Mascota *)malloc(sizeof(Mascota));
	if (!MascotaNuevo){
		lista->error();
	}
	Mascota *aux;
	cout<<("\n\t\tInsertar nuevo registro\n\n");
	do{
		cout<<("\nIngrese el codigo de la mascota: ");

		scanf("%d", &MascotaNuevo->codigo);
		
		bandera = compararcodigo(MascotaNuevo->codigo);
	} while (bandera);
	cout<<("\nIngrese el nombre de la mascota: ");
	scanf("%s", &MascotaNuevo->nombre);
	cout<<("\nIngrese el tipo de mascota: ");
	scanf("%s", &MascotaNuevo->tipo);
	MascotaNuevo->sig = NULL;
	if (lista == NULL){
		lista = MascotaNuevo;
		cabeza = MascotaNuevo;
	}else{
		aux = lista;

		while (aux->sig != NULL)
		{
			aux = aux->sig;
		}
		aux->sig = MascotaNuevo;
	}
	mostrarLista(MascotaNuevo);
}
void Mascota::error(void){
	perror("Memoria no reservada");
	getch();
	exit(1);
}
void Mascota::mostrarLista(Mascota *lista){

	cout <<("\tLista de Registros de Mascotas\n");
	cout << "\n============================";
	cout <<("\n|| Codigo |  Nombre  |  Tipo  ||");
	cout << "\n============================" << endl;
	while (lista != NULL){
		printf("\t%d %s  %s\n", lista->codigo, lista->nombre, lista->tipo);
		lista = lista->sig;
	}
	cout << "============================" << endl;
}
void Mascota::guardarLista(Mascota *lista){
	int linea = 0;
	ofstream write_fich("Mascota.txt");
	if (!write_fich){
		cout <<("\nOcurrio un error al generar la lista");
	}else{
		while (lista != NULL){
			if (linea == 0){
				write_fich << lista->codigo << " ";
				write_fich << lista->nombre << " ";
				write_fich << lista->tipo << "\n";
				linea++;
			}
			else if (linea != 0){
				if (linea == 1){
					write_fich << lista->codigo << " ";
					linea++;
				}else{
					write_fich << "\n"
							   << lista->codigo << " ";
				}
				write_fich << lista->nombre << " ";
				write_fich << lista->tipo;
			}
			lista = lista->sig;
		}
	}
	write_fich.close();
	
}
void Mascota::guardarListaaux(Mascota *lista){
	int linea = 0;
	ofstream write_fich("Diagnosticos.txt");
	if (!write_fich){
		cout <<("\nOcurrio un error al generar la lista");
	}else{
		while (lista != NULL){
			if (linea == 0){
				write_fich << lista->codigo << " ";
				linea++;
			}
			else if (linea != 0){
				if (linea == 1){
					write_fich << lista->codigo << " ";
					linea++;
				}else{
					write_fich << "\n"
							   << lista->codigo << " ";
			}
			lista = lista->sig;
		}
	}
	write_fich.close();
}
}
void Mascota::modificarNodo(Mascota *Lista){
	bool bandera = false;
	bool bandera2 = false;
	int contador = 0;
	Mascota *actual = (Mascota *)malloc(sizeof(Mascota));
	actual = Lista;
	long int codigo_buscar;
	cout <<("\n\t\tModificar el registro\n\n");
	cout <<("\nIngrese el valor del codigo a buscar: ");
	scanf("%d", &codigo_buscar);
	do{
		if (actual->sig == NULL){
			contador++;
		}
		if (actual->codigo == codigo_buscar){
			do{

				cout <<("\nIngrese el codigo de la mascota: ");
				scanf("%d", &actual->codigo);
				bandera2 = compararcodigo(actual->codigo);
			} while (bandera2);
			cout <<("\nIngrese el nombre de la mascota: ");
			scanf("%s", &actual->nombre);
			cout <<("\nIngrese el tipo de mascota: ");
			scanf("%s", &actual->tipo);
			bandera = true;
		}
		actual = actual->sig;
	} while (actual != NULL && (contador == 0));
	if (bandera == true){
		cout <<("\nNodo modificado\n");
	}else{
		cout <<("\nElemento no encontrado\n");
	}
}
void Mascota::eliminarNodo(Mascota *lista){
	if (lista != NULL){
		Mascota *aux_borrar = (Mascota *)malloc(sizeof(Mascota));
		Mascota *anterior = NULL;
		aux_borrar = lista;
		long int codigo_eliminar;
		cout <<("\n\t\tEliminar el registro\n\n");
		cout <<("\nIngrese el valor del codigo a eliminar: ");
		scanf("%d", &codigo_eliminar);

		while ((aux_borrar != NULL) && (aux_borrar->codigo != codigo_eliminar)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->sig;
		}

		if (aux_borrar == NULL){
			cout <<("\nElemento no encontrado\n");
		}else{
			if (anterior == NULL){
				cout <<("\nEl elemento no se puede eliminar\n");
			}else{
				anterior->sig = aux_borrar->sig;
				delete aux_borrar;
				cout <<("\nNodo eliminado con exito\n");
			}
		}
	}else{
		cout <<("La lista se encuentra vacia\n");
	}
}
void Mascota::leerLista(Mascota *&lista){
	ifstream ar("ReyesAdeber9.txt");
	if (!ar){
		cout <<("\nOcurrio algun problema al cargar el archivo con los nodos\n");
		system("Pause");
		exit(1);
	}
	while (!ar.eof()){
		Mascota *MascotaNuevo =new(Mascota);
		ar >> MascotaNuevo->codigo;
		ar >> MascotaNuevo->nombre;
		ar >> MascotaNuevo->tipo;
		if (!MascotaNuevo){
			lista->error();
		}
		Mascota *aux;
		MascotaNuevo->sig = NULL;
		if (lista == NULL){
			lista = MascotaNuevo;
			cabeza = MascotaNuevo;
		}else{
			aux = lista;
			while (aux->sig != NULL){
				aux = aux->sig;
			}
			aux->sig = MascotaNuevo;
		}
	}
}
void Mascota::buscarRegistro(Mascota *Lista){
	bool bandera = false;
	bool contador = 0;
	Mascota *actual = (Mascota *)malloc(sizeof(Mascota));
	actual = Lista;
	long int codigo_buscar;
	printf("\n\t\tBuscar el registro\n\n");
	printf("\nIngrese el valor del codigo a buscar: ");
	scanf("%d", &codigo_buscar);

	do
	{
		if (actual->codigo == codigo_buscar)
		{
			if (actual->sig == NULL)
			{
				contador++;
			}
			printf("\nNombre: %s", actual->nombre);
			printf("\nTipo: %s", actual->tipo);
			printf("\nCodigo: %d\n", actual->codigo);

			bandera = true;
		}
		actual = actual->sig;
	} while (actual != NULL && (contador == 0));

	if (bandera == false)
	{
		printf("\nMascota no encontrada\n");
	}
}
bool Mascota::compararcodigo(long int codigo){
	bool codigoEncontrada = false;
	ifstream ar("ReyesAdeber9.txt");
	char otros[20];
	long int codigoActual;
	if (!ar)
	{
		printf("\nOcurrio algun problema al cargar el archivo con los nodos\n");
		system("Pause");
	}
	while (!ar.eof())
	{
		ar >> codigoActual;
		if (codigoActual == codigo)
		{
			printf("\nYa existe una mascota con ese numero de codigo\n");
			codigoEncontrada = true;
		}
		ar >> otros;
		ar >> otros;
	}
	ar.close();

	return codigoEncontrada;
}
bool Mascota::verificarcodigo(long int codigo){

	int num;
	int sumatotal, pares = 0, impares = 0;
	int resultado1, resultado2;
	long int c, abs;
	int contador = 1, mul;
	abs = codigo;

	if (codigo != 0)
	{

		c = codigo / 10;

		resultado1 = codigo % 10;
		num = resultado1;
		codigo = c;

		do
		{
			c = codigo / 10;
			resultado1 = codigo % 10;
			if (contador == 1)
			{
				mul = resultado1 * 2;
				if (mul > 9)
					mul -= 9;
				contador = 0;
				impares += mul;
			}
			else
			{
				pares += resultado1;
				contador = 1;
			}

			codigo = c;

		} while (c != 0);

		sumatotal = pares + impares;

		resultado2 = (10 - (sumatotal % 10));

		if (resultado2 == 10)
			resultado2 = 0;

		if (resultado2 == num)
		{
			return true;
		}
		else
		{
			printf("\nEl codigo ingresado no es valido\n");
			return false;
		}
	}
	else
	{
		printf("\nEl codigo ingresado no es valido\n");
		return false;
	}
}
int Mascota::validarNumero(){
	int numero;
	int entrada_valida;
	int ch;

	do
	{
		fflush(stdout); //se utiliza (usualmente mediante fflush(stdout)) cuando uno debe asegurarse que una cadena de texto sin importar su longitud
						//y caracteres que la componen se envie a la salida estandar y no se quede "atascada" en el bufer.

		if ((entrada_valida = scanf("%d", &numero)) == EOF)
		{
			return EXIT_FAILURE;
		}
		else
		{
			printf("\nIngrese una opcion valida:");
		}
		while ((ch = getchar()) != EOF && ch != '\n')
			;

	} while (!entrada_valida);
	return numero;
}
void Veterinarios::insertarLista(Veterinarios *&lista){
	bool bandera = false;
	Veterinarios *vetNuevo = (Veterinarios *)malloc(sizeof(Veterinarios));
	if (!vetNuevo){
		lista->error();
	}
	Veterinarios *aux;
	cout<<("\n\t\tInsertar nuevo registro\n\n");
	do{
		cout<<("\nIngrese el codigo del veterinario: ");

		scanf("%d", &vetNuevo->CI);

		bandera = compararcodigo(vetNuevo->CI);
	} while (bandera);
	cout<<("\nIngrese el nombre del veterinario: ");
	scanf("%s", &vetNuevo->nom);
	vetNuevo->sig = NULL;
	if (lista == NULL){
		lista = vetNuevo;
		cabeza = vetNuevo;
	}else{
		aux = lista;

		while (aux->sig != NULL)
		{
			aux = aux->sig;
		}
		aux->sig = vetNuevo;
	}
	mostrarLista(vetNuevo);
}
void Veterinarios::error(void){
	perror("Memoria no reservada");
	getch();
	exit(1);
}
void Veterinarios::mostrarLista(Veterinarios *lista){

	cout <<("\tLista de Registros de veterinarios\n");
	cout << "\n============================";
	cout <<("\n|| Codigo |  Nombre ||");
	cout << "\n============================" << endl;
	while (lista != NULL){
		printf("\t%d  %s\n", lista->CI, lista->nom);
		lista = lista->sig;
	}
	cout << "============================" << endl;
}
void Veterinarios::guardarLista(Veterinarios *lista){
	int linea = 0;
	ofstream write_fich("Veterianrios.txt");
	if (!write_fich){
		cout <<("\nOcurrio un error al generar la lista");
	}else{
		while (lista != NULL){
			if (linea == 0){
				write_fich << lista->CI << " ";
				write_fich << lista->nom << "  \n";

				linea++;
			}
			else if (linea != 0){
				if (linea == 1){
					write_fich << lista->CI << " ";
					linea++;
				}else{
					write_fich << "\n"
							   << lista->CI << " ";
				}
				write_fich << lista->nom<< " ";
			}
			lista = lista->sig;
		}
	}
	write_fich.close();
	
}
void Veterinarios::guardarListaaux(Veterinarios *lista){
	int linea = 0;
	ofstream write_fich("Diagnosticos.txt");
	if (!write_fich){
		cout <<("\nOcurrio un error al generar la lista");
	}else{
		while (lista != NULL){
			if (linea == 0){
				write_fich << lista->CI << " \n";
				linea++;
			}
			else if (linea != 0){
				if (linea == 1){
					write_fich << lista->CI << " ";
					linea++;
				}else{
					write_fich << "\n"
							   << lista->CI << " ";
				}
			}
			lista = lista->sig;
		}
	}
	write_fich.close();
}
	
void Veterinarios::modificarNodo(Veterinarios *Lista){
	bool bandera = false;
	bool bandera2 = false;
	int contador = 0;
	Veterinarios *actual = (Veterinarios *)malloc(sizeof(Veterinarios));
	actual = Lista;
	long int codigo_buscar;
	cout <<("\n\t\tModificar el registro\n\n");
	cout <<("\nIngrese el valor del codigo a buscar: ");
	scanf("%d", &codigo_buscar);
	do{
		if (actual->sig == NULL){
			contador++;
		}
		if (actual->CI == codigo_buscar){
			do{

				cout <<("\nIngrese el codigo de la mascota: ");
				scanf("%d", &actual->CI);
				bandera2 = compararcodigo(actual->CI);
			} while (bandera2);
			cout <<("\nIngrese el nombre de la mascota: ");
			scanf("%s", &actual->nom);
			bandera = true;
		}
		actual = actual->sig;
	} while (actual != NULL && (contador == 0));
	if (bandera == true){
		cout <<("\nNodo modificado\n");
	}else{
		cout <<("\nElemento no encontrado\n");
	}
}
void Veterinarios::eliminarNodo(Veterinarios *lista){
	if (lista != NULL){
		Veterinarios *aux_borrar = (Veterinarios *)malloc(sizeof(Veterinarios));
		Veterinarios *anterior = NULL;
		aux_borrar = lista;
		long int codigo_eliminar;
		cout <<("\n\t\tEliminar el registro\n\n");
		cout <<("\nIngrese el valor del codigo a eliminar: ");
		scanf("%d", &codigo_eliminar);

		while ((aux_borrar != NULL) && (aux_borrar->CI != codigo_eliminar)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->sig;
		}

		if (aux_borrar == NULL){
			cout <<("\nElemento no encontrado\n");
		}else{
			if (anterior == NULL){
				cout <<("\nEl elemento no se puede eliminar\n");
			}else{
				anterior->sig = aux_borrar->sig;
				delete aux_borrar;
				cout <<("\nNodo eliminado con exito\n");
			}
		}
	}else{
		cout <<("La lista se encuentra vacia\n");
	}
}
void Veterinarios::leerLista(Veterinarios *&lista){
	ifstream ar("veterinarios.txt");
	if (!ar){
		cout <<("\nOcurrio algun problema al cargar el archivo con los nodos\n");
		system("Pause");
		exit(1);
	}
	while (!ar.eof()){
	Veterinarios *vetNuevo =new(Veterinarios);
		ar >> vetNuevo->CI;
		ar >> vetNuevo->nom;
		if (!vetNuevo){
			lista->error();
		}
		Veterinarios *aux;
		vetNuevo->sig = NULL;
		if (lista == NULL){
			lista = vetNuevo;
			cabeza = vetNuevo;
		}else{
			aux = lista;
			while (aux->sig != NULL){
				aux = aux->sig;
			}
			aux->sig =vetNuevo;
		}
	}
}
void Veterinarios::buscarRegistro(Veterinarios *Lista){
	bool bandera = false;
	bool contador = 0;
    Veterinarios *actual = (Veterinarios *)malloc(sizeof(Veterinarios));
	actual = Lista;
	long int codigo_buscar;
	printf("\n\t\tBuscar el registro\n\n");
	printf("\nIngrese el valor del codigo a buscar: ");
	scanf("%d", &codigo_buscar);

	do
	{
		if (actual->CI == codigo_buscar)
		{
			if (actual->sig == NULL)
			{
				contador++;
			}
			printf("\nNombre: %s", actual->nom);
			printf("\nCodigo: %d\n", actual->CI);

			bandera = true;
		}
		actual = actual->sig;
	} while (actual != NULL && (contador == 0));

	if (bandera == false)
	{
		printf("\nMascota no encontrada\n");
	}
}
bool Veterinarios::compararcodigo(long int codigo){
	bool codigoEncontrada = false;
	ifstream ar("veterinarios.txt");
	char otros[20];
	long int codigoActual;
	if (!ar)
	{
		printf("\nOcurrio algun problema al cargar el archivo con los nodos\n");
		system("Pause");
	}
	while (!ar.eof())
	{
		ar >> codigoActual;
		if (codigoActual == codigo)
		{
			printf("\nYa existe una mascota con ese numero de codigo\n");
			codigoEncontrada = true;
		}
		ar >> otros;
		ar >> otros;
	}
	ar.close();

	return codigoEncontrada;
}
bool Veterinarios::verificarcodigo(long int codigo){

	int num;
	int sumatotal, pares = 0, impares = 0;
	int resultado1, resultado2;
	long int c, abs;
	int contador = 1, mul;
	abs = codigo;

	if (codigo != 0)
	{

		c = codigo / 10;

		resultado1 = codigo % 10;
		num = resultado1;
		codigo = c;

		do
		{
			c = codigo / 10;
			resultado1 = codigo % 10;
			if (contador == 1)
			{
				mul = resultado1 * 2;
				if (mul > 9)
					mul -= 9;
				contador = 0;
				impares += mul;
			}
			else
			{
				pares += resultado1;
				contador = 1;
			}

			codigo = c;

		} while (c != 0);

		sumatotal = pares + impares;

		resultado2 = (10 - (sumatotal % 10));

		if (resultado2 == 10)
			resultado2 = 0;

		if (resultado2 == num)
		{
			return true;
		}
		else
		{
			printf("\nEl codigo ingresado no es valido\n");
			return false;
		}
	}
	else
	{
		printf("\nEl codigo ingresado no es valido\n");
		return false;
	}
}
int Veterinarios::validarNumero(){
	int numero;
	int entrada_valida;
	int ch;

	do
	{
		fflush(stdout); //se utiliza (usualmente mediante fflush(stdout)) cuando uno debe asegurarse que una cadena de texto sin importar su longitud
						//y caracteres que la componen se envie a la salida estandar y no se quede "atascada" en el bufer.

		if ((entrada_valida = scanf("%d", &numero)) == EOF)
		{
			return EXIT_FAILURE;
		}
		else
		{
			printf("\nIngrese una opcion valida:");
		}
		while ((ch = getchar()) != EOF && ch != '\n')
			;

	} while (!entrada_valida);
	return numero;
}
void Diagnostico::insertarLista(Diagnostico *&lista3){
	bool bandera = false;
	Diagnostico *diagNuevo = (Diagnostico *)malloc(sizeof(Diagnostico));
	if (!diagNuevo){
		lista3->error();
	}
	Diagnostico *aux;
	cout<<("\n\t\tInsertar nuevo registro\n\n");
	do{
		cout<<("\nIngrese el codigo del animal a tratar: ");
		scanf("%d", &diagNuevo->codigo);
		bandera = compararcodigo(diagNuevo->codigo);
	} while (bandera);
	cout<<("\nIngrese el peso del animal: ");
	scanf("%f", &diagNuevo->peso);
	cout<<("\nIngrese la presion del animal: ");
	scanf("%f", &diagNuevo->presion);
	cout<<("\nIngrese la temperatura del animal: ");
	scanf("%f", &diagNuevo->temperatura);
	cout<<("\nIngrese el diagnostico del animal: ");
	scanf("%s", &diagNuevo->diagnostico);
	diagNuevo->sig = NULL;
	if (lista3 == NULL){
		lista3 = diagNuevo;
		cabeza = diagNuevo;
	}else{
		aux = lista3;

		while (aux->sig != NULL)
		{
			aux = aux->sig;
		}
		aux->sig = diagNuevo;
	}
	mostrarLista(diagNuevo);
}
void Diagnostico::error(void){
	perror("Memoria no reservada");
	getch();
	exit(1);
}
void Diagnostico::mostrarLista(Diagnostico *lista){

	cout <<("\tLista de Registros de diagnosticos\n");
	cout << "\n============================";
	cout <<("\n|| Codigo |  Nombre |   Peso  |  Presion  | Temperatura  | Diagnostico ||");
	cout << "\n============================" << endl;
	while (lista != NULL){
		printf("\t%d  %s   %f    %f   %f   %s\n", lista->codigo, lista->CI,lista->peso,lista->presion,lista->temperatura,lista->diagnostico);
		lista = lista->sig;
	}
	cout << "============================" << endl;
}
void Diagnostico::guardarLista(Diagnostico *lista){
	int linea = 0;
	ofstream write_fich("diagnosticos.txt");
	if (!write_fich){
		cout <<("\nOcurrio un error al generar la lista");
	}else{
		while (lista != NULL){
			if (linea == 0){
				write_fich << lista->codigo << " ";
				write_fich << lista->CI << "  \n";
				write_fich << lista->peso << "  \n";
				write_fich << lista->presion << "  \n";
				write_fich << lista->temperatura << "  \n";
				write_fich << lista->diagnostico << "  \n";
				linea++;
			}
			else if (linea != 0){
				if (linea == 1){
					write_fich << lista->CI << " ";
					linea++;
				}else{
					write_fich << "\n"
							   << lista->codigo<< " ";
				}
				write_fich << lista->CI<< " ";
				write_fich << lista->peso << "  \n";
				write_fich << lista->presion << "  \n";
				write_fich << lista->temperatura << "  \n";
				write_fich << lista->diagnostico << "  \n";
			}
			lista = lista->sig;
		}
	}
	write_fich.close();
}
void Diagnostico::modificarNodo(Diagnostico *Lista){
	bool bandera = false;
	bool bandera2 = false;
	int contador = 0;
	Diagnostico *actual = (Diagnostico *)malloc(sizeof(Diagnostico));
	actual = Lista;
	long int codigo_buscar;
	cout <<("\n\t\tModificar el registro\n\n");
	cout <<("\nIngrese el valor del codigo a buscar: ");
	scanf("%d", &codigo_buscar);
	do{
		if (actual->sig == NULL){
			contador++;
		}
		if (actual->CI == codigo_buscar){
			do{

				cout <<("\nIngrese el codigo del diagnostico: ");
				scanf("%d", &actual->CI);
				bandera2 = compararcodigo(actual->CI);
			} while (bandera2);
			cout <<("\nIngrese el peso de la mascota: ");
			scanf("%f", &actual->peso);
			cout <<("\nIngrese la presion de la mascota: ");
			scanf("%f", &actual->presion);
			cout <<("\nIngrese la temperatura de la mascota: ");
			scanf("%f", &actual->temperatura);
			cout <<("\nIngrese el diagnostico de la mascota: ");
			scanf("%s", &actual->diagnostico);
			bandera = true;
		}
		actual = actual->sig;
	} while (actual != NULL && (contador == 0));
	if (bandera == true){
		cout <<("\nNodo modificado\n");
	}else{
		cout <<("\nElemento no encontrado\n");
	}
}
void Diagnostico::eliminarNodo(Diagnostico *lista){
	if (lista != NULL){
		Diagnostico *aux_borrar = (Diagnostico *)malloc(sizeof(Diagnostico));
		Diagnostico *anterior = NULL;
		aux_borrar = lista;
		long int codigo_eliminar;
		cout <<("\n\t\tEliminar el registro\n\n");
		cout <<("\nIngrese el valor del codigo a eliminar: ");
		scanf("%d", &codigo_eliminar);

		while ((aux_borrar != NULL) && (aux_borrar->codigo != codigo_eliminar)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->sig;
		}

		if (aux_borrar == NULL){
			cout <<("\nElemento no encontrado\n");
		}else{
			if (anterior == NULL){
				cout <<("\nEl elemento no se puede eliminar\n");
			}else{
				anterior->sig = aux_borrar->sig;
				delete aux_borrar;
				cout <<("\nNodo eliminado con exito\n");
			}
		}
	}else{
		cout <<("La lista se encuentra vacia\n");
	}
}
void Diagnostico::leerLista(Diagnostico *&lista){
	ifstream ar("diagnosticos.txt");
	if (!ar){
		cout <<("\nOcurrio algun problema al cargar el archivo con los nodos\n");
		system("Pause");
		exit(1);
	}
	while (!ar.eof()){
	Diagnostico *diagNuevo =new(Diagnostico);
		ar >> diagNuevo->peso;
		ar >> diagNuevo->presion;
		ar >> diagNuevo->temperatura;
		ar >> diagNuevo->diagnostico;
		if (!diagNuevo){
			lista->error();
		}
		Diagnostico *aux;
		diagNuevo->sig = NULL;
		if (lista == NULL){
			lista = diagNuevo;
			cabeza = diagNuevo;
		}else{
			aux = lista;
			while (aux->sig != NULL){
				aux = aux->sig;
			}
			aux->sig =diagNuevo;
		}
	}
}
void Diagnostico::buscarRegistro(Diagnostico *Lista){
	bool bandera = false;
	bool contador = 0;
    Diagnostico *actual = (Diagnostico *)malloc(sizeof(Diagnostico));
	actual = Lista;
	long int codigo_buscar;
	printf("\n\t\tBuscar el registro\n\n");
	printf("\nIngrese el valor del codigo a buscar: ");
	scanf("%d", &codigo_buscar);

	do
	{
		if (actual->codigo == codigo_buscar)
		{
			if (actual->sig == NULL)
			{
				contador++;
			}
			printf("\nCI Responsable: %s", actual->CI);
			printf("\nCodigo de la mascota: %d", actual->codigo);
			printf("\n Peso:  %f", actual->peso);
			printf("\n Presion:  %f", actual->presion);
			printf("\n temperatura:  %f", actual->temperatura);
			printf("\n diagnostico:  %s", actual->diagnostico);
			bandera = true;
		}
		actual = actual->sig;
	} while (actual != NULL && (contador == 0));

	if (bandera == false)
	{
		printf("\nDiagnostico no encontrado\n");
	}
}
bool Diagnostico::compararcodigo(long int codigo){
	bool codigoEncontrada = false;
	ifstream ar("diagnosticos.txt");
	char otros[20];
	long int codigoActual;
	if (!ar)
	{
		printf("\nOcurrio algun problema al cargar el archivo con los nodos\n");
		system("Pause");
	}
	while (!ar.eof())
	{
		ar >> codigoActual;
		if (codigoActual == codigo)
		{
			printf("\nYa existe una mascota con ese numero de codigo\n");
			codigoEncontrada = true;
		}
		ar >> otros;
		ar >> otros;
	}
	ar.close();

	return codigoEncontrada;
}
bool Diagnostico::verificarcodigo(long int codigo){

	int num;
	int sumatotal, pares = 0, impares = 0;
	int resultado1, resultado2;
	long int c, abs;
	int contador = 1, mul;
	abs = codigo;

	if (codigo != 0)
	{

		c = codigo / 10;

		resultado1 = codigo % 10;
		num = resultado1;
		codigo = c;

		do
		{
			c = codigo / 10;
			resultado1 = codigo % 10;
			if (contador == 1)
			{
				mul = resultado1 * 2;
				if (mul > 9)
					mul -= 9;
				contador = 0;
				impares += mul;
			}
			else
			{
				pares += resultado1;
				contador = 1;
			}

			codigo = c;

		} while (c != 0);

		sumatotal = pares + impares;

		resultado2 = (10 - (sumatotal % 10));

		if (resultado2 == 10)
			resultado2 = 0;

		if (resultado2 == num)
		{
			return true;
		}
		else
		{
			printf("\nEl codigo ingresado no es valido\n");
			return false;
		}
	}
	else
	{
		printf("\nEl codigo ingresado no es valido\n");
		return false;
	}
}
int Diagnostico::validarNumero(){
	int numero;
	int entrada_valida;
	int ch;

	do
	{
		fflush(stdout); //se utiliza (usualmente mediante fflush(stdout)) cuando uno debe asegurarse que una cadena de texto sin importar su longitud
						//y caracteres que la componen se envie a la salida estandar y no se quede "atascada" en el bufer.

		if ((entrada_valida = scanf("%d", &numero)) == EOF)
		{
			return EXIT_FAILURE;
		}
		else
		{
			printf("\nIngrese una opcion valida:");
		}
		while ((ch = getchar()) != EOF && ch != '\n')
			;

	} while (!entrada_valida);
	return numero;
}
