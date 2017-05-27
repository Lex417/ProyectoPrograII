//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Cliente.h"

Cliente::Cliente()
{
	this->pin = 0;
}

Cliente::Cliente(int pin)
{
	this->pin = pin;
}

void Cliente::setPin(int pin)
{
	this->pin = pin;
}

int Cliente::getPin()
{
	return pin;
}
Cliente::~Cliente()
{
    //destructor
}


