//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CUENTA_AHORROS_H
#define CUENTA_AHORROS_H
#include "Cuenta.h"

/* El programa cumple con el principio de Abierto-Cerrado, ya que el módulo o clase llamado "Persona" posee sus componentes privados, está abierto para su
   aumentar implementación, realizar agregación con base a sus valores, sin embargo, se encuentra cerrado para su modificación, por esta razón
   cumple con el princpio abierto y cerrado.*/

class Cuenta_Ahorros:public Cuenta
{
public:
	long consultaSaldo();
};

#endif // CUENTA_AHORROS_H
