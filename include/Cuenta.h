//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <fstream>
using namespace std;
    /* El programa cumple con segregación de interfaz, cada módulo se utliza de tal forma que sólo se usan
        los métodos que son propiamente necesarios por el programa, esto con el proposito de mantener el princpio
        también de alta cohesión, podemos ver que las clases dependen de los sistemas que requieren, aquí utlizamos
        un método virtual puro para ser usado por un módulo más pequeño el cual necesita de ciertos métodos explícitos.
    */
class Cuenta
{
public:
	Cuenta();
	Cuenta(long, long, long);
	virtual ~Cuenta();

	virtual long consultaSaldo()=0;//Método puro virtual

	void setSaldo(long);
	long getSaldo();

//*******************************************************
	void setMontoARetirar(long);
	long getMontoARetirar();

	void setLimite(long);
	long getLimite();
//*******************************************************

protected:
	long saldo;
	long montoARetirar;
	long limite;

};

#endif // CUENTA_H
