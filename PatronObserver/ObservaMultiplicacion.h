#pragma once  //PASO 2
#include"Observador.h"

class ObservaMultiplicacion : public Observador {
public:
	ObservaMultiplicacion(Subject* sub, double x) : Observador(sub, x) {
	}
	virtual ~ObservaMultiplicacion() {
	}
	string toString() {
		stringstream s;
		double v1 = subj->getVal1();
		s << "Al multiplicar el valor " << v1 << "por " << valor2 << "da como resultado : " << multiplicacion(v1);

		return s.str();
	}
	double multiplicacion(double& val1) {
		return val1 * valor2;
	}


};
