//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef CAJERO_H
#define CAJERO_H
#include "Cliente.h"
#include <sstream>
#include <windows.h>

class Cajero
{
public:
    Cajero();
    Cajero(int, double, long);

    virtual ~Cajero();

    int verificaPin();
    void retiroManual();
    long consultaSaldo();
    void retiroPredeterminado1();
    void retiroPredeterminado2();
    void retiroPredeterminado3();

//*******************************************************
    void setTruePin(int);
    void setVerificador(bool);

    int getTruePin();
    bool getVerificador();
//*******************************************************

private:
    Cliente miCliente;
    Cuenta_Ahorros miCuenta;
    int truePin;
    bool verificador;
};

#endif // CAJERO_H
