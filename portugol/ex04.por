programa
{ 
// calcular idade e avaliar possibilidade de CNH
	funcao inicio()
	{
		inteiro anoNascimento,idade,anoAtual

		escreva("Informe seu ano de nascimento: \n")
		leia(anoNascimento)
		escreva("Informe o ano atual: \n")
		leia(anoAtual)
		idade = anoAtual - anoNascimento
		se(idade >= 18)
		{
			escreva("Pode solicitar sua CNH")
		}
		senao
		{
			escreva("Infelizmente ainda não é possível solicitar sua CNH.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 361; 
 */