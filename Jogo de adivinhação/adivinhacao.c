#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	char playagain = 's';
	do{
		system("cls");
		printf("\n\n");
		printf("                             |--__                                          \n");
		printf("                             |                                              \n");
		printf("                             X                                              \n");
		printf("                    |-___   / \\       |--__                                \n");
		printf("                    |      =====      |                                     \n");
		printf("                    X      | .:|      X            Bem vindo ao             \n");
		printf("                   / \\     | O |     / \\        Jogo de adivinhação!      \n");
		printf("                  =====   |:  . |   =====                                   \n");
		printf("                  |.: |__| .   : |__| :.|                                   \n");
		printf("                  |  :|. :  ...   : |.  |                                   \n");
		printf("          __   __W| .    .  ||| .      :|W__  --                            \n");
		printf("        -- __  W  WWWW______\"\"\"______WWWW   W -----  --                  \n");
		printf("    -  -     ___  ---    ____     ____----       --__  -                    \n");
		printf("        --__    --    --__     -___        __-   _                          \n");
		printf("\n\n");
		int segundos = time(0);
		srand(segundos);
		int numerogrande = rand(), tentativas = 0, chute;
		int numerosecreto = (numerogrande % 100);
		double pontos = 1000;
		int numerodetentativas;
		int acertou;
		int nivel;
		printf("Qual o nível de dificuldade?\n");
		printf("[1] Fácil   | 15 tentativas\n[2] Médio   | 10 tentativas\n[3] Difícil | 6 tentativas\n\n");
		printf("Escolha: ");
		scanf(" %d", &nivel);
		
		while (nivel < 1 || nivel > 3){
			printf("O nível digitado está fora do escopo informado.\n");
			printf("Qual o nível de dificuldade?\n");
			printf("[1] Fácil   | 15 tentativas\n[2] Médio   | 10 tentativas\n[3] Difícil | 6 tentativas\n\n");
			printf("Escolha: ");
			scanf(" %d", &nivel);
		}
		
		switch(nivel){
			case 1:
				numerodetentativas = 15;
				break;
			case 2:
				numerodetentativas = 10;
				break;
			default:
				numerodetentativas = 6;
		}
		for(int i = 1; i <= numerodetentativas; i++) {
			
			tentativas++;
			
			printf("Tentativa %d.\n", tentativas);
			printf("Qual é o seu chute? ");
			
			scanf("%d", &chute);
			
			if(chute < 0){
				printf("Você não pode chutar números negativos!\n");
				continue;
			}
			
			acertou = chute == numerosecreto;
			int maior = chute > numerosecreto;
			
			if(acertou){
				
				break;
			}	
			
			else if(maior){
				printf("O número secreto é menor que %d.\n", chute);
			}
			else {
				printf("O número secreto é maior que %d.\n", chute);
				}
			
			double pontosperdidos = abs(chute - numerosecreto) / (double)2;
			
			pontos = pontos - pontosperdidos; 
	}
		
		printf("Fim de jogo!\n");
		
		if(acertou){
			printf("\n\n");
			printf("                           __ooooooooo__ 				\n");
			printf("	              oOOOOOOOOOOOOOOOOOOOOOo 				\n");
			printf("	          oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo 			\n");
			printf("	       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo 		\n");
			printf("	     oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo 		\n");
			printf("	   oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo 	\n");
			printf("	  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo 	\n");
			printf("	 oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo 	\n");
			printf("	 oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo 	\n");
			printf("	oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo \n");
			printf("	oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo \n");
			printf("	oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo \n");
			printf("	 *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO* 	\n");
			printf("	 *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO* 	\n");
			printf("	  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO* 	\n");
			printf("	   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO* 	\n");
			printf("	     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO* 		\n");
			printf("	       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*   		\n");   
			printf("	          *OOOOOOOOo           oOOOOOOOO*      		\n");
			printf("	              *OOOOOOOOOOOOOOOOOOOOO*          		\n");
			printf("	                   \"\"ooooooooo\"\" 				\n");
			printf("\n\n");
			printf("Você acertou em %d tentativa(s).\n", tentativas);
			printf("Você fez %.2f pontos\n", pontos);
			printf("Obrigado por jogar!\n");
		}
		else{
			printf("\n\n");
			printf("			          oooo$$$$$$$$$$$$oooo \n");
			printf("	                      oo$$$$$$$$$$$$$$$$$$$$$$$$o \n");
			printf("	                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$ \n");
			printf("	   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$ \n");
			printf("	oo $ $ \"$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$ \n");
			printf("	\"$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$ \n");
			printf("	  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$ \n");
			printf("	  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  \"\"\"$$$ \n");
			printf("	   \"$$$\"\"\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$ \n");
			printf("	    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$o \n");
			printf("	   o$$\"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o \n");
			printf("	   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\" \"$$$$$$ooooo$$$$o \n");
			printf("	  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$ \n");
			printf("	  $$$$$$$$\"$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$\"\"\"\"\"\"\"\" \n");
			printf("	 \"\"\"\"       $$$$    \"$$$$$$$$$$$$$$$$$$$$$$$$$$$$\"      o$$$ \n");
			printf("	            \"$$$o     \"\"\"$$$$$$$$$$$$$$$$$$\"$$\"         $$$ \n");
			printf("	              $$$o          \"$$\"\"$$$$$$\"\"\"\"           o$$$ \n");
			printf("	               $$$$o                 oo             o$$$\" \n");
			printf("	                \"$$$$o      o$$$$$$o$$$$o        o$$$$ \n");
			printf("	                  \"$$$$$oo     \"\"$$$$o$$$$$o   o$$$$\"\"   \n");
			printf("	                     \"\"$$$$$oooo  \"$$$o$$$$$$$$$\"\"\" \n");
			printf("	                        \"\"$$$$$$$oo $$$$$$$$$$        \n");
			printf("	                                \"\"\"\"$$$$$$$$$$$        \n");
			printf("	                                    $$$$$$$$$$$$       \n");
			printf("	                                     $$$$$$$$$$\"      \n");
			printf("	                                      \"$$$\"\"\"\" \n");
			printf("\n\n");
			printf("Suas tentativas acabaram, o número secreto era: %d.\n", numerosecreto);
		}
		printf("Jogue de novo!\n");
		printf("Gostaria de jogar novamente? (S ou N)");
		scanf(" %c", &playagain);
		playagain = toupper(playagain);
	} while(playagain != 'N');
	system("pause");
	return 0;
}

