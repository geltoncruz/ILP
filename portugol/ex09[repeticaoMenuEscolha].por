programa
{

//Crie um menu que possibilite ao usuário interagir as seguintes opções
/*
1 - cartão de crédito
2 - Cartão de débito
3 - Pagamento via boleto
4 - Pagamento com bitcoin
5 - Falar com atendente
0 - Sair da sessão de pagamento e sair do programa.

*/
	funcao inicio()
	{
	 	inteiro opt = 0
		faca
	{
		escreva("1 - cartão de crédito\n")
		escreva("2 - Cartão de débito\n")
		escreva("3 - Pagamento via boleto\n")
		escreva("4 - Pagamento com bitcoin\n")
		escreva("5 - Falar com atendente\n")
		escreva("0 - Sair da sessão de pagamento e sair do programa.\n")
		
		leia(opt)
		escolha(opt)
		{
			caso 1 :
				escreva("Pago cartão de crédito\n")
				
				pare
			caso 2 :
				escreva("Pago cartão de débito \n")
				pare				
			caso 3 :
				escreva("Pago via boleto \n")
				pare			
			caso 4 :
				escreva("Pago btcoin \n")
				pare
			caso 5 :
				escreva("Falar com atentende \n")
				pare				
			caso 0 :
				escreva("sessão encerrado \n")
				opt = 0
				pare	
		 caso contrario :
		 	escreva("Opção inválida")
		}
	}enquanto(opt != 0)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 88; 
 */