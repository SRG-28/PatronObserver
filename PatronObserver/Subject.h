#pragma once
#include"Observador.h"
using namespace std;

class Observador; //declaracion previa por dependencia multiple

class Subject {
private:
	double valor1;
	//Contenedor de observadores
	Observador** vec;
	int can;
	int tam;
public:
	Subject(int tamano);
	virtual ~Subject();
	void attach(Observador*);
	void setVal1(double);
	double getVal1();
	string toString();
};

