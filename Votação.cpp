#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de
códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;*/

int main() {
	setlocale(LC_ALL, "portuguese");
	int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, branco = 0, nulo = 0, voto;
	
	do {
		printf("___________________\n");
		printf("|VOTE!            |\n");
		printf("|                 |\n");
		printf("|Klarbous (1)     |\n");
		printf("|Rabo de Galo (2) | \n");
		printf("|Prizma (3)       |\n");
		printf("|Porcus (4)       |\n");
		printf("|NULO (5)         |\n");
		printf("|BRANCO (6)       |\n");
		printf("|ENCERRAR (0)     |\n");
		printf("------------------- \n\n");
		scanf("%d", &voto);
		
		system("cls");
		
		switch (voto){
			
			case 1:
				candidato1++;
				break;
				
				
			case 2:
				candidato2++;
				break;
				
				
			case 3:
				candidato3++;
				break;
				
				
			case 4:
				candidato4++;
				break;
				
			
			case 5:
				nulo++;
				break;
				
			
			case 6:
				branco++;
				break;
				
			case 0:
				break;
			
			default:
				nulo++;
				break;
				
		}		
		
	} while (voto != 0);
	printf(" Klarbous: %d \n Rabo de Galo: %d \n Prizma: %d \n Porcus: %d \n NULO: %d \n BRANCO: %d", candidato1, candidato2, candidato3, candidato4, nulo, branco);
}
