//
// Created by Enzo Dar�o Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <fstream>
using namespace std;
    /* El programa cumple con segregaci�n de interfaz, cada m�dulo se utliza de tal forma que s�lo se usan
        los m�todos que son propiamente necesarios por el programa, esto con el proposito de mantener el princpio
        tambi�n de alta cohesi�n, podemos ver que las clases dependen de los sistemas que requieren, aqu� utlizamos
        un m�todo virtual puro para ser usado por un m�dulo m�s peque�o el cual necesita de ciertos m�todos expl�citos.
    */
class Cuenta
{
public:
	Cuenta();
	Cuenta(long, long, long);
	virtual ~Cuenta();

	virtual long consultaSaldo()=0;//M�todo puro virtual

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
