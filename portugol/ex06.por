programa
{
	
	funcao inicio()
	{
		
		real base,base2,maior,menor,altura,a
		leia(base,base2,altura)
//		se(nao(base2 > 0))
//		se(base > 0 ou base2 > 0)
		se(base > 0 e base2 > 0)
		{
			se(base > base2)
			{
				maior = base
				menor = base2
				a = ((maior+menor) * altura) / 2
			}senao
			{
			  	maior = base2
			  	menor = base
			}
		}senao
		{
			escreva("voce possui base menor que um")
		}

		escreva(maior," ",menor,"\n")
		escreva(a)
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 127; 
 */