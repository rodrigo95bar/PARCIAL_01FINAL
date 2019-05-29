#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED

#include "orquesta.h"
#include "musico.h"
#include "instrumento.h"
void saludoMenu();

void ordenar_cadenas(Musico *pMusico, int TAM);
void ordenar_numerosMayorAmenor(Musico *pMusico, int TAM);
void ordenar_numerosMenorAmayor(Musico *pMusico, int TAM);
void promedioTotalMusicoOrquesta(Musico *pMusico,Orquesta *pOrquesta,int sizeM,int sizeO);
void promedioInstrumentoDeTipo(Instrumento *pInstrumento,int size);
void informe_cantidadTotalPromedioEdadesDeMusico(Musico* pMusico,int len);
void instrumentoMasUsado(Instrumento *pInstrumento, int size);
void instrumentoMenosUsado(Instrumento *pInstrumento, int size);
void crearMusicos(Musico *pMusico);
void crearOrquesta(Orquesta *pOrquesta);
void crearInstrumentos(Instrumento *pInstrumento);

void OrquestaConMayorMusicoYcantidadMusico(Musico *pMusico, int sizeM);
void OrquestaConMayorMusicoYcantidadMusico2(Musico *pMusico, int sizeM);
void OrquestaConMenorMusicoYcantidadMusico(Musico *pMusico, int sizeM);


int informe_sortNombreMusico(Musico *pMusico,int len,int ordenamiento);
int informe_sortApellidoMusico(Musico *pMusico,int len,int ordenamiento);

void ordenar_numerosMayorAmenorMusico(Musico *pMusico, int TAM);
int informe_sortOrquestaNombreYtipo(Orquesta* pOrquesta,int len,int ordenamiento);

int musico_listarPorIdOrquesta(Musico *pMusico,Orquesta *pOrquesta,Instrumento *pInstrumento, int CANT_MUSICO);
int musico_listarNuevo(Musico *pMusico,Instrumento* pInstrumento, int CANT_MUSICO);
int musico_listarPorInstrumento(Musico *pMusico, int CANT_MUSICO);
int orquesta_listarLugar(Orquesta *pOrquesta, int CANT_ORQUESTA);
int orquesta_listarCompleto(Orquesta *pOrquesta, int CANT_ORQUESTA);
int orquesta_listarPorCantidad(Orquesta *pOrquesta,Musico *pMusico, int CANT_ORQUESTA,int CANT_MUSICO);
void menuInformes();
int informe_listarOrquestaPorCantidadMusicos(Orquesta* pOrquesta,int sizeO,Musico* pMusico,int sizeM);

int informe_listarOrquestaCompleta(Orquesta* pOrquesta,int sizeO,
                                    Musico* pMusico,int sizeM,
                                    Instrumento* pInstrumento,int sizeI);





//void nombreMasLargo(int size);
#endif // INFORMES_H_INCLUDED
