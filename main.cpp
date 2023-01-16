/*----------------------------------------------
 * Dato de Entrada: radio, altura (tnumero)
 * Dato de Salida: areaTotal, volumen (tnumero)
 -----------------------------------------------*/

#include "Ufunciones.h"


int main()
{tnumero radio, altura;

  radio=LeeDato("Radio: ");
  altura=LeeDato("Altura: ");
  cout << "Area total: " << areaTotal(radio, altura);
  cout << "\n";
  cout << "Volumen   : " << volumen(radio,altura);
  return 0;
}

