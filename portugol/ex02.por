programa
{
// Converter de R$ para $ solicitando cotaçõo de moeda
	funcao inicio()
	{
		real reais,dolares,cotacao

		escreva("Informe a cotação do dia: \n")
		leia(cotacao)
		escreva("Informe o quanto possui em reais: \n")
		leia(reais)
		dolares = reais / cotacao
		escreva("Voce possui $",dolares)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 261; 
 */