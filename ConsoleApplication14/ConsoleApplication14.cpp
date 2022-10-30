#include <iostream>
#include<stdio.h>
using namespace std;

int validar = 0;
int puntos = 0;

class Documentos {
public:
	struct pasaporte {
		string nombre;
		string fecha_de_nacimiento;
		string sexo;
		string curp;
	}
	pasaporte1 = { "alejandro pacheco oliva", "29 noviembre 1998", "masculino", "PAOA981129HJCCLL00" },
		pasaporte2 = { "elisa gutierrez garcia", "4 marzo 1986", "femenino","GUGE850304MZCCLL58" },
		pasaporte3 = { "marisa lopez hernandez", "10 junio 1978", "femenino", "LOHM780610MZCHJL40" },
		pasaporte4 = { "guadalupe orlando contreras chavez", "27 agusto 2001", "femonino", "COCGO010827HKJ13" },
		pasaporte5 = { "valeria sofia ordaz esparza", "22 enero 1990", "femenino", "ESOVS900127MJCFSE28" };

	struct INE {
		string nombre;
		string fecha_de_nacimiento;
		string sexo;
		string curp;
	}
	ine1 = { "alejandro pacheco oliva", "29 noviembre 1998", "masculino", "PAOA981129HJCCLL00" },
		ine2 = { "elisa gutierrez garcia", "4 marzo 1985", "femenino","GUGE850304MZCCLL58" },
		ine3 = { "marisa lopez hernandez", "10 junio 1978", "femenino", "LOHM780610MZCHJL40" },
		ine4 = { "guadalupe orlando contreras chavez", "27 agusto 2001", "masculino", "COCGO010827HKJ13" },
		ine5 = { "valeria sofia ordaz esparza", "22 enero 1990", "femenino", "ESOVS900127MJCFSE28" };

	void verificarInformacion(int validar);
	void mostrarPuntos();
	int mandarPuntos();
};

int Documentos::mandarPuntos() {
	cout << "\n1- Para que entre la persona" << endl;
	cout << "2- Para que no entre la persona" << endl;
	cin >> validar;
	return validar;
}

void Documentos::verificarInformacion(int validar) {

	if (validar == 1) {
		cout << "La validacion es correcta" << endl;
		puntos++;
		system("pause>0");
	}
	else  {
		cout << "La validacion no es correcta" << endl;
		puntos--;
		system("pause>0");
	}

}

void Documentos::mostrarPuntos() {
	cout << "Puntaje:" << puntos;
	system("pause>0");
}

class INE : public Documentos {
public:
	void impPachecoINE();
	void impElisaINE();
	void impMarisaINE();
	void impGuadalupeINE();
	void impValeriaINE();
};

void INE::impElisaINE() {
	cout << "INE:" << endl;
	cout << "Nombre: " << ine2.nombre << endl;
	cout << "Fecha de nacimiento: " << ine2.fecha_de_nacimiento << endl;
	cout << "CURP: " << ine2.curp << endl;
	cout << "Sexo: " << ine2.sexo << endl;

	cout << "\n";
}

void INE::impPachecoINE() {
	cout << "INE:" << endl;
	cout << "Nombre: " << ine1.nombre << endl;
	cout << "Fecha de nacimiento: " << ine1.fecha_de_nacimiento << endl;
	cout << "CURP: " << ine1.curp << endl;
	cout << "Sexo: " << ine1.sexo << endl;

	cout << "\n";

}

void INE::impMarisaINE() {
	cout << "INE:" << endl;
	cout << "Nombre: " << ine3.nombre << endl;
	cout << "Fecha de nacimiento: " << ine3.fecha_de_nacimiento << endl;
	cout << "CURP: " << ine3.curp << endl;
	cout << "Sexo: " << ine3.sexo << endl;

	cout << "\n";

}

void INE::impGuadalupeINE() {
	cout << "INE:" << endl;
	cout << "Nombre: " << ine4.nombre << endl;
	cout << "Fecha de nacimiento: " << ine4.fecha_de_nacimiento << endl;
	cout << "CURP: " << ine4.curp << endl;
	cout << "Sexo: " << ine4.sexo << endl;

	cout << "\n";

}

void INE::impValeriaINE() {
	cout << "INE:" << endl;
	cout << "Nombre: " << ine5.nombre << endl;
	cout << "Fecha de nacimiento: " << ine5.fecha_de_nacimiento << endl;
	cout << "CURP: " << ine5.curp << endl;
	cout << "Sexo: " << ine5.sexo << endl;

	cout << "\n";

}


class Pasaporte : public Documentos {
public:
	void impPachecoPass();
	void impElisaPass();
	void impMarisaPass();
	void impGuadalupePass();
	void impValeriaPass();

};

void Pasaporte::impPachecoPass() {
	cout << "PASAPORTE:" << endl;
	cout << "Nombre: " << pasaporte1.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte1.fecha_de_nacimiento << endl;
	cout << "CURP: " << pasaporte1.curp << endl;
	cout << "Sexo: " << pasaporte1.sexo << endl;

	verificarInformacion(mandarPuntos());
}

void Pasaporte::impElisaPass() {
	cout << "PASAPORTE:" << endl;
	cout << "Nombre: " << pasaporte2.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte2.fecha_de_nacimiento << endl;
	cout << "CURP: " << pasaporte2.curp << endl;
	cout << "Sexo: " << pasaporte2.sexo << endl;

	verificarInformacion(mandarPuntos());

}

void Pasaporte::impMarisaPass() {
	cout << "PASAPORTE:" << endl;
	cout << "Nombre: " << pasaporte3.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte3.fecha_de_nacimiento << endl;
	cout << "CURP: " << pasaporte3.curp << endl;
	cout << "Sexo: " << pasaporte3.sexo << endl;

	verificarInformacion(mandarPuntos());

}

void Pasaporte::impGuadalupePass() {
	cout << "PASAPORTE:" << endl;
	cout << "Nombre: " << pasaporte4.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte4.fecha_de_nacimiento << endl;
	cout << "CURP: " << pasaporte4.curp << endl;
	cout << "Sexo: " << pasaporte4.sexo << endl;

	verificarInformacion(mandarPuntos());

}

void Pasaporte::impValeriaPass() {
	cout << "PASAPORTE:" << endl;
	cout << "Nombre: " << pasaporte5.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte5.fecha_de_nacimiento << endl;
	cout << "CURP: " << pasaporte5.curp << endl;
	cout << "Sexo: " << pasaporte5.sexo << endl;

	verificarInformacion(mandarPuntos());

}

INE ine;
Pasaporte pasaporte;
Documentos documentos;

int main() {


	bool salida = false;
	int opc;

	while (!salida) {
		system("cls");
		cout << "+++++++++++ PAPER, PLEASE: +++++++++++ " << endl;
		cout << " VAMOS A REVISAR TUS PAPELES PARA VER SI EFECTIVAMENTE ERES UN CIVIL ORDINARIO O TERRORISTA " << endl;
		cout << " EMPEZAR JUEGO: [ 1 ]" << endl;
		cout << " SALIR DEL JUEGO: [ 2 ]" << endl;
		cin >> opc;

		switch (opc) {

		case 1:
			system("cls");

			cout << " PRIMER PASAPORTE: " << endl;
			ine.impPachecoINE();
			pasaporte.impPachecoPass();

			system("cls");
			cout << " SEGUNDO PASAPORTE: " << endl;
			ine.impElisaINE();
			pasaporte.impElisaPass();

			system("cls");
			cout << " TERCER PASAPORTE: " << endl;
			ine.impMarisaINE();
			pasaporte.impMarisaPass();
			system("cls");

			cout << " CUARTO PASAPORTE: " << endl;
			ine.impGuadalupeINE();
			pasaporte.impGuadalupePass();
			system("cls");

			cout << " QUINTO PASAPORTE: " << endl;
			ine.impValeriaINE();
			pasaporte.impValeriaPass();
			system("cls");

			cout << " TU PUNTAJE TOTAL ES: " << endl;
			documentos.mostrarPuntos();
			break;

		case 2:
			exit(EXIT_SUCCESS);
			break;

		default:
			cout << " OPCION NO VALIDA " << endl;
			break;

		}

	}

	return 0;
}