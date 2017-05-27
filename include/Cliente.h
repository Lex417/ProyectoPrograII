//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CLIENTE_H
#define CLIENTE_H
#include "Cuenta_Ahorros.h"

using namespace std;
class Cliente
{
public:
	Cliente();
	Cliente(int);
	virtual ~Cliente();

//*******************************************************
	void setPin(int);
	int getPin();
//*******************************************************

private:
	int pin;
};

#endif // CLIENTE_H
