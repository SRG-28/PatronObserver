#pragma once  //PASO 2
#include"Observador.h"

class ObservaEleva : public Observador {
public:
	ObservaEleva(Subject* sub, double x) : Observador(sub, x) {
	}
	virtual ~ObservaEleva() {
	}
	string toString() {
		stringstream s;
		double v1 = subj->getVal1();
		s << "Al elevar el valor " <<v1 << "al exponente " <<valor2 <<"da como resultado : "  << eleva(v1);
		
		return s.str();
	}
	double eleva(double& val1) {
		return pow(val1, valor2);
	}


};

