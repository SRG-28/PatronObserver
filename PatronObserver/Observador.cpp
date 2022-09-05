#include"Observador.h"

Observador::Observador(Subject* sub, double x) {
	subj = sub;
	valor2 = x;
	subj->attach(this); //AGREGA EL SUBJECT AL OBSERVADOR
}

Observador::~Observador() {

}


Subject * Observador::getSubj() {
	return subj;
}
	
double Observador::getVal2() {
	return valor2;
}