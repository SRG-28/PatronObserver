#pragma once   //PASO 1
#include<iostream>
#include<sstream>
#include"Subject.h"
using namespace std;

class Subject; //delcaracion previa... 
			   //Depencia mutua o cruzada...

class Observador {  //Interfaz <<Abstract>>
protected: 
	double valor2; //atributo principal del observer 
	Subject * subj;
public:
	Observador(Subject*, double);
	virtual ~Observador();
	virtual string toString() = 0;   // metodos de este tipo se desarrollan en clases derivadas
protected:
	Subject * getSubj();
	double getVal2();

};