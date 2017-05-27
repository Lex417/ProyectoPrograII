//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Cajero.h"

Cajero::Cajero()
{
    this->truePin=0;// verificar si es así
    this->verificador=NULL;
}

Cajero::Cajero(int truePin, double cuenta, long limite)
{
    this->truePin=truePin;
    this->miCuenta.setSaldo(cuenta);
    this->miCuenta.setLimite(limite);
}

long Cajero::consultaSaldo()
{
    return miCuenta.consultaSaldo();
}

int Cajero::verificaPin()
{
    int pin;
    int intentos=1,total=3;

    do
    {
        if(intentos>total)
        {
            system("cls");
            cout << "Ha sobrepasado el numero de intentos disponibles el programa se cerrara"<<endl<<endl;
            cin.get();
            system("pause");
            setVerificador(false);
            return 0;
        }

        cout<<endl;
        cout<<" ___________________________________"<<endl;
        cout<<"|   Por favor, Ingrese su PIN:      |"<<endl;
        cout<<"|___________________________________|"<<endl<<endl;

        cin>>pin;
         while (cin.fail()) // si falla
        {
            cout << "\rPor favor digite solo numeros para el PIN, vuelvalo a intentar"; // doy este mensaje
            Sleep (1500);
            cin.clear();
            cin.ignore (500, '\n'); // limpio buffer
        }

        cout<<"  "<<endl;

        miCliente.setPin(pin);

        if(miCliente.getPin() != getTruePin())
        {
            cout<<"Clave incorrecta"<<endl<<endl;
            cout<<"Intento numero: " << intentos << " - Intentos restantes: " << (total-intentos) << endl<<endl;
            system("pause");
            system("cls");
            intentos++;
        }

     }
         while (miCliente.getPin() != getTruePin());
         setVerificador(true);
         return 0;
}

void Cajero::retiroManual()
{
    int monto;
    a:
    system("cls");
    cout<<"\nIngrese el monto a retirar"<<endl;
    cin>>monto;

    while (cin.fail()) // si falla
    {
        cout << "\rPor favor ingrese solo numeros para el monto que desea retirar"; // doy este mensaje
        Sleep (1500);
        cin.clear();
        cin.ignore (500, '\n'); // limpio buffer
        goto a;
    }
    if(monto<1000)
    {
        cout << "El cajero solo devuelve montos superiores a 1000 colones "<<endl;
        Sleep(1800);
        goto a;
    }
    else if (monto%1000!=0)
    {
        cout << "El cajero solo devuelve billetes "<<endl;
        Sleep(1800);
        goto a;
    }
    if (monto>=200000)
    {
        cout << "Transaccion invalida, no es permitido retirar mas de 200000 colones en un dia"<<endl
             << "\tPor favor intentelo de nuevo"<<endl;
             Sleep(2000);

             goto a;

    }

    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);

    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())
    {
        cout<<"\nHa alcanzado el limite diario"<<endl;
        miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);

    }else
        {
            miCuenta.setSaldo(miCuenta.getSaldo()-monto);
            cout<<"\nUsted ha retirado: "<<monto<<" colones"<<endl;
            cout<<"Su saldo ahora es de: "<<consultaSaldo()<<" colones"<<endl<<endl;
        }

}

void Cajero::retiroPredeterminado1()
{
    int monto=10000;
    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);

    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())
    {
        cout<<"Ha alcanzado el limite diario"<<endl;
        miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);
    }else
        {
            miCuenta.setSaldo(miCuenta.getSaldo()-monto);
            cout<<"\nUsted ha retirado: "<<monto<<" colones"<<endl;
            cout<<"Su saldo ahora es de: "<<consultaSaldo()<<" colones"<<endl<<endl;
        }

        system("pause");
}

void Cajero::retiroPredeterminado2()
{
    int monto=30000;
    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);

    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())
    {
        cout<<"Ha alcanzado el limite diario"<<endl;
        miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);
    }else
        {
            miCuenta.setSaldo(miCuenta.getSaldo()-monto);
            cout<<"\nUsted ha retirado: "<<monto<<" colones"<<endl;
            cout<<"Su saldo ahora es de: "<<consultaSaldo()<<" colones"<<endl<<endl;
        }

        system("pause");
}

void Cajero::retiroPredeterminado3()
{
    int monto=50000;
    miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()+monto);

    if(miCuenta.getMontoARetirar()>miCuenta.getLimite())
    {
        cout<<"Ha alcanzado el limite diario"<<endl;
        miCuenta.setMontoARetirar(miCuenta.getMontoARetirar()- monto);
    }else
        {
            miCuenta.setSaldo(miCuenta.getSaldo()-monto);
            cout<<"\nUsted ha retirado: "<<monto<<" colones"<<endl;
            cout<<"Su saldo ahora es de: "<<consultaSaldo()<<" colones"<<endl<<endl;
        }

    system("pause");
}

void Cajero::setTruePin(int truePin)
{
    this->truePin=truePin;
}

void Cajero::setVerificador(bool verificador)
{
    this->verificador=verificador;
}

int Cajero::getTruePin()
{
  return truePin;
}

bool Cajero::getVerificador()
{
    return verificador;
}

Cajero::~Cajero()
{
    //dtor
}
