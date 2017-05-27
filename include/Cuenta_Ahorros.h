//
// Created by Enzo Dar�o Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CUENTA_AHORROS_H
#define CUENTA_AHORROS_H
#include "Cuenta.h"

/* El programa cumple con el principio de Abierto-Cerrado, ya que el m�dulo o clase llamado "Persona" posee sus componentes privados, est� abierto para su
   aumentar implementaci�n, realizar agregaci�n con base a sus valores, sin embargo, se encuentra cerrado para su modificaci�n, por esta raz�n
   cumple con el princpio abierto y cerrado.*/

class Cuenta_Ahorros:public Cuenta
{
public:
	long consultaSaldo();
};

#endif // CUENTA_AHORROS_H
