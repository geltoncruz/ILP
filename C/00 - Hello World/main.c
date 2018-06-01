#include <stdio.h> // Biblioteca que permite usar fun��es padr�es

/* 
 * Fun��o Principal do programa. 
 * Ser� essa fun��o que o computador executar� por padr�o.
 */
int main () { 
/* 
 * Fun��es podem ter tipos. 
 * Ao declarar um tipo para uma fun��o se compromete a retornar um valor daquele tipo. 
 * Logo, a fun��o main(), por ser do tipo inteiro, se compromete a retornar um valor inteiro.
 */	
	
	/*
	 * printf � uma fun��o da biblioteca stdio.h.
	 * Fun��es s�o, basicamente, um conjunto de c�digos que fazem uma determinada tarefa.
	 * Neste caso, essa fun��o toma uma string como argumento e escreve seu valor na tela do console.
	 * Argumentos s�o valores que fun��es podem ou n�o precisar para resolver sua tarefa. Alguns argumentos s�o essenciais, outros opcionais e, em alguns casos, fun��es n�o precisam de argumentos.
	 * Argumentos pode ser valores est�ticos, como "Hello World!" ou vari�veis. 	
	 */
	printf("Hello World!"); 
	
	// Quando a fun��o principal retorna zero ela informa que acabou.
	return 0; 
}
