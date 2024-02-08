#include <iostream>
#include <cstdlib>
using namespace std;

// Funciones
bool Par(int numero);
bool Bisiesto(int anio);
bool Igual(int num1, int num2);
bool MayorEdad(int edad);
bool Aprobar(int nota);

//----------------------------Main--------------------------------
int main(){
	int op;
	
	cout << "***Bienvenido a este menu de opciones*** \n";
	do{
		cout << "Seleccione una opcion: \n";
		cout << "1. Verificar si un numero es par: \n";
		cout << "2. Determinar si un anio es bisiesto: \n";
		cout << "3. Verificar si dos numeros son iguales: \n";
		cout << "4. Verificar si una persona es mayor de edad: \n";
		cout << "5. Evaluar si un estudiante aprobo un examen: \n";
		cout << "6. Cerrar aplicacion: ";
		
		cin >> op;
		
		switch(op){
			case 1:{
				// 1. Verificar si un numero es par
				int numero;
				cout << "______________________________________\n";
				cout << "Ingrese un numero: ";
				cin >> numero;
				
				if(Par(numero)){
					cout << "El numero ingresado es par. \n";
				}else{
					cout << "El numero ingresado no es par.\n";
				}
				cout << "______________________________________\n";
				break;
			} // Fin del case 1
			
			case 2:{
				// 2. Determinar si un año es bisiesto
				int anio;
				cout << "______________________________________\n";
				cout << "Ingrese el anio actual o cualquier otro: ";
				cin >> anio;
				
				if(Bisiesto(anio)){
					cout << "El anio que ingreso es bisiesto  \n";
				}else{
					cout << "El anio que ingreso no es bisiesto  \n";
				}
				cout << "______________________________________\n";
				break;
			} // Fin del case 2
			
			case 3:{
				//3. Verificar si dos números son iguales
				int num1, num2;
				cout << "______________________________________\n";
				cout << "Ingrese un numero:  ";
				cin >> num1;
				cout << "Ingrese otro numero: ";
				cin >> num2;
				
				if(Igual(num1, num2)){
					cout << "Correcto, los numeros ingresados son iguales.  \n";
				}else{
					cout << "Parece que no coinciden los numeros. Intentalo de nuevo.  \n";
				}
				cout << "______________________________________\n";
				break;
			} // Fin del case 3
			
			case 4:{
				// 4. Verificar si una persona es mayor de edad
				int edad;
				cout << "______________________________________\n";
				cout << "Ingrese su edad: ";
				cin >> edad;
				
				if(edad >= 0 && edad < 125){
					if(MayorEdad(edad)){
						cout << "La persona es mayor de edad  \n";
					}else{
						cout << "No, esta persona aun no es mayor de edad.  \n";
					}
				}else{
					cout << "Por favor, ingrese una edad mas coherente. \n";
				}
				cout << "______________________________________\n";
				break;
			} // Fin del case 4
			
			case 5:{
				// 5. Evaluar si un estudiante aprobó un examen
				int nota;
				cout << "______________________________________\n";
				cout << "Ingrese la nota del estudiante: ";
				cin >> nota;
				
				if(Aprobar(nota)){
					cout << "¡Felicidades! Has ganado el examen \n";
				}else{
					cout << "Lastimosamente no se ha llegado a la nota minima  \n";
				}
				cout << "______________________________________\n";
				break;
			} // Fin del case 5
			
			case 6:{
				// Salir del programa
				system("cls");
				cout << "__________________________________________________\n";
				cout << "Espero que este programa te haya servido :D  \n";
				cout << "Cerrando...  \n";
				cout << "__________________________________________________\n";
				break;
			} // Fin del case 6
			
			default:
				cout << "______________________________________\n";
				cout << "Al parecer estas fuera de los rangos establecidos. Intentalo de nuevo \n";
				cout << "______________________________________\n";
				break;
		}
	} while (op != 6);
	
	return 0;
} // Fin del main

// --------------------Funcion del case 1------------------------
bool Par(int numero){
	return(numero % 2 == 0);
}

// --------------------Funcion del case 2------------------------
bool Bisiesto(int anio){
	return ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}

// --------------------Funcion del case 3------------------------
bool Igual(int num1, int num2){
	return(num1 == num2);
}

// --------------------Funcion del case 4------------------------
bool MayorEdad(int edad){
	return(edad >= 18);
}

// --------------------Funcion del case 5------------------------
bool Aprobar(int nota){
	return(nota >= 60);
}


















