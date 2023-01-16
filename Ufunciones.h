//
// Created by MARIA HILDA BERMEJO RIOS on 1/16/23.
//

#ifndef INC_01_EJEMPLOCILINDRO_UFUNCIONES_H
#define INC_01_EJEMPLOCILINDRO_UFUNCIONES_H



#include <iostream>
using namespace std;
const double PI=3.1415;

typedef double tnumero;


tnumero LeeDato(string mensaje);
tnumero areaDeLaBase(tnumero r);
tnumero areaTotal(tnumero r, tnumero h);
tnumero volumen(tnumero r, tnumero h);


#endif //INC_01_EJEMPLOCILINDRO_UFUNCIONES_H
