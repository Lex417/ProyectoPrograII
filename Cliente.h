//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CLIENTE_H
#define CLIENTE_H
#include "Cuenta_Ahorros.h"

using namespace std;
template <class tipo>class Cliente
{
public:
	Cliente();
	Cliente(tipo);
	virtual ~Cliente();

//*******************************************************
	void setPin(tipo);
	tipo getPin();
//*******************************************************

private:
	tipo pin;
};

#endif // CLIENTE_H
