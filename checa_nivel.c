#include <stdio.h>
#include "checa_nivel.h"

void checa_nivel(int nivel){
	if (nivel >= 10 && nivel <= 90) /* Aqui temos as condições referentes aos valores que classificarão o nível de
	                                oléo no tanque junnto ao seu respectivo codigo de erro */
    {
        printf("SISTEMA OK\n");  /* entre 10 e 90m está tudo ok*/
    }
    else if (nivel > 90 )
    {
        printf("PROBLEMA NO SISTEMA DE CONTROLE. DIMINUA O NIVEL DE OLEO MANUALMENTE IMEDIATAMENTE OU O TANQUE TRANSBORDARA!\n");
        
      printf ("\nERRO 01\n");  /* acima de 90m o tanque transborda*/
	  exit(0);
    }
    else if (nivel >= 0 && nivel < 10)
    {
        printf("PROBLEMA NO SISTEMA DE CONTROLE. AUMENTE O NIVEL DE OLEO MANUALMENTE IMEDIATAMENTE OU SE ESGOTARA O OLEO!\n");
      
      printf ("\nERRO 02\n");   /* Nivel muito baixo de oleo*/
	  exit(0);
    }
    else
    {
        printf("CUIDADO! SENSOR DESCALIBRADO!\n"); /* Algum valor negativo que foi informado*/
        
      printf ("\nERRO 03\n"); 
	  exit(0);
  
    }

   
}
