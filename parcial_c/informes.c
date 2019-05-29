#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
#define COL 25


/** \brief Bienvenida del abm.
 *
 * \return void.
 *
 */

void saludoMenu()
{
printf("\n\t \\\\\\\\BIENVENIDO AL MENU ABM/////// \t\n");
printf("\n\t Indique una opcion del menu (Numeros entre 1 y 10)\t\n");
}

/** \brief Busca un valor y lista los elementos de dos arrays vinculados
* \param arrayA Fantasma Array de Fantasma
* \param arrayB Fantasma Array de Fantasma
* \param sizeI int Tamaño del arrayA
* \param sizeJ int Tamaño del arrayB
* \param criterio char* Puntero al valor que debe contener el elemento del array para que se liste
* \return int Return (-1) si Error [Invalid length or NULL pointer] - (0) Ok
*
*
*/

/** \brief Ordena de mayor a menor Cadenas.
 *
 * \param Musico pMusico Puntero a la estructura Musico.
 * \param TAM Tamaño del array.
 * \return void.
 *
 */


void ordenar_cadenas(Musico *pMusico, int TAM)
{
   char temp[20];
   int i,j;

   for(i=0; i < TAM-1; i++)
   {
      for(j=i+1; j < TAM; j++)
      if(strcmp(pMusico[i].nombre, pMusico[j].nombre) > 0)
      {

         strcpy(temp, pMusico[i].nombre);
         strcpy(pMusico[i].nombre, pMusico[j].nombre);
         strcpy(pMusico[j].nombre, temp);
      }
   }
   printf("\n\tORDENADO!\t\n");
    for(int j = 0; j<TAM; j++){
            if(pMusico[j].isEmpty==1)
            continue;
    else
        printf("\n%s\n",pMusico[j].nombre);
    }
}



/** \brief Ordena de mayor a menor Numeros.
 *
 * \param Musico pMusico Puntero a la estructura Musico.
 * \param TAM Tamaño del array.
 * \return void.
 *
 */

void ordenar_numerosMayorAmenor(Musico *pMusico, int TAM)
{

int temp;
    int i,j;

    for(i = 0; i < TAM-1; i++){
        for(j = i+1; j < TAM; j++){
            if(pMusico[i].edad < pMusico[j].edad)
            {
                temp = pMusico[i].edad;
                pMusico[i].edad = pMusico[j].edad;
                pMusico[j].edad = temp;
            }
        }
    }
    printf("\n\tORDENADO!\t\n");
    for(int j = 0; j<TAM; j++){
            if(pMusico[j].isEmpty==1)
            continue;
    else
        printf("%d\n",pMusico[j].edad);
    }
}

/** \brief Ordena de menor a mayor Numeros.
 *
 * \param Musico pMusico Puntero a la estructura Musico.
 * \param TAM Tamaño del array.
 * \return void.
 *
 */

void ordenar_numerosMenorAmayor(Musico *pMusico, int TAM)
{

int temp;
    int i,j;

    for(i = 0; i < TAM-1; i++){
        for(j = i+1; j < TAM; j++){
            if(pMusico[i].edad > pMusico[j].edad)
            {
                temp = pMusico[i].edad;
                pMusico[i].edad = pMusico[j].edad;
                pMusico[j].edad = temp;
            }
        }
    }
    for(int j = 0; j<TAM; j++){
            if(pMusico[j].isEmpty==1)
            continue;
    else
        printf("%d\n",pMusico[j].edad);
    }
}


/** \brief Saca el promedio total de los musicos en todas las orquestas.
 *
 * \param Musico pMusico Puntero a la estructura Musico.
 * \param Orquesta pOrquesta Puntero a la estructura Orquesta.
 * \param sizeM Tamaño del array Musico.
 * \param sizeO Tamaño del array Orquesta.
 * \return void.
 *
 */

void promedioTotalMusicoOrquesta(Musico *pMusico,Orquesta *pOrquesta,int sizeM,int sizeO)
{
  float contadorMusico=0;
  float contadorOrquesta=0;
  int i,j;
  float promedio;
   for(i=0;i < sizeM;i++)
   {
       if(pMusico[i].isEmpty==0)
          contadorMusico++;

       else
         continue;
   }

    for(j=0; j < sizeO;j++)
    {
        if(pOrquesta[j].isEmpty==0)
            contadorOrquesta++;

        else
            continue;
    }
    promedio = contadorMusico / contadorOrquesta;
    printf("\nMusicos : %.2f, Orquestas : %.2f\n",contadorMusico,contadorOrquesta);
    printf("\nEl promedio de musicos por Orquesta es de: %.2f\n",promedio);

}










/** \brief Determina la cantidad de instrumentos de cada tipo.
 *
 * \param Instrumento pInstrumento Puntero a la estructura Instrumento
 * \param size Tamaño del array instrumento.
 * \return
 *
 */

 void promedioInstrumentoDeTipo(Instrumento *pInstrumento,int size)
 {
int contadorInstrumento1=0;
int contadorInstrumento2=0;
int contadorInstrumento3=0;
int contadorInstrumento4=0;
int i;

for(i=0; i<size;i++)
{
    if(pInstrumento[i].isEmpty==0 && pInstrumento[i].instrumento==1)
    {
        contadorInstrumento1++;
        continue;
    }
    if(pInstrumento[i].isEmpty==0 && pInstrumento[i].instrumento==2)
    {
        contadorInstrumento2++;
        continue;
    }
    if(pInstrumento[i].isEmpty==0 && pInstrumento[i].instrumento==3)
    {
        contadorInstrumento3++;
        continue;
    }
    if(pInstrumento[i].isEmpty==0 && pInstrumento[i].instrumento==4)
    {
        contadorInstrumento4++;
        continue;
    }
    else
        continue;
}

printf("\n La cantidad de Instrumentos de tipo 1 es: %d\n La cantidad de Instrumentos de tipo 2 es: %d\n La cantidad de Instrumentos de tipo 3 es: %d\n La cantidad de Instrumentos de tipo 4 es: %d\n",contadorInstrumento1,
                                                                                                                                                                                                      contadorInstrumento2,
                                                                                                                                                                                                      contadorInstrumento3,
                                                                                                                                                                                                      contadorInstrumento4);

 }







/** \brief Determina el instrumento mas usado a traves del ordenamiento mayor a menor, solo mostrando el numero mas grande.
 *
 * \param Instrumento pInstrumento Puntero a la estructura Instrumento
 * \param size Tamaño array de Instrumento
 * \return
 *
 */

void instrumentoMasUsado(Instrumento *pInstrumento, int size)
{
int temp;
int i;
int j,k;

int contadorInstrumento1=0;
int contadorInstrumento2=0;
int contadorInstrumento3=0;
int contadorInstrumento4=0;
int bufferInstrumento1;
int bufferInstrumento2;
int bufferInstrumento3;
int bufferInstrumento4;
int maximo=0;
int maximoFinal;
for(k=0; k<size;k++)
{
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==1)
    {
        contadorInstrumento1++;
        continue;
    }
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==2)
    {
        contadorInstrumento2++;
        continue;
    }
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==3)
    {
        contadorInstrumento3++;
        continue;
    }
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==4)
    {
        contadorInstrumento4++;
        continue;
    }
    else
        continue;
}

 bufferInstrumento1 = contadorInstrumento1;
 bufferInstrumento2 = contadorInstrumento2;
 bufferInstrumento3 = contadorInstrumento3;
 bufferInstrumento4 = contadorInstrumento4;


  if(bufferInstrumento1>maximo)
{

    maximo=bufferInstrumento1;
   //maximo=bufferMusico1;
   maximoFinal=1;

}
 if(bufferInstrumento2>maximo)
{
    maximo=bufferInstrumento2;
   // maximo=bufferMusico2;
    maximoFinal=2;
}
 if(bufferInstrumento3>maximo)
{
    maximo=bufferInstrumento3;
   //maximo=bufferMusico3;
   maximoFinal=3;
}

if(bufferInstrumento4>maximo)
{
    maximo=bufferInstrumento4;
   //maximo=bufferMusico3;
   maximoFinal=4;
}


int array[4] = {bufferInstrumento1,bufferInstrumento2,bufferInstrumento3,bufferInstrumento4};
    for(i = 0; i < 4-1; i++){
        for(j = i+1; j < 4; j++){
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }



  switch(maximoFinal)
  {
    case 1:
        printf("\nEl instrumento mas utiliazado es de tipo: %d, Cuerdas\n",maximoFinal);
        break;

    case 2:
        printf("\nEl instrumento mas utiliazado es de tipo: %d, Viento Madera\n",maximoFinal);
        break;

    case 3:
        printf("\nEl instrumento mas utiliazado es de tipo:: %d, Viento Metal\n",maximoFinal);
        break;

    case 4:
        printf("\nEl instrumento mas utiliazado es de tipo: %d, Percusion\n",maximoFinal);
        break;

    default:
        break;
  }





  for(int j = 0; j<4; j++){
        printf("\nLa cantidad total del instrumento mas utilizado es: %d\n",array[j]);
        break;
    }
}



/** \brief Determina el instrumento menos usado a traves del ordenamiento menor a mayor, solo mostrando el numero mas pequeño.
 *
 * \param Instrumento pInstrumento Puntero a la estructura Instrumento
 * \param size Tamaño array de Instrumento
 * \return
 *
 */

void instrumentoMenosUsado(Instrumento *pInstrumento, int size)
{
int temp;
int i;
int j,k;

int contadorInstrumento1;
int contadorInstrumento2;
int contadorInstrumento3;
int contadorInstrumento4;
int bufferInstrumento1;
int bufferInstrumento2;
int bufferInstrumento3;
int bufferInstrumento4;
int minimo=1;
int minimoFinal;
for(k=0; k<size;k++)
{
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==1)
    {
        contadorInstrumento1++;
        continue;
    }
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==2)
    {
        contadorInstrumento2++;
        continue;
    }
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==3)
    {
        contadorInstrumento3++;
        continue;
    }
    if(pInstrumento[k].isEmpty==0 && pInstrumento[k].instrumento==4)
    {
        contadorInstrumento4++;
        continue;
    }
    else
        continue;
}

 bufferInstrumento1 = contadorInstrumento1;
 bufferInstrumento2 = contadorInstrumento2;
 bufferInstrumento3 = contadorInstrumento3;
 bufferInstrumento4 = contadorInstrumento4;


 if(bufferInstrumento1<=minimo)
{
    minimo=bufferInstrumento1;
   //maximo=bufferMusico1;
    minimoFinal=1;

}
 if(bufferInstrumento2<=minimo)
{
    minimo=bufferInstrumento2;
   // maximo=bufferMusico2;
    minimoFinal=2;
}
 if(bufferInstrumento3<=minimo)
{
    minimo=bufferInstrumento3;
   //maximo=bufferMusico3;
   minimoFinal=3;
}

if(bufferInstrumento4<=minimo)
{
    minimo=bufferInstrumento4;
   //maximo=bufferMusico3;
   minimoFinal=4;
}



int array[4] = {bufferInstrumento1,bufferInstrumento2,bufferInstrumento3,bufferInstrumento4};
    for(i = 0; i < 4-1; i++){
        for(j = i+1; j < 4; j++){
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }


  switch(minimoFinal)
  {
    case 1:
        if(minimoFinal==1){
        printf("\nEste instrumento es de tipo: 1)Cuerdas\n");
        }
        break;

    case 2:
        if(minimoFinal==2){
        printf("\nEste instrumento es de tipo: 2)Viento Madera\n");
        }
        break;

    case 3:
        if(minimoFinal==3){
        printf("\nEste instrumento es de tipo: 3)Viento Metal\n");
        }
        break;

    case 4:
        if(minimoFinal==4){
        printf("\nEste instrumento es de tipo: 4)Percusion\n");
        }
        break;
    default:
        break;
  }


  for(int j = 0; j<4; j++){
        printf("La cantidad de este instrumento es de: %d\n",array[j]);
        break;
    }
}





/** \brief Esta funcion calcula la cantidad de musicos y a la vez la Orquesta que mas Musicos tenga.
 *
 * \param Musico pMusico Puntero a la estrucura Musico.
 * \param sizeM Tamaño del array musico.
 * \return
 *
 */

void OrquestaConMayorMusicoYcantidadMusico(Musico *pMusico, int sizeM)
{
int contadorMusico1=0;
int contadorMusico2=0;
int contadorMusico3=0;
int bufferMusico1;
int bufferMusico2;
int bufferMusico3;
int maximo=0;
int maximoFinal=0;
int i,j,k;
int temp;

for(k=0;k<sizeM;k++)
{
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==1)
        {
            contadorMusico1++;
            continue;
        }
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==2)
        {
            contadorMusico2++;
            continue;
        }
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==3)
        {
            contadorMusico3++;
            continue;
        }
    else
        continue;
}

 bufferMusico1 = contadorMusico1;
 bufferMusico2 = contadorMusico2;
 bufferMusico3 = contadorMusico3;

int array[3] = {bufferMusico1,bufferMusico2,bufferMusico3};
    for(i = 0; i < 3-1; i++){
        for(j = i+1; j < 3; j++){
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
  if(bufferMusico1>maximo)
{
   maximo=bufferMusico1;
   maximoFinal=1;

}
 if(bufferMusico2>maximo)
{
   maximo=bufferMusico2;
    maximoFinal=2;
}
if(bufferMusico3>maximo)
{
   maximo=bufferMusico3;
   maximoFinal=3;
}
  switch(maximoFinal)
  {
    case 1:
        if(maximoFinal==1){
        printf("\nLa orquesta con mas musicos es la de tipo: 1)Sinfonica\n");
        }
        break;

    case 2:
        if(maximoFinal==2){
        printf("\nLa orquesta con mas musicos es la de tipo: 2)Filarmonica\n");


        }
        break;

    case 3:
        if(maximoFinal==3){
        printf("\nLa orquesta con mas musicos es la de tipo: 3)Camara\n");
        }
        break;

    default:
        break;
  }

for(j = 0; j<3; j++)
    {
        printf("Esta orquesta esta compuesta por %d Musicos\n",array[j]);
        break;
    }
}


/** \brief Esta funcion calcula la cantidad de musicos y a la vez la Orquesta que menos Musicos tenga.
 *
 * \param Musico pMusico Puntero a la estrucura Musico.
 * \param sizeM Tamaño del array musico.
 * \return
 *
 */

void OrquestaConMenorMusicoYcantidadMusico(Musico *pMusico, int sizeM)
{
int contadorMusico1=0;
int contadorMusico2=0;
int contadorMusico3=0;
int bufferMusico1;
int bufferMusico2;
int bufferMusico3;
int minimo=1;
int minimoFinal;
int i,j,k;
int temp;

for(k=0;k<sizeM;k++)
{
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==1)
        {
            contadorMusico1++;
            continue;
        }
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==2)
        {
            contadorMusico2++;
            continue;
        }
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==3)
        {
            contadorMusico3++;
            continue;
        }
    else
        continue;
}

 bufferMusico1 = contadorMusico1;
 bufferMusico2 = contadorMusico2;
 bufferMusico3 = contadorMusico3;

int array[3] = {bufferMusico1,bufferMusico2,bufferMusico3};
    for(i = 0; i < 3-1; i++){
        for(j = i+1; j < 3; j++){
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
  if(bufferMusico1<=minimo)
{
  minimo=bufferMusico1;
   minimoFinal=1;

}
 if(bufferMusico2<=minimo)
{
    minimo=bufferMusico2;
    minimoFinal=2;
}
  if(bufferMusico3<=minimo)
{
   minimo=bufferMusico3;
   minimoFinal=3;
}
  switch(minimoFinal)
  {
    case 1:
        printf("\nLa orquesta con menos musicos es la de tipo: %d, Sinfonica\n",minimoFinal);
        break;

    case 2:
        printf("\nLa orquesta con menos musicos es la de tipo: %d, Filarmonica\n",minimoFinal);
        break;

    case 3:
        printf("\nLa orquesta con menos musicos es la de tipo: %d, Camara\n",minimoFinal);
        break;

    default:
        break;
  }

for(j = 0; j<3; j++)
    {
        printf("Esta orquesta esta compuesta por %d Musicos\n",array[j]);
        break;
    }
}


/** \brief Promedia y suma la edad de todos los Musicos.
 *
 * \param Musico pMusico Puntero a la estructura Musico.
 * \param len Tamaño del array.
 * \return
 *
 */

 void informe_cantidadTotalPromedioEdadesDeMusico(Musico* pMusico,int len)
{
    int i;
    int acumulador = 0;
    int contador = 0;
    float promedio;

    if(pMusico != NULL && len > 0)
    {
        for(i=0;i<len;i++)
        {
            if(pMusico[i].isEmpty == 0)
            {
                acumulador+=pMusico[i].edad;
                contador++;
            }
        }

    promedio = acumulador / contador;

    printf("\nEl total de musicos es: %d\n",contador);
    printf("La suma de las edades es: %d",acumulador);
    printf("El promedio entre las edades de musicos es: %.2f",promedio);
    }

}




/** \brief Crea musicos hardcodeados.
 *
 * \param Musico pMusico Puntero a la estructura Musico.
 * \return
 *
 */

void crearMusicos(Musico *pMusico)
{
            pMusico[0].isEmpty=0;
            pMusico[0].idMusico=1;
            pMusico[0].edad=30;
            pMusico[0].suOrquesta=1;
            pMusico[0].suInstrumento=1;
            strcpy(pMusico[0].nombre,"Mus1");
            strcpy(pMusico[0].apellido,"Amus1");


             pMusico[1].isEmpty=0;
            pMusico[1].idMusico=2;
            pMusico[1].edad=20;
            pMusico[1].suOrquesta=1;
            pMusico[1].suInstrumento=1;
            strcpy(pMusico[1].nombre,"Mus2");
            strcpy(pMusico[1].apellido,"Amus2");

             pMusico[2].isEmpty=0;
            pMusico[2].idMusico=3;
            pMusico[2].edad=25;
            pMusico[2].suOrquesta=1;
            pMusico[2].suInstrumento=1;
            strcpy(pMusico[2].nombre,"Mus3");
            strcpy(pMusico[2].apellido,"Amus3");


             pMusico[3].isEmpty=0;
            pMusico[3].idMusico=4;
            pMusico[3].edad=27;
            pMusico[3].suOrquesta=1;
            pMusico[3].suInstrumento=1;
            strcpy(pMusico[3].nombre,"Mus4");
            strcpy(pMusico[3].apellido,"Amus4");

             pMusico[4].isEmpty=0;
            pMusico[4].idMusico=5;
            pMusico[4].edad=22;
            pMusico[4].suOrquesta=1;
            pMusico[4].suInstrumento=1;
            strcpy(pMusico[4].nombre,"Mus5");
            strcpy(pMusico[4].apellido,"Amus5");

            pMusico[5].isEmpty=0;
            pMusico[5].idMusico=6;
            pMusico[5].edad=35;
            pMusico[5].suOrquesta=1;
            pMusico[5].suInstrumento=2;
            strcpy(pMusico[5].nombre,"Mus6");
            strcpy(pMusico[5].apellido,"Amus6");



            pMusico[6].isEmpty=0;
            pMusico[6].idMusico=7;
            pMusico[6].edad=30;
            pMusico[6].suOrquesta=1;
            pMusico[6].suInstrumento=2;
            strcpy(pMusico[6].nombre,"Mus1");
            strcpy(pMusico[6].apellido,"Amus1");


            pMusico[7].isEmpty=0;
            pMusico[7].idMusico=8;
            pMusico[7].edad=30;
            pMusico[7].suOrquesta=1;
            pMusico[7].suInstrumento=2;
            strcpy(pMusico[7].nombre,"Mus1");
            strcpy(pMusico[7].apellido,"Amus1");


            pMusico[8].isEmpty=0;
            pMusico[8].idMusico=9;
            pMusico[8].edad=30;
            pMusico[8].suOrquesta=1;
            pMusico[8].suInstrumento=4;
            strcpy(pMusico[8].nombre,"Mus1");
            strcpy(pMusico[8].apellido,"Amus1");



            pMusico[9].isEmpty=0;
            pMusico[9].idMusico=10;
            pMusico[9].edad=30;
            pMusico[9].suOrquesta=1;
            pMusico[9].suInstrumento=4;
            strcpy(pMusico[9].nombre,"Mus1");
            strcpy(pMusico[9].apellido,"Amus1");




}

/** \brief Crea Orquesta hardcodeados.
 *
 * \param Orquesta pOrquesta Puntero a la estructura Orquesta.
 * \return
 *
 */
void crearOrquesta(Orquesta *pOrquesta)
{
            pOrquesta[0].isEmpty=0;

            pOrquesta[0].idOrquesta=1;
            pOrquesta[0].tipoOrquesta=1;
            strcpy(pOrquesta[0].nombre,"nombre1");
            strcpy(pOrquesta[0].lugar,"lugar1");

             pOrquesta[1].isEmpty=0;

            pOrquesta[1].idOrquesta=2;
            pOrquesta[1].tipoOrquesta=2;
            strcpy(pOrquesta[1].nombre,"nombre2");
            strcpy(pOrquesta[1].lugar,"lugar1");

            pOrquesta[2].isEmpty=0;

            pOrquesta[2].idOrquesta=3;
            pOrquesta[2].tipoOrquesta=3;
            strcpy(pOrquesta[2].nombre,"nombre3");
            strcpy(pOrquesta[2].lugar,"lugar2");

            pOrquesta[3].isEmpty=0;

            pOrquesta[3].idOrquesta=4;
            pOrquesta[3].tipoOrquesta=3;
            strcpy(pOrquesta[3].nombre,"nombre4");
            strcpy(pOrquesta[3].lugar,"lugar3");
}

/** \brief Crea instrumentos hardcodeados.
 *
 * \param Instrumento pInstrumento Puntero a la estructura Instrumento.
 * \return
 *
 */

void crearInstrumentos(Instrumento *pInstrumento)
{
//INSTRUMENTO1 HAY 2   INSTRUMENTO2 HAY 1     INSTRUMENTO3 HAY  2   INSTRUMENTO4 HAY 5
            pInstrumento[0].isEmpty=0;
            pInstrumento[0].idInstrumento=1;
            pInstrumento[0].instrumento=1;
            strcpy(pInstrumento[0].nombreInstrumento,"inst1");

            pInstrumento[1].isEmpty=0;
            pInstrumento[1].idInstrumento=2;
            pInstrumento[1].instrumento=1;
            strcpy(pInstrumento[1].nombreInstrumento,"inst2");

            pInstrumento[2].isEmpty=0;
            pInstrumento[2].idInstrumento=3;
            pInstrumento[2].instrumento=1;
            strcpy(pInstrumento[2].nombreInstrumento,"inst3");

            pInstrumento[3].isEmpty=0;
            pInstrumento[3].idInstrumento=4;
            pInstrumento[3].instrumento=1;
            strcpy(pInstrumento[3].nombreInstrumento,"inst4");

            pInstrumento[4].isEmpty=0;
            pInstrumento[4].idInstrumento=5;
            pInstrumento[4].instrumento=1;
            strcpy(pInstrumento[4].nombreInstrumento,"inst5");

             pInstrumento[5].isEmpty=0;
            pInstrumento[5].idInstrumento=6;
            pInstrumento[5].instrumento=2;
            strcpy(pInstrumento[5].nombreInstrumento,"inst6");

             pInstrumento[6].isEmpty=0;
            pInstrumento[6].idInstrumento=7;
            pInstrumento[6].instrumento=2;
            strcpy(pInstrumento[6].nombreInstrumento,"inst7");



             pInstrumento[7].isEmpty=0;
            pInstrumento[7].idInstrumento=8;
            pInstrumento[7].instrumento=2;
            strcpy(pInstrumento[7].nombreInstrumento,"inst8");



             pInstrumento[8].isEmpty=0;
            pInstrumento[8].idInstrumento=9;
            pInstrumento[8].instrumento=4;
            strcpy(pInstrumento[8].nombreInstrumento,"inst9");



             pInstrumento[9].isEmpty=0;
            pInstrumento[9].idInstrumento=10;
            pInstrumento[9].instrumento=4;
            strcpy(pInstrumento[9].nombreInstrumento,"inst10");



             //pInstrumento[10].isEmpty=0;
            //pInstrumento[10].idInstrumento=11;
            //pInstrumento[10].instrumento=4;
           // strcpy(pInstrumento[10].nombreInstrumento,"inst11");








}


/** \brief Ordena los Musicos por nombre, de forma ascendente o descendente.
 *
 * \param Musico pMusico Puntero a la estructura Orquesta.
 * \param len Tamaño del array Orquesta.
 * \param ordenamiento Numero de tipo INT que determina la clase de ordenamiento.
 * \return Retorna 0 si esta bien y ordenado, -1 si se detecta error.
 *
 */
int informe_sortNombreMusico(Musico *pMusico,int len,int ordenamiento)  // EL ASCENDENTE ES 1 Y EL DESCENDENTE ES EL 0
{
    int i;
    int j;
    Musico buffer;
    int ret = -1;
    if(pMusico != NULL && len > 0)
    {
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(ordenamiento == 1 && (strcmp(pMusico[j].nombre,pMusico[i].nombre) < 0))
                {
                    buffer = pMusico[i];
                    pMusico[i] = pMusico[j];
                    pMusico[j] = buffer;
                    ret = 0;
                }
                else if(ordenamiento == 0 && (strcmp(pMusico[j].nombre,pMusico[i].nombre) > 0))
                {
                    buffer = pMusico[i];
                    pMusico[i] = pMusico[j];
                    pMusico[j] = buffer;
                    ret = 0;
                }

            }
        }
        for(int j = 0; j<len; j++){
            if(pMusico[j].isEmpty==1)
            continue;
    else
        printf("\n%s\n",pMusico[j].nombre);
    }
    }
    return ret;
}

/** \brief Ordena los Musicos por apellido, de forma ascendente o descendente.
 *
 * \param Musico pMusico Puntero a la estructura Orquesta.
 * \param len Tamaño del array Orquesta.
 * \param ordenamiento Numero de tipo INT que determina la clase de ordenamiento.
 * \return Retorna 0 si esta bien y ordenado, -1 si se detecta error.
 *
 */
int informe_sortApellidoMusico(Musico *pMusico,int len,int ordenamiento)  // EL ASCENDENTE ES 1 Y EL DESCENDENTE ES EL 0
{
    int i;
    int j;
    Musico buffer;
    int ret = -1;
    if(pMusico != NULL && len > 0)
    {
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(ordenamiento == 1 && (strcmp(pMusico[j].apellido,pMusico[i].apellido) < 0))
                {
                    buffer = pMusico[i];
                    pMusico[i] = pMusico[j];
                    pMusico[j] = buffer;
                    ret = 0;
                }
                else if(ordenamiento == 0 && (strcmp(pMusico[j].apellido,pMusico[i].apellido) > 0))
                {
                    buffer = pMusico[i];
                    pMusico[i] = pMusico[j];
                    pMusico[j] = buffer;
                    ret = 0;
                }

            }
        }
        for(int j = 0;j<len; j++)
        {
            if(pMusico[j].isEmpty==1)
            continue;
        if(pMusico[j].suInstrumento==1)
        printf("\n ID: %d\n suInstrumento: %d\n nombre: %s\n apellido: %s\n ",
                       pMusico[j].idMusico,pMusico[j].suInstrumento,pMusico[j].nombre,pMusico[j].apellido);
        //printf("\n%s\n",pMusico[j].apellido);
    }
    }



























    return ret;
}

/** \brief Ordena las Orquestas por nombre y tipo, de forma ascendente o descendente.
 *
 * \param Orquesta pOrquesta Puntero a la estructura Orquesta.
 * \param len Tamaño del array Orquesta.
 * \param ordenamiento Numero de tipo INT que determina la clase de ordenamiento.
 * \return Retorna 0 si esta bien y ordenado, -1 si se detecta error.
 *
 */

/*
int informe_sortOrquestaNombreYtipo(Orquesta* pOrquesta,int len,int ordenamiento)
{
    int i;
    int j;
    Orquesta buffer;
    int ret = -1;

    if(pOrquesta != NULL && len > 0)
    {
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(ordenamiento == 1 && (strcmp(pOrquesta[j].nombre,pOrquesta[i].nombre) < 0))
                {
                    buffer = pOrquesta[i];
                    pOrquesta[i] = pOrquesta[j];
                    pOrquesta[j] = buffer;
                    ret = 0;
                }
                else if(ordenamiento == 0 && (strcmp(pOrquesta[j].nombre,pOrquesta[i].nombre) > 0))
                {
                    buffer = pOrquesta[i];
                    pOrquesta[i] = pOrquesta[j];
                    pOrquesta[j] = buffer;
                    ret = 0;
                }
                else if(strcmp(pOrquesta[j].nombre,pOrquesta[i].nombre) == 0)
                {
                    if(pOrquesta[i].tipoOrquesta > pOrquesta[j].tipoOrquesta)
                    {
                        buffer = pOrquesta[i];
                        pOrquesta[i] = pOrquesta[j];
                        pOrquesta[j] = buffer;
                        ret = 0;
                    }
                }
            }
        }
       for(int j = 0; j<len; j++){
            if(pOrquesta[j].isEmpty==1)
            continue;
       else
        if(pMusico)
        printf("\nNombre de Orquesta: %s\n Tipo de Orquesta: %d ",pOrquesta[j].nombre,pOrquesta[j].tipoOrquesta);
    }
    }

    return ret;
}

*/

void OrquestaConMayorMusicoYcantidadMusico2(Musico *pMusico, int sizeM)
{
int contadorMusico1=0;
int contadorMusico2=0;
int contadorMusico3=0;
int bufferMusico1;
int bufferMusico2;
int bufferMusico3;
int maximo=0;
int maximoFinal=0;
int i,j,k;
int temp;

for(k=0;k<sizeM;k++)
{
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==1)
        {
            contadorMusico1++;
            continue;
        }
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==2)
        {
            contadorMusico2++;
            continue;
        }
        if(pMusico[k].isEmpty==0 && pMusico[k].suOrquesta==3)
        {
            contadorMusico3++;
            continue;
        }
    else
        continue;
}

 bufferMusico1 = contadorMusico1;
 bufferMusico2 = contadorMusico2;
 bufferMusico3 = contadorMusico3;

int array[3] = {bufferMusico1,bufferMusico2,bufferMusico3};
    for(i = 0; i < 3-1; i++){
        for(j = i+1; j < 3; j++){
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
  if(bufferMusico1>maximo)
{
   maximo=bufferMusico1;
   maximoFinal=1;

}
 if(bufferMusico2>maximo)
{
   maximo=bufferMusico2;
    maximoFinal=2;
}
if(bufferMusico3>maximo)
{
   maximo=bufferMusico3;
   maximoFinal=3;
}
  switch(maximoFinal)
  {
    case 1:
        if(maximoFinal==1){
        printf("\nLa orquesta con mas musicos es la de tipo: 1)Sinfonica\n");
        }
        break;

    case 2:
        if(maximoFinal==2){
        printf("\nLa orquesta con mas musicos es la de tipo: 2)Filarmonica\n");


        }
        break;

    case 3:
        if(maximoFinal==3){
        printf("\nLa orquesta con mas musicos es la de tipo: 3)Camara\n");
        }
        break;

    default:
        break;
  }

for(j = 0; j<3; j++)
    {
        printf("Esta orquesta esta compuesta por %d Musicos\n",array[j]);
        break;
    }
}



int musico_listarNuevo(Musico *pMusico,Instrumento *pInstrumento, int CANT_MUSICO)
{
    int retorno=-1;
    int i;
    if(pMusico!=NULL && CANT_MUSICO>=0)
    {
        for(i=0;i<CANT_MUSICO;i++)
        {
            if(pMusico[i].isEmpty==1)
                continue;
            else
            if(pMusico[i].edad>30)
            {
                printf("\n El ID del Musico es: %d\n Su tipo de instrumento es: %d\n El nombre de su instrumento es: %s \n El nombre del Musico es: %s\n El apellido del Musico es: %s\n Su orquesta es: %d \n",
                       pMusico[i].idMusico,pMusico[i].suInstrumento,pInstrumento[i].nombreInstrumento,pMusico[i].nombre,pMusico[i].apellido,pMusico[i].suOrquesta);
                       }
        }
        retorno=0;
    }
    return retorno;
}





int orquesta_listarLugar(Orquesta *pOrquesta, int CANT_ORQUESTA)
{
    int retorno=-1;
    int i;
    char lugarBuscado[10];
    printf("\nIngrese el lugar de la Orquesta a buscar\n");
    fgets(lugarBuscado,10,stdin);
    lugarBuscado[strlen(lugarBuscado)-1]='\0';


    if(pOrquesta!=NULL && CANT_ORQUESTA>=0)
    {
        for(i=0;i<CANT_ORQUESTA;i++)
        {


            if(strcmp(lugarBuscado,pOrquesta[i].lugar)==0)
            {

                printf("\n ID: %d\n tipoOrquesta: %d\n nombre: %s\n lugar: %s\n",
                       pOrquesta[i].idOrquesta,pOrquesta[i].tipoOrquesta,pOrquesta[i].nombre,pOrquesta[i].lugar);
            }
            else
                continue;
        }
        retorno=0;
    }
    return retorno;
}






int musico_listarPorIdOrquesta(Musico *pMusico,Orquesta *pOrquesta,Instrumento *pInstrumento, int CANT_MUSICO)
{
    int retorno=-1;
    int i;
    char idBuscar[5];
    int idNumerico;
    printf("\nIngrese el ID de la orquesta\n");
    fgets(idBuscar,10,stdin);
    idBuscar[strlen(idBuscar)-1]='\0';
    idNumerico= atoi(idBuscar);

    if(pMusico!=NULL && CANT_MUSICO>=0)
    {

        for(i=0;i<CANT_MUSICO;i++)
        {
            if(pMusico[i].isEmpty==1)
                continue;
            if(idNumerico==pMusico[i].suOrquesta)
            {
                printf("\n ID: %d\n Su instrumento: %s\n Su tipo de Instrumento: %d \n nombre: %s\n apellido: %s\n Edad: %d ",pMusico[i].idMusico,pInstrumento[i].nombreInstrumento,pMusico[i].suInstrumento,pMusico[i].nombre,pMusico[i].apellido,pMusico[i].edad);
            }
            else
                continue;
        }
        retorno=0;
    }
    return retorno;
}



int musico_listarPorInstrumento(Musico *pMusico, int CANT_MUSICO)
{
    int retorno=-1;
    int i;
    if(pMusico!=NULL && CANT_MUSICO>=0)
    {
        for(i=0;i<CANT_MUSICO;i++)
        {
            if(pMusico[i].isEmpty==1)
                continue;
            if(pMusico[i].suInstrumento==1)
            {

                printf("\n ID: %d\n suInstrumento: %d\n nombre: %s\n apellido: %s\n ",
                       pMusico[i].idMusico,pMusico[i].suInstrumento,pMusico[i].nombre,pMusico[i].apellido);
            }
            else

               continue;
        }
        retorno=0;
    }
    return retorno;
}

/*
int orquesta_listarCompleto(Orquesta *pOrquesta,Instrumento *pInstrumento, int CANT_ORQUESTA)
{
    int retorno=-1;
    int i,j;
    int contadorCuerdas=0;
    int contadorViento=0;
    int contadorPercusion=0;

    if(pOrquesta!=NULL && CANT_ORQUESTA>=0)
    {
        for(i=0;i<CANT_ORQUESTA;i++)
        {
            if(pOrquesta[i].isEmpty==1)
                continue;
            if(
            printf("\n ID: %d\n tipoOrquesta: %d\n nombre: %s\n lugar: %s",
                    pOrquesta[i].idOrquesta,pOrquesta[i].tipoOrquesta,pOrquesta[i].nombre,pOrquesta[i].lugar);
              }
        }
        retorno=0;
    }
    return retorno;
}
*/


/** \brief Ordena numeros de Mayor a menor (En este caso los Musicos).
 *
 * \param  Musico pMusico Puntero a la estructura Musico.
 * \param  TAM Tamaño del array Musico.
 * \return
 *
 */




void ordenar_numerosMayorAmenorMusico(Musico *pMusico, int TAM)
{

int temp;
    int i,j;

    for(i = 0; i < TAM-1; i++){
        for(j = i+1; j < TAM; j++){
            if(pMusico[i].suOrquesta < pMusico[j].suOrquesta)
            {
                temp = pMusico[i].suOrquesta;
                pMusico[i].suOrquesta = pMusico[j].suOrquesta;
                pMusico[j].suOrquesta = temp;
            }
        }
    }


}


/** \brief Lista la orquesta que cumpla con los requisitos determinados de instrumentos.
 *
 * \param Orquesta pOrquesta Puntero a la estructura Orquesta
 * \param sizeO Tamaño del array Orquesta
 * \param Musico pMusico Puntero a la estructura Musico
 * \param sizeM Tamaño del array Musico
 * \param Instrumento pInstrumento Puntero a la estructura Instrumento
 * \param sizeI Tamaño del array instrumento
 * \return
 *
 */


int informe_listarOrquestaCompleta(Orquesta* pOrquesta,int sizeO,
                                    Musico* pMusico,int sizeM,
                                    Instrumento* pInstrumento,int sizeI)


{

int i,j;

int cantCuerdas;
int cantViento;
int cantPercusion;
int retorno=-1;
if (pOrquesta!=NULL && pMusico!=NULL && sizeM>0 && sizeO>0 && sizeI>0 && pInstrumento!=NULL)
    {
        printf("\n");
        for (i=0;i<sizeO;i++)
        {
            if(pOrquesta[i].isEmpty==0)
            {
                cantCuerdas=0;
                cantViento=0;
                cantPercusion=0;
                for(j=0;j<sizeM;j++)
                {
                    if ( pOrquesta[i].idOrquesta==pMusico[j].suOrquesta)
                    {
                        switch(pMusico[j].suInstrumento)
                        {
                            case 1:
                                cantCuerdas++;
                                continue;
                            case 2:
                                cantViento++;
                                continue;
                            case 3:
                                cantViento++;
                                continue;
                            case 4:
                                cantPercusion++;
                                continue;
                        }
                    }

                }
                if (cantCuerdas>=5 && cantViento>=3 && cantPercusion>=2)
                {
                    printf("\n ID de la orquesta completa: %d\n El nombre de la Orquesta es : %s \n El lugar es : %s \n El tipo de Orquesta es : %d \n",pOrquesta[i].idOrquesta,
                                                                                                                                                        pOrquesta[i].nombre,
                                                                                                                                                        pOrquesta[i].lugar,
                                                                                                                                                        pOrquesta[i].tipoOrquesta);

                }
            }
        }
        retorno =0;
    }
    return retorno;
}


/** \brief Lista la orquesta con la mayor cantidad de musicos.
 *
 * \param Orquesta pOrquesta Puntero a la estructura Orquesta
 * \param sizeO Tamaño del array Orquesta
 * \param Musico pMusico Puntero a la estructura Musico
 * \param sizeM Tamaño del array Musico
 * \return
 *
 */


int informe_listarOrquestaPorCantidadMusicos(Orquesta* pOrquesta,int sizeO,Musico* pMusico,int sizeM)
{
    int i;
    int j;
    int auxiliarCantMusicos=0;
    for(j=0;j<sizeO;j++)
    {
        if(pMusico != NULL && sizeM > 0)
        {
            for(i=0;i<sizeM;i++)
            {
                if(pMusico[i].suOrquesta == pOrquesta[j].idOrquesta && pMusico[i].isEmpty==0)
                {

                    auxiliarCantMusicos++;
                }
            }
        }
         pOrquesta[j].cantMusicos = auxiliarCantMusicos;
         if(pOrquesta[j].cantMusicos > 5)
    {
        printf("\n ID Orquesta con mas Musicos: %d\n Cantidad de Musicos : %d\n Nombre: %s\n Lugar: %s\n Tipo de Orquesta : %d \n"
                ,pOrquesta[j].idOrquesta,pOrquesta[j].cantMusicos,pOrquesta[j].nombre,
                pOrquesta[j].lugar,pOrquesta[j].tipoOrquesta);

        printf("--------\n");
        break;
    }
    }


    return 0;
}
