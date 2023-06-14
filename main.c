/* PROFESSOR. Matheus Rangel Pimentel

   ALUNOS: Hallan Junio do Nascimento Duhke   RA: 2213408
           Ryckelme de Oliveira Barboza       RA: 2213563
           Mateus dos Santos Porto de Almeida RA: 2213521
 */

#include<stdio.h>
#include "checa_nivel.h"
#include "le_nivel.h"


/*   OBEJETIVO:

Considere-se um analista de automa��o de alguma grande empresa. Foi pedido
para que seja constru�do um projeto que verifique se o n�vel de um determinado
tanque de �leo est� dentro das conformidades de opera��o. A altura do tanque
� 100 metros.*/

/* Come�amos o c�digo declarando nossa vari�vel principal (int nivel) ao qual se refere
ao nivel de oleo no tanque*/

int main(){
	int nivel;
	do{
		nivel = le_nivel();              /*Aqui declaramos que nivel � igual a le_nivel que ser� respons�vel
		                                por receber a informa��o do nivel de �leo do tanque.*/
		
		checa_nivel(nivel);             /*checa_ nivel � respons�vel por calssificar o nivel de �leo do tanque atr�ves
		                                de tomadas de deci��es verdadeiro ou falso*/
		
	}while(nivel >= 0 && nivel <= 100);
	printf("Nivel invalido. Encerrando execucao do sistema.");
}
	
