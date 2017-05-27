//
// Created by Enzo Dar�o Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef MENU_H
#define MENU_H
#include "Cajero.h"
#include <cstring>

        /*  El programa fue estructurado y cumple con el principio de responsabilidad �nica, ya que cada clase realiza una sola tarea,as� como
            existe un solo m�dulo para la interacci�n en pantalla con el usuario, por este motivo se dice que cumple con el principio de responsabilidad �nica, cada clase
            realiza la labor para el cual fue creada. Aqu� tenemos como ejemplo la clase Menu la cual despliega los datos en pantalla sin recurrir a la creaci�n de objetos
            y utilizar el �rea del main.cpp

        */
class Menu
{
public:
    void menuPrincipal();
};

#endif // MENU_H
