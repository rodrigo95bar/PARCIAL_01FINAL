#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
#include "informes.h"
#define CANT_ORQUESTA 50
#define SORT_UP 1
#define SORT_DOWN 0
#define CANT_MUSICO 1000
#define CANT_INSTRUMENTO 20
int main()
{
    int opcion;
    int opcionSecundaria;
    int contadorId=0;
    int flag=0;
    Orquesta pOrquesta[CANT_ORQUESTA];
    Musico pMusico[CANT_MUSICO];
    Instrumento pInstrumento [CANT_INSTRUMENTO];
    orquesta_Inicializar(pOrquesta,CANT_ORQUESTA);
    musico_Inicializar(pMusico,CANT_MUSICO);
    instrumento_Inicializar(pInstrumento,CANT_INSTRUMENTO);

    crearMusicos(pMusico);
    crearOrquesta(pOrquesta);
    crearInstrumentos(pInstrumento);

    saludoMenu();
    do
    {
        utn_getUnsignedInt("\n\n1) Agregar Orquesta\n2) Eliminar Orquesta \n3) Imprimir orquesta \n4) Agregar Musico \n5) Modificar musico \n6) Eliminar Musico\n7) Imprimir musicos\n8) Agregar instrumentos\n9) Imprimir instrumentos\n10) MENU INFORMES\n11) SALIR\n",                   //cambiar
                      "\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1:
                orquesta_alta(pOrquesta,CANT_ORQUESTA,&contadorId);
                flag=1;

                break;

            case 2:
                musico_bajaPorOrquesta(pMusico,CANT_MUSICO, orquesta_baja(pOrquesta,CANT_ORQUESTA));

                break;

            case 3:
                orquesta_listar(pOrquesta,CANT_ORQUESTA);
                break;

            case 4:
             if(flag==2)
             {
                musico_alta(pMusico, pOrquesta, pInstrumento,CANT_MUSICO,&contadorId);
             }
                break;


            case 5:
                  musico_modificar(pMusico,pOrquesta,pInstrumento,CANT_MUSICO);
                break;

            case 6:
                 musico_baja(pMusico,CANT_MUSICO);
                break;

             case 7:
                musico_listar(pMusico,pInstrumento,CANT_MUSICO);
                    break;

             case 8:
                 if(flag==1)
                 {
                    flag=2;
                 instrumento_alta(pInstrumento,CANT_INSTRUMENTO,&contadorId);
                 }
                    break;

             case 9:
                 instrumento_listar(pInstrumento,CANT_INSTRUMENTO);
                    break;

             case 10:
                    utn_getUnsignedInt("\n 1)Listar A: Orquesta con mas de 5 Musicos \n 2)Listar B: Musicos con edad mayor a 30 \n 3)Listar C: Orquesta buscada por lugar. \n 4)Listar D: Orquesta completa \n 5)Listar E: Buscar Orquesta por ID \n 6)Listar F: Orquesta con mas Musicos \n 7)Listar G: Musicos que toquen instrumentos de Cuerdas \n 8)Listar H: Promedio Musicos por Orquesta\n",                   //cambiar
                      "\nError",1,sizeof(int),1,9,1,&opcionSecundaria);
                    switch(opcionSecundaria)
                    {
                    case 1: informe_listarOrquestaPorCantidadMusicos(pOrquesta,CANT_ORQUESTA, pMusico,CANT_MUSICO);
                     break;


                    case 2:
                     musico_listarNuevo(pMusico,pInstrumento,CANT_MUSICO);
                     break;

                    case 3:
                    orquesta_listarLugar(pOrquesta,CANT_ORQUESTA);
                     break;

                    case 4: informe_listarOrquestaCompleta(pOrquesta,CANT_ORQUESTA,
                                     pMusico,CANT_MUSICO,
                                    pInstrumento,CANT_INSTRUMENTO);

                     break;

                    case 5:
                     musico_listarPorIdOrquesta(pMusico,pOrquesta,pInstrumento,CANT_MUSICO);
                     break;


                    case 6:
                     OrquestaConMayorMusicoYcantidadMusico(pMusico,CANT_MUSICO);
                     break;

                    case 7:
                     informe_sortApellidoMusico(pMusico,CANT_MUSICO,1);
                     break;


                    case 8:
                     promedioTotalMusicoOrquesta(pMusico,pOrquesta,CANT_MUSICO,CANT_ORQUESTA);
                     break;


                    case 9:

                     break;

                    default:
                          printf("\nNumero Invalido\n");
                     break;

                    }

             case 11:
             break;

            default:

                printf("\nOpcion no valida");
        }
    }



    while(opcion!=11);
  return 0;
}


