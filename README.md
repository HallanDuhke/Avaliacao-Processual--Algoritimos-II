# Avaliacao Processual - Algoritimos II
 Trabalho realizado durante o curso de Engenharia da Computação, para a disciplina de Algoritimos II.

Enunciado: 

Considere-se um analista de automação de alguma grande empresa. Foi pedido
para que seja construído um projeto que verifique se o nível de um determinado
tanque de óleo está dentro das conformidades de operação. A altura do tanque
é 100 metros.
Você deve tratar os possíveis casos:
1. Caso o nível de óleo esteja entre 10 e 90 metros, deve-se printar
“SISTEMA OK”, e voltar a ler os valores de nível;
2. Caso o nível de óleo do tanque seja positivo e abaixo de 10 metros, devese acionar um alarme e printar na tela do operador “PROBLEMA NO
SISTEMA DE CONTROLE. AUMENTE O NÍVEL DE ÓLEO
MANUALMENTE IMEDIATAMENTE OU SE ESGOTARÁ O ÓLEO!”.
Após isso, o programa principal deve ser encerrado, retornando o código
de erro 1;
3. Caso o nível de óleo do tanque esteja acima de 90 metros, deve-se
acionar um alarme e printar na tela do operador “PROBLEMA NO
SISTEMA DE CONTROLE. DIMINUA O NÍVEL DE ÓLEO
MANUALMENTE IMEDIATAMENTE OU O TANQUE
TRANSBORDARÁ!”. Após isso, o programa principal deve ser encerrado,
retornando o código de erro 2;
4. Caso o nível de óleo seja negativo, deve-se acionar um alarme e printar
na tela do operador “CUIDADO! SENSOR DESCALIBRADO!”. Após isso,
o programa principal deve ser encerrado, retornando o código de erro 3;
As medidas de nível serão simuladas. Dessa forma, o usuário do programa
deverá digitar um valor de nível e toda a lógica deverá ocorrer, conforme
acontece no código “nível.c” desenvolvido em aula no dia 10/03/23.
IMPORTANTE: Existem duas funções principais do código. Uma é a leitura do
nível (simulado) e outra é a checagem das condições de nível. Ambas as funções
devem ser implementadas em outros arquivos de nome “le_nivel.c” e
“checa_nivel.c” fora da função principal (“main.c”). Dessa forma, dentro da
função principal só haverá as chamadas das funções “le_nivel” e “checa_nivel”,
e o retorno do erro (1 ou 2). 
