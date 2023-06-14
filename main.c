/* PROFESSOR. Matheus Rangel Pimentel

   ALUNOS: Hallan Junio do Nascimento Duhke   RA: 2213408
           Ryckelme de Oliveira Barboza       RA: 2213563
           Mateus dos Santos Porto de Almeida RA: 2213521
 */

#include<stdio.h>
#include "checa_nivel.h"
#include "le_nivel.h"


/*   OBEJETIVO:

Considere-se um analista de automação de alguma grande empresa. Foi pedido
para que seja construído um projeto que verifique se o nível de um determinado
tanque de óleo está dentro das conformidades de operação. A altura do tanque
é 100 metros.*/

/* Começamos o código declarando nossa variável principal (int nivel) ao qual se refere
ao nivel de oleo no tanque*/

int main(){
	int nivel;
	do{
		nivel = le_nivel();              /*Aqui declaramos que nivel é igual a le_nivel que será responsável
		                                por receber a informação do nivel de óleo do tanque.*/
		
		checa_nivel(nivel);             /*checa_ nivel é responsável por calssificar o nivel de óleo do tanque atráves
		                                de tomadas de decições verdadeiro ou falso*/
		
	}while(nivel >= 0 && nivel <= 100);
	printf("Nivel invalido. Encerrando execucao do sistema.");
}
	
