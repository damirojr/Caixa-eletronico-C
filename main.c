//Dannjr

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
	
	char retorno;
	
	 	
		
	
	int ced1=0, ced50=0, ced20=0, ced10=0, ced5=0, ced2=0;
	int res1, res50, res20, res10, res5, res2;
	int saque=0, saque1=0;
	
	do
	{
	
		printf("\t+================================+\n");	
		printf("\t|   $$$ CAIXA - ELETRONICO $$$   |\n ");
		printf("\t|                                |\n ");
		printf("\t|           BEM VINDO            |\n ");
		printf("\t+================================+\n");
		printf("\t Valor do saque minimo R$ 10,00 \n\t Valor de saque maximo R$ 850,00\n ");
		printf("\t Notas de 100, 50, 20, 10, 5 e 2\n ");
		
		printf("\t Digite o valor do saque: ");
		scanf("%d", &saque);
		
		saque1 = saque;
				
		while (saque <10 || saque >850)
		{
		
			printf("\tValor incorreto!\n \tInforme o valor do saque:");
			scanf("%d", &saque);
		}
	 		if (saque % 10 == 1)																		
			{	saque = saque - 11;
				ced5 = ced5 + 1;
				ced2 =  ced2 + 3;
			}
			else if (saque % 10 == 3)
				{	saque = saque - 13;
					ced5 = ced5 + 1;
					ced2 = ced2 + 4;										
				}
				else if (saque % 10 == 6)
					{	saque = saque - 6;
						ced2 = ced2 + 3;
					}
					else if (saque % 10 == 8)
					{	saque = saque - 8;
						ced2 = ced2 + 4;
					}
					
						while (saque >= 100)
						{
							ced1++;
							saque = saque - 100;
						}
						while (saque >= 50)
						{
							ced50++;
							saque = saque - 50;	
						}
						while (saque >= 20)
						{
							ced20++;
							saque = saque - 20;
						}
						while (saque >= 10)
						{
							ced10++;
							saque = saque - 10;
						}
						while (saque >= 5)
						{
							ced5++;
							saque = saque - 5;
						}
						while ( saque >= 2)
						{
							ced2++;
							saque = saque - 2;
						}
					
					
				
				printf("\t VALOR SAQUE $$$ : %d \n\t Cedulas de 100: %d \n\t Cedulas de 50: %d \n\t Cedulas de 20: %d \n\t Cedulas de 10: %d \n\t Cedulas de 5: %d \n\t Cedulas de 2: %d\n", saque1, ced1, ced50, ced20, ced10, ced5, ced2);			
				do
				{
						
				printf("\t Deseja fazer outro saque?\n\t (S) SIM \n\t (N) NAO\n ");
				scanf(" %c", &retorno);
				
				} while (retorno != 'S' && retorno != 's' && retorno != 'N' && retorno != 'n');
					
					
				switch (retorno)
				{ 	case 'n':
					case 'N': printf("\tMuito obrigado por utilizar o nosso prototipo de caixa eletronico\n"); break;
					case 'S':
					case 's': printf("\t$$$ PROXIMO SAQUE $$$\n\n"); break;	
					default : printf("\tOpcao incorreta\n");
				}
				getch();
				system("cls");							
	} while (retorno != 'n' && retorno != 'N');
		
		
		 																	 	
		 	
	return 0;	
	
	
	
}
