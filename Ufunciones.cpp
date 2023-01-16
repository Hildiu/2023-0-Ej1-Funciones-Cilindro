//
// Created by MARIA HILDA BERMEJO RIOS on 1/16/23.
//

#include "Ufunciones.h"


tnumero LeeDato(string mensaje)
{//------------------------------------------
  tnumero dato;
  do
  { cout << mensaje;
    cin >> dato;
  }while(dato<=0);
  return dato;
}

tnumero areaDeLaBase(tnumero r)
{//-----------------------------------------
  return(PI*r*r);
}

tnumero areaTotal(tnumero r, tnumero h)
{//------------------------------------------------
  return(2*PI*r*h + 2*areaDeLaBase(r));
}

tnumero volumen(tnumero r, tnumero h)
{//-----------------------------------------------
  return(areaDeLaBase(r) * h);
}