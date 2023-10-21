#ifndef Medico_H
#define	Medico_H
#include<bits/stdc++.h>
using namespace std;

class Persona{
	private:
		string nombre;
		string genero;
		string nacionalidad;
		string ciudadResidencia;
		int edad;
		float altura;
		
	public:
		Persona(string n, string g, string na, string c, int e, int a);
		Persona() {};
		
		string getNombre() { return nombre; }
		string getGenero() { return genero; }
		string getNacionalidad() { return nacionalidad; }
		string getCiudadResidencia() { return ciudadResidencia; }
		int getEdad() { return edad; }
		float getAltura() { return altura; }
};

Persona::Persona(string n, string g, string na, string c, int e, int a){
	nombre = n;
	genero = g;
	nacionalidad = na;
	ciudadResidencia = c;
	edad = e;
	altura = a;
}

#endif
