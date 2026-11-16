#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
    int dificuldade, numeroSorteado, palpite, i, opcao, menuPrincipal, menuRegras;

	srand(time(NULL));

	do {
		
		system("cls");
		printf("\n=== JOGO DE ADIVINHACAO ===\n");
		printf("\n1 - Jogar\n");
		printf("2 - Regras\n");
		printf("3 - Sair\n");	
		printf("\nFaca sua escolha: ");
		scanf("%d", &menuPrincipal);	
		
		while (menuPrincipal < 1 || menuPrincipal > 3){
			printf("\nOpcao invalida.\n");
			printf("Escolha novamente: ");
			scanf("%d", &menuPrincipal);
		}
		
		switch(menuPrincipal){
			
			case 1:
			 
				do {
					
					system("cls");
					printf("\n=== BEM VINDO AO JOGO! ===\n");
					printf("\nEscolha a dificuldade: \n");
					printf("\n1 - Facil (1 a 15)\n");
					printf("2 - Medio (1 a 50)\n");
					printf("3 - Dificil (1 a 100)\n");
					
					do {
					
						printf("\nFaca sua escolha: ");
						scanf("%d", &dificuldade);
						
						switch(dificuldade){
							
							case 1: numeroSorteado = rand() % 15 + 1;
								break; 
								
							case 2: numeroSorteado = rand() % 50 + 1;
								break;
								
							case 3: numeroSorteado = rand() % 100 + 1;
								break;
								
							default: printf("Opcao invalida!\n");
							
						}
						
					} while(dificuldade != 1 && dificuldade != 2 && dificuldade != 3);
					
					printf("\nVoce possui 10 tentativas.\n");
					
					for (i = 0; i < 10; i++){
					
					    printf("\nTentativa %d: ", i+1);
					    scanf("%d", &palpite);
					    
					    if (palpite > numeroSorteado){
					    	printf("Muito alto!\n");
						} 
						else if (palpite < numeroSorteado){
							printf("Muito baixo!\n");			
						}
						else {
							printf("Parabens!\n");
							printf("Voce acertou em %d tentativas!\n", i+1);
							break;
						}	
					}
					
					if (palpite != numeroSorteado){
						printf("\nInfelizmente voce perdeu!\n");
						printf("Numero sorteado: %d\n", numeroSorteado);
						printf("Tente outra vez!\n");
					}
					
					printf("\nGostaria de jogar novamente?\n");
					printf("\n1 - Sim\n");
					printf("2 - Nao, sair\n");
					printf("\nFaca sua escolha: ");
					scanf("%d", &opcao);
					
					while (opcao < 1 || opcao > 2){
						printf("Opcao invalida.\n");
						scanf("%d", &opcao);
					}
					
					if (opcao == 2){
    					menuPrincipal = 3;
					}
					
				} while (opcao == 1);
			break;
		
			case 2:
				do {
					system("cls");
					printf("\n=== REGRAS ===\n");
					printf("\nObjetivo:\n");
					printf("Adivinhar o numero sorteado pelo computador.\n");
					
					printf("\nDificuldades:\n");
					printf("Facil - numeros de 1 a 15\n");
					printf("Medio - numeros de 1 a 50\n");
					printf("Dificil - numeros de 1 a 100\n");
					
					printf("\nTentativas:\n");
					printf("O jogador possui 10 tentativas para acertar.\n");
					
					printf("\nObservacoes:\n");
					printf("- Digite apenas numeros inteiros.\n");
					printf("- Nao utilize letras.\n");
					printf("- Nao utilize numeros decimais.\n");
					
					printf("\nBoa sorte!\n");
					
					printf("\n1 - Voltar ao menu principal.\n");
					printf("Faca sua escolha: ");
					scanf("%d", &menuRegras);
				} while (menuRegras != 1);
			break;
			
			case 3:
				printf("\nObrigado por jogar!\n");
			break;
			
			default: printf("Opcao invalida!\n"); 
			
		}
			
	} while (menuPrincipal != 3);

    return 0;
    
}
