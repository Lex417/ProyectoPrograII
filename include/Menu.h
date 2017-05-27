//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#ifndef MENU_H
#define MENU_H
#include "Cajero.h"
#include <cstring>

        /*  El programa fue estructurado y cumple con el principio de responsabilidad única, ya que cada clase realiza una sola tarea,así como
            existe un solo módulo para la interacción en pantalla con el usuario, por este motivo se dice que cumple con el principio de responsabilidad única, cada clase
            realiza la labor para el cual fue creada. Aquí tenemos como ejemplo la clase Menu la cual despliega los datos en pantalla sin recurrir a la creación de objetos
            y utilizar el área del main.cpp

        */
class Menu
{
public:
    void menuPrincipal();
};

#endif // MENU_H
