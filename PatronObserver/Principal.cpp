#include"Subject.h"
#include"ObservaEleva.h"
#include"ObservaMultiplicacion.h"
#include"ObservaDivide.h"
using namespace std;

int main() {
	cout << "Ejercicio de observer NO2 (tipo 2)" << endl;
	cout << "----------------------------------" << endl;
	cout << "Crear un subject" << endl;
	Subject* subj = new Subject(10);  //Con vec interno de 10 posiciones
	cout << endl;
	cout << "Crear los observadores..." << endl; //se crean de forma polimorfica
	Observador* ob1 = new ObservaEleva(subj, 4);
	Observador* ob2 = new ObservaMultiplicacion(subj, 7);
	Observador* ob3 = new ObservaDivide(subj, 5 );
	cout << endl;
	cout << "Ahora vamos a setter el valor del subject" << endl;
	cout << "Lo seteamos con un nuevo valor de 5..." << endl;
	subj->setVal1(5); 
	cout << endl;
	cout << "Llamando al toString del subject..." << endl;
	cout << subj->toString() << endl;

	system("pause");
	return 0;
}