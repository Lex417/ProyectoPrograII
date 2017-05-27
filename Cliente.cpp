//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Cliente.h"

template<class tipo>Cliente<tipo>::Cliente()
{
	this->pin = 0;
}

template<class tipo>Cliente<tipo>::Cliente(tipo pin)
{
	this->pin = pin;
}

template<class tipo>void Cliente<tipo>::setPin(tipo pin)
{
	this->pin = pin;
}

template<class tipo>tipo Cliente<tipo>::getPin()
{
	return pin;
}
template<class tipo>Cliente<tipo>::~Cliente()
{
    //destructor
}


