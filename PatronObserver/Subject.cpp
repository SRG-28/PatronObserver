#include"Subject.h"

Subject::Subject(int tamano) {
	cout << "Creando un sujeto..." << endl;
	can = 0;
	tam = tamano;
	vec = new Observador*[tam];
	for (int i = 0; i < tam; i++)
		vec[i] = NULL;
}

Subject::~Subject() {
	cout << "Eliminando el sujeto" << endl; //Esto va en el main pero se pone aqui por efectos educativos, NO PONERLO AQUI (cout)
	for (int i = 0; i < can; i++)  //este for solo borra hasta cantidad, no hasta tamano
		delete vec[i];
	delete[] vec;
}

void Subject::attach(Observador* obsPtr) {
	if (can < tam)
		vec[can++] = obsPtr;
}

void Subject::setVal1(double val1) {
	valor1 = val1;
	//Aqui en el observer tipo uno va el "notify()"
}

double Subject::getVal1() {
	return valor1;
}
string Subject::toString() {
	stringstream s;
	s << "-----------------Listado de observers----------------------" << endl
	<< "-----------------------------------------------------------" << endl;
	for (int i = 0; i < can; i++ ) //tiene que ser CAM no tamano porque osino da una excepcion 
		s << vec[i]->toString() << endl;
	return s.str();
}