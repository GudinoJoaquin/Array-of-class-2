#include<bits/stdc++.h>
#include "Persona.h"
using namespace std;

void mostrarPersonas(Persona *p);

int main(){
	
	Persona *p = new Persona[3];
	
	p[0] = Persona("Firpo", "Masculino", "Senegales", "Mar del Plata", 17, 1.50);
	p[1] = Persona("Martina", "Femenino", "Egipcio", "El cairo", 22, 1.80);
	p[2] = Persona("Ivanovich", "Femenino", "Letonia", "Frankfurt", 72, 1.60);
	
	mostrarPersonas(p);
	
	
	return 0;
}

void mostrarPersonas(Persona *p){
	cout<<"Todas las personas: "<<endl;
	for(int i = 0 ; i < 3 ; i++){
		cout<<p[i].getNombre();
	}
	cout<<endl;
	cout<<"Personas de Mar del Plata: "<<endl;
	for(int i = 0 ; i < 3 ; i++){
		if(p[i].getCiudadResidencia() == "Mar del Plata"){
			cout<<p[i].getNombre();
		}
	}
	cout<<endl;
	cout<<"Personas mayores de 18: "<<endl;
	for(int i = 0 ; i < 3 ; i++){
		if(p[i].getEdad() >= 18){
			cout<<p[i].getNombre();
		}
	}
	cout<<endl;
	cout<<"Personas con nombre terminado en a: "<<endl;
	for(int i = 0 ; i < 3 ; i++){
		if(p[i].getNombre()[p[i].getNombre().size() - 1] == 'a'){
			cout<<p[i].getNombre();
		}
	}
	cout<<endl;
}
