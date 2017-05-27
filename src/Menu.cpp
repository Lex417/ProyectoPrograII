//
// Created by Enzo Darío Quesada y Leonardo Hidalgo, 2/4/17 , all rights reserved.
//
#include "Menu.h"

void Menu::menuPrincipal()
{

    cout<<" ___________________________________ "<<endl;
    cout<<"|  Bienvenido al Cajero Automatico  |"<<endl;
    cout<<"|-----------------------------------|"<<endl;
    cout<<"|    Ingrese su                     |"<<endl;
    cout<<"|               tarjeta por favor   |"<<endl;
    cout<<"|___________________________________|"<<endl<<endl<<endl;

    system("pause");

    Cajero miCajero(777,280000,200000);// clave correcta, saldo, limite
    miCajero.verificaPin();

      ifstream myFile2("myFile.bin",ios::binary);
      if (myFile2.is_open())
      {
        myFile2.seekg(0);
        myFile2.read((char *)&miCajero, sizeof (Cajero));
        myFile2.close();
      }
      else
        cout<<"No se pudo abrir el archivo";





    if (miCajero.getVerificador()==true)
    {
        int opc=-1;
        while ( opc != 4 )
        {
            a://goto de la opción 4
            system("cls");
            cout <<"\nLa contrasenia es correcta, Bienvenido al menu princpipal"<<endl<<endl;
            cout <<" ________________________________________"<<endl;
            cout <<"| Ingrese la opcion que desee realizar:  |"<<endl;
            cout <<"|________________________________________|"<<endl;
            cout <<"|                                        |"<<endl;
            cout <<"| [1] Consultar saldo                    |"<<endl;
            cout <<"| [2] Retirar saldo                      |"<<endl;
            cout <<"| [3] Retirar saldo predeterminado       |"<<endl;
            cout <<"| [4] Salir                              |"<<endl;
            cout <<"|________________________________________|"<<endl;
            cin>>opc;
            while (cin.fail()) // si falla
            {
                 cout << "\rOpcion invalida, porfavor ingrese una de las opciones disponibles"; // doy este mensaje
                 Sleep (1500);
                 cin.clear();
                 cin.ignore (500, '\n'); // limpio buffer
                 goto a;
            }
            switch (opc)
            {

                case 1: cout<<"\nSu saldo es de: "<<miCajero.consultaSaldo()<<endl<<endl;system("pause");break;

                case 2: miCajero.retiroManual();system("pause");break;

                case 3:

                        while (opc != 4)
                        {
                            b:
                            system("cls");
                            cout <<" ______________________________________"<<endl;
                            cout <<"|   Cuanto dinero desea retirar?       |"<<endl;
                            cout <<"|______________________________________|"<<endl;
                            cout <<"|                                      |"<<endl;
                            cout <<"|   [1] 10000                          |"<<endl;
                            cout <<"|   [2] 30000                          |"<<endl;
                            cout <<"|   [3] 50000                          |"<<endl;
                            cout <<"|   [4] Volver al menu principal       |"<<endl;
                            cout <<"|______________________________________|"<<endl;


                            cin >> opc;
                            while (cin.fail()) // si falla
                            {
                                 cout << "\rOpcion invalida, por favor ingrese una de las opciones disponibles"; // doy este mensaje
                                 Sleep (1500);
                                 cin.clear();
                                 cin.ignore (500, '\n'); // limpio buffer
                                 goto b;
                            }

                            switch (opc)
                            {
                                case 1: miCajero.retiroPredeterminado1();break;

                                case 2: miCajero.retiroPredeterminado2();break;

                                case 3: miCajero.retiroPredeterminado3();break;

                                case 4: goto a;break;

                                default: cout << "\rOpcion invalida, por favor ingrese una de las opciones disponibles";
                                         Sleep(1500);
                                         break;
                            }
                        }
                    case 4:
                        //system("cls");
                        cout<<"\n\nRetire su tarjeta del cajero, Gracias! \n\n\n";break;//salir del menu (retirar la tarjeta)

                    default: cout << "\rOpcion invalida, por favor ingrese una de las opciones disponibles"; // doy este mensaje
                            Sleep(1500);
                            break;


            }
        }
    }
     ofstream myFile("myFile.bin", ios::binary);
    if (myFile.is_open())
    {
        myFile.write((char *)&miCajero, sizeof (Cajero));
        myFile.close();
    }

    else
        cout<<"No se pudo abrir el archivo";
}


