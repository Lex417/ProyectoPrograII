//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Cuenta.h"

Cuenta::Cuenta()
{
	this->saldo = 0;
	this->montoARetirar = 0;
	this->limite=0;
}

Cuenta::Cuenta(long saldo, long montoARetirar, long limite)
{
	this->saldo = saldo;
	this->montoARetirar=montoARetirar;
	this->limite=limite;
}

// SETS Y GETS
void Cuenta::setSaldo(long saldo)
{
	this->saldo = saldo;
}

long Cuenta::getSaldo()
{
	return saldo;
}

void Cuenta::setMontoARetirar(long montoARetirar)
{
    this->montoARetirar=montoARetirar;
}

long Cuenta::getMontoARetirar()
{
    return montoARetirar;
}

void Cuenta::setLimite(long limite)
{
    this->limite=limite;
}

long Cuenta::getLimite()
{
    return limite;
}

Cuenta::~Cuenta()
{
    //dtrctr
}
