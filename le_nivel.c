#include <stdio.h>
#include "le_nivel.h"

int le_nivel(){
	
	int nivel;                              /* Neste c�digo obtemos o valor referente
	                                        ao nivel do tanque e o valor � retornado*/
	
	printf("Informe o nivel do oleo: ");
	
	scanf("%d",&nivel);
	
	return nivel;
}
