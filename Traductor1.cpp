#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>  
#include <stdio.h> 
#include "funcion1.cpp"

using namespace std;
	
Traductor palabras[100];
		
void AgPalabras();
string InTexto();
string TrTexto(string);


int menu() {
	system("cls");
	int x; 
	cout<<">================ MENU ================<\n"<<endl;
	cout<<"> > > Ingrese Una Opcion < < < "<<endl;
	cout<<"1. Agregar Una Palabra"<<endl;
	cout<<"2. Leer Las Palabras"<<endl;
	cout<<"3. Buscar Palabras"<<endl;
	cout<<"4. Modificar Una Palabra"<<endl;
	cout<<"5. Borrar Una Palabra"<<endl;
	cout<<"6. Traducir El Texto"<<endl;
	cout<<"7. Salir"<<endl<<endl;
	cin>>x;
	return x;
}

void agregar (ofstream &pa) {
		int contador=0, cantidad_palab=0;
	cout<<"Ingrese cantidad de Palabras: "<<endl;	
	cin>>cantidad_palab;
	contador=1;
	for (int i=0; i<cantidad_palab;i++){
		system("cls");
		cout<<"Palabra No. "<<contador<<".  "<<"CANTIDAD TOTAL No. "<<cantidad_palab<<"."<<endl;	
		contador++;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
	system("cls");
	
	string palab;
	string traduc;
	string funcion;
	
	pa.open("Traductor.txt", ios::out|ios::app);
	if(pa.fail()) {
		cout<<"ERROR No se puede abrir el archivo"<<endl;
		exit(1);
	}
	
	cin.ignore();
	fflush(stdin);
	cout<<"Ingrese La Palabra: "<<endl<<endl;
	getline(cin,palab);
		fflush(stdin);
	cout<<"Ingrese Su traduccion: "<<endl<<endl;
	getline(cin,traduc);
		fflush(stdin);
	cout<<"Ingrese Su funcionalidad: "<<endl<<endl;
	getline(cin,funcion);
	pa<<palab<<" "<<traduc<<" "<<funcion<<" \n"<<endl;
	}
	pa.close();
}
			
void verPalabras(ifstream &lec) {
	system("cls");
	string palab;
	string traduc;
	string funcion,funcion2;
	string texto;
	lec.open("Traductor.txt", ios::in);
	
	
		cout<<">======= Palabras Registradas =======\n<"<<endl;
		lec>>palab;
		while (!lec.eof()) {
			lec>>traduc;
			lec>>funcion;
			cout<<"* * * Palabra * * * *: "<<palab<<endl;
			cout<<"* * * Traduccion * * : "<<traduc<<endl;
			cout<<"* * * Funcionalidad* : "<<funcion;
			getline(lec,funcion2);
			cout<<funcion2<<endl;

			cout<<"> > > > > > > > > - < < < < < < < < < "<<endl<<endl;
	
			lec>>palab;
		}
		lec.close(); 
		
	system("pause");
}

void buscarPalabras(ifstream &lec) {
	system("cls");
	lec.open("Traductor.txt", ios::in);
	cout<<">======== Buscar Palabras ========<"<<endl<<endl;
	string palab, palabbusca;
	string traduc;
	string funcion, funcion2;
	bool encontrada = false;
		fflush(stdin);
	cout<<"Ingresar la palabra que desea buscar: "<<endl;
	cin>>palabbusca;
	lec>>palab;
	while(!lec.eof() &&  !encontrada) {
		lec>>traduc;
		lec>>funcion;
		
		if(palab == palabbusca) {
			cout<<"* * * Palabra * * * *: "<<palab<<endl;
			cout<<"* * * Traduccion * * : "<<traduc<<endl;
			cout<<"* * * Funcionalidad* : "<<funcion;
		getline(lec,funcion2);
			cout<<funcion2<<endl;;
		cout<<"> > > > > > > > > - < < < < < < < < < "<<endl<<endl;
		encontrada = true; 
		}
		lec>>palab;
	}
	lec.close();
	
	if(!encontrada)
		cout<<"La palabra No Se Encuentra Registrada"<<endl;
	system("pause");
}


void modificafuncion(ifstream & Lec)
{
	system("cls");
		
		cout<<">======== Modificar La Palabra ========<"<<endl;
		cout<<endl;
	string palab;
	string traduc;
	string funcion,funcion2;
	string palabbusca;
	string palab2,traduc2,funci2,fun2;
	int opc;
	Lec.open("Traductor.txt",ios::in);
	ofstream modi("modific.txt",ios::out);
	
	if(Lec.is_open())
	{
		cout<<"La Palabra Que Desea Modificar"<<endl;
		cin>>palabbusca;
		Lec>>palab;
				while(palab != palabbusca && !Lec.eof())
				{
				Lec>>traduc;
			Lec>>funcion;
				if(palab != palabbusca)
				{
					getline(Lec,funcion2);
					modi<<palab<<" "<<traduc<<" "<<funcion<<" "<<funcion2<<endl;
						}
					Lec>>palab;
					if(Lec.eof()){
					cout<<"No Se Encontro La Palabra Ingresada"<<endl;
						modi.close();
						remove("modific.txt");
						system("pause");
	int main();
	main();
	}	
}
	while(!Lec.eof())
{	
	if(palab == palabbusca){
		Lec>>traduc;
		Lec>>funcion;
			cout<<endl;
				
				
			cout<<"Ingrese La Nueva Palabra "<<endl;
			cin>>palab2;
			
			cout<<"Ingrese La Nueva Traduccion "<<endl;
			cin>>traduc2;
			fflush(stdin);
			
			cout<<"Ingrese La  Nueva Funcionalidad "<<endl;
			getline(cin,funci2);
			
			modi<<palab2<<" "<<traduc2<<" "<<funci2<<" "<<endl;	
			cout<<endl;
			system("cls");
				
} 
		Lec>>palab;
			Lec>>traduc;
			Lec>>funcion;
			 	getline(Lec,funcion2);
			 	if(!Lec.eof()){
				 
					modi<<palab<<" "<<traduc<<" "<<funcion<<" "<<funcion2<<endl;	
						}
				
		}
		Lec.close();
		modi.close();
		
	}else{
	cout<<"No se Encontro El Archivo."<<endl;
}
	
	remove("Traductor.txt");
	rename("modific.txt","Traductor.txt");	
cout<<">======= Las Palabras Se Han Modificado ========<"<<endl;	

system("pause");	
	
}


void eliminar(ifstream & Lec){
	system("cls");
		
	cout<<">========== Eliminar Una Palabra ==========<"<<endl;
	cout<<endl;
	string palab;
	string traduc;
	string funcion,funcion2;
	string palabbusca;
	string palab2,traduc2,funci2;
	int ag;
	Lec.open("Traductor.txt",ios::in);
	ofstream modi("modific.txt",ios::out);
	
		if(Lec.is_open()){
		cout<<"Ingrese La Palabra Que Desea Eliminar: "<<endl;
		cin>>palabbusca;
		Lec>>palab;
			while(palab != palabbusca && !Lec.eof()){ 
				Lec>>traduc;
				Lec>>funcion;
				if(palab != palabbusca){
					getline(Lec,funcion2);
					modi<<palab<<" "<<traduc<<" "<<funcion<<" "<<funcion2<<endl;
						} 
						Lec>>palab;
				if(Lec.eof()){
					cout<<"No Se Encontro La Palabra Ingresada"<<endl;
					modi.close();
					remove("modific.txt");
						system("pause");
int main();
	main();
	}
		}
			
		while(!Lec.eof()){	
			if(palab == palabbusca){
			Lec>>traduc;
			Lec>>funcion;
				cout<<endl;
				cout<<"La Palabra,"<<palabbusca<<", Se Eliminara Junto Con Sus Respectivos Datos"<<endl;
			 
				cout<<"1. ¿Esta Seguro Que Desea Eliminar La Palabra? "<<palabbusca<<endl;
				cout<<"2. No Eliminar Palabra "<<palabbusca<<endl;	
				cin>>ag;
				cout<<endl;
	
				if (ag!=1){
					cout<<"No se eliminara la siguiente palabra: "<<palabbusca<<endl;
						modi.close();
								remove("modific.txt");
								
						system("pause");
						int main();
						main();
				}
			}
			
			Lec>>palab;
			Lec>>traduc;
			Lec>>funcion;
			 	getline(Lec,funcion2);
			 	if(!Lec.eof()){
				 
					modi<<palab<<" "<<traduc<<" "<<funcion<<" "<<funcion2<<endl;	
						}
				
		}
		Lec.close();
		modi.close();
		
		}else{
	cout<<"Archivo no Encontrado."<<endl;
		}
	
	remove("Traductor.txt");
	rename("modific.txt","Traductor.txt");	
cout<<">=========== La Palabra "<<palabbusca<<" Y Sus Datos Se Han Borrado ===========<"<<endl;	

			system("pause");	
	
}

//Funciones

int main() {
	ofstream Palabra;
	ifstream lec;
	int sh;
	
	do {
		sh = menu();
		switch(sh){
			case 1:
				system("cls");
				agregar(Palabra);
				system("cls");
				break;
			
			case 2:
				system("cls");
				verPalabras(lec);
				system("cls");
				break;	
			
			case 3:
				system("cls");
				buscarPalabras(lec);
				system("cls");
				break;
			
			case 4:
				system("cls");
				modificafuncion(lec);
				system("cls");
				break;	
			
			case 5:
				system("cls");
				eliminar(lec);
				system("cls");
				break;
			
			case 6:
				system("cls");
				AgPalabras();
				string traduccion = TrTexto(InTexto());
				cout<<"\n-----------------------TRADUCCION-----------------------\n\n";
				cout<<traduccion;
				break;		
					
			
		}
		
		
		
	} while(sh !=7);
	return 0;
	system("pause");
	
}
void AgPalabras(){

	ifstream archivo_entrada("Traductor.txt");;
    string linea, palabra1, palabra2;
    int contador = 0;
    bool lineas;

    while(getline(archivo_entrada, linea)) {
	
    	string str(linea);
        istringstream isstream(str);
        lineas = true;

    	while(!isstream.eof()){
    		
        	string tempStr;
        	isstream >> tempStr;
        	
        	if(lineas) {
				palabra1 = tempStr;
        	}
			else {
				palabra2 = tempStr;	
			}
			
			if(!lineas) break;
			lineas = false;    	
    	}

    	palabras[contador] = Traductor(palabra1, palabra2);
    	contador++;
    }

}

string InTexto(){

	string codigo, linea;
	
	cout<<"Ingresar el texto que desea traducir y luego presione Enter"<<endl;
	cout<<"Escriba \"traducir\" y presione Enter para mostrarlo como pseudocodigo"<<endl<<endl;
	
	while(true){
		getline(cin, linea);
		
		if(linea != "traducir") codigo += linea + "\n";
        else break;
	}
	
	return codigo;
}

string TrTexto(string codigo){
	
	string str(codigo);
	istringstream isstream(str);
    string llaveInicio = "", llaveFin = "";
    
	while(!isstream.eof()){
		string tempStr;
		isstream >> tempStr;
		/*cout<<tempStr<<endl;*/
		if(tempStr != "{" && tempStr != "}"){
			for(int i = 0; i<100; i++){
				if(tempStr == palabras[i].getPalabra()){
					if(tempStr == "if"){
						llaveInicio = "inicio si";
						llaveFin = "fin si\n";
					}else if(tempStr == "else"){
						llaveInicio = "inicio entonces";
						llaveFin = "fin entonces\n";
					}else if(tempStr == "while"){
						llaveInicio = "inicio mientras";
						llaveFin = "fin mientras\n";
					}else if(tempStr == "for"){
						llaveInicio = "inicio para";
						llaveFin = "fin para\n";
					}  
					string::size_type pos = codigo.find(tempStr, 0);
					if (pos < string::npos) codigo.replace(pos, string(tempStr).length(), palabras[i].getTraduccion());	
				}
			}
		}else if(tempStr == "{" && llaveInicio != ""){
			string::size_type pos = codigo.find(tempStr, 0);
			if (pos < string::npos) codigo.replace(pos, string(tempStr).length(), llaveInicio);
			llaveInicio = "";
		}else if(tempStr == "}" && llaveFin != ""){
			string::size_type pos = codigo.find(tempStr, 0);
			if (pos < string::npos) codigo.replace(pos, string(tempStr).length(), llaveFin);
			llaveFin = "";
		}else if(tempStr == "{"){
			string::size_type pos = codigo.find(tempStr, 0);
			if (pos < string::npos) codigo.replace(pos, string(tempStr).length(), "_");
		}
	}
	string::size_type pos = codigo.find("_", 0);
	if (pos < string::npos) codigo.replace(pos, string("=_").length(), "{");
	
	cout<<"\n>==================== TRADUCCION ====================<\n\n";
	cout<<codigo;
	system("pause");
}
