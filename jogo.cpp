#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include <conio.h>

//Função cor da Tela
void cor(void){
    system("color F0"); //Cor de Fundo e cor das Letras
	system("mode 100,30"); //Largura e Altura da Tela
}

void usuario(void){
	
	char usuario[20];
	
	printf("Usuario: ");
	fgets(usuario, 20, stdin);
	
}

void senha(void){
	
	char senha[20];
	
	printf("Senha: ");
	fgets(senha, 20, stdin);
	
}

//Função da Escolha do nome do Usuário
void nomeJogador(void){
	
	printf("\nO Sistema Amou voce, por sorte te daremos um Lindo Nome\n");
	printf("Gerando o nome .....\n");
	system("pause");
	char nome[30] = "Patolino o Grande Mago";
	printf("Seu Nome e: %s\n", nome);
	
}
//Função da Escolha do nome do Usuário
void nomeComputador(void){
	
	char nomePC[20];
	int op;
	
	printf("\nDeseja escolher um nome para seu Adversario? [0] Nao - [1] Sim: ");
	scanf("%d", &op);
	
	if(op == 1){
		printf("\nAinda lhe falta odio para Escolher o nome do Adversario\n");
		char nomePC[20] = "Patinho Pistola";
		printf("Nome do Adversairo: %s\n\n", nomePC);
	}else{
		char nomePC[20] = "Patinho Pistola";
	}
	
}


//Perfil do Jogador
void perfil(void){
	
	char usuario[20];
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Meu Perfil\n");
	printf("Usuario: %s\n", usuario);
	printf("Senha: **********\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
}

//Função da Batalha 
void batalha(void){
	
	int escolhaClasse, escolhaClassePC;
	char nome[30] = "Patolino o Grande Mago";
	char nomePC[20] = "Patinho Pistola";
	int escolha, escolhaPC;
	int encerrar = 1;
	int hpUsuario = 100;
	int hpComputador = 100;
	int mpUsuario = 100, mpComputador = 100;
	
	//Escolher a Classe do jogador
	printf("Escolha uma dentre as 5 Classe\n");
	printf("[1] - Guerreiro\n");
	printf("[2] - Ladrao\n");
	printf("[3] - Arqueiro\n");
	printf("[4] - Feiticeiro\n");
	printf("[5] - Padeiro\n");
	printf("Escolha seua Classe: ");
	scanf("%d", &escolhaClasse);
	
	//Computador Escolhe Automaticamente
	srand(time(NULL));
	escolhaClassePC = rand () % 5 + 1;
	
	//Escolha da Classe do Usuario
	switch(escolhaClasse){
		case 1:
			printf("\nClasse escolhida: Guerreiro\n");
			printf("O Cavaleiro\n\n");
			break;
		case 2:
			printf("\nClasse escolhida: Ladrao\n");
			printf("Pronto para saquear os Ricos?\n\n");
			break;
		case 3:
			printf("\nClasse escolhida: Arqueiro\n");	
			printf("Pronto para espetar uns espetos!\n\n");	
			break;
		case 4:
			printf("\nClasse escolhida: Feiticeiro\n");
			printf("Vamos Pegar na Vara do Poder\n\n");
			break;
		case 5:
			printf("\nClasse escolhida: Padeiro\n");	
			printf("Vamos Assar uns Cacetinhos\n\n");
			break;
		default:
			printf("\nOpcao Invalida\n");
			printf("Escolhendo Aleatoriamente sua Classe\n");	
			srand(time(NULL));
			escolhaClasse = rand() % 5 + 1;
			printf("ID da classe Gerada automaticamente: %d\n\n", escolhaClasse);			
	}
	
	//Escolha da Classe do Computador
	switch(escolhaClassePC){
		case 1:
			printf("Classe do Adversario escolhida: Guerreiro\n\n");
			break;
		case 2:
			printf("Classe do Adversario escolhida: Ladrao\n\n");
			break;
		case 3:
			printf("Classe do Adversario escolhida: Arqueiro\n\n");		
			break;
		case 4:
			printf("Classe do Adversario escolhida: Feiticeiro\n\n");
			break;
		case 5:
			printf("Classe do Adversario escolhida: Padeiro\n\n");	
			break;
		default:
			printf("Opcao Invalida\n");
	}
	
	system("pause");
	system("cls"); //Limpa a Tela
	
	//Batalha
	while(encerrar != 0){
		
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=\n");
			printf("	STATUS DO %s\n", nome);
			printf("HP: %d\n", hpUsuario);
			printf("MP: %d\n", mpUsuario);
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=\n");
			printf("	STATUS DO %s\n", nomePC);
			printf("HP: %d\n", hpComputador);
			printf("MP: %d\n", mpComputador);
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=\n");
			
			switch(escolhaClasse){
				case 1: 
				    //Classe Guerreiro
					printf("[1] - Investida Dupla\n");
					printf("[2] - Golpe Brutal\n");
					printf("[3] - Corte do Dragao\n");
					printf("Escolha Ataque: ");
					scanf("%d",&escolha);
					
					switch(escolha){
						case 1:
							printf("\n%s usou Investida Dupla\n", nome);
							printf("%s levou 5 de Dano\n", nomePC);
							hpComputador = hpComputador - 5;
							break;
						case 2:
							printf("\n%s usou Golpe Brutal\n", nome);
							printf("%s levou 6 de Dano\n", nomePC);
							hpComputador = hpComputador - 6;
							break;
						case 3:
							printf("\n%s usou Corte do Dragao\n", nome);
							printf("%s levou 13 de Dano\n", nomePC);
							hpComputador = hpComputador - 13;	
							break;
						default:
							printf("\nAtaque Perdido\n");			
					}	
				break;	
				case 2:
					//Classe Ladrão Usuario
					printf("[1] - Adagas Duplas\n");
					printf("[2] - Ivestida Sombria\n");
					printf("[3] - Adaga Cortante\n");
					printf("Escolha Ataque: ");
					scanf("%d",&escolha);
					
					switch(escolha){
						case 1:
							printf("\n%s usou Adagas Duplas\n", nome);
							printf("%s levou 5 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 5;
							break;
						case 2:
							printf("\n%s usou Investida Sombria\n", nome);
							printf("%s levou 7 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 7;
							break;
						case 3:
							printf("\n%s usou Adaga Cortante\n", nome);
							printf("%s levou 10 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 10;	
							break;
						default:
							printf("\nAtaque Perdido\n\n");			
					}
				break;	
				case 3:
					//Classe Arqueiro Usuario
					printf("[1] - Flechas Triplas\n");
					printf("[2] - Chuva de Flexas\n");
					printf("[3] - Flexa de Gelo e Fogo\n");
					printf("Escolha Ataque: ");
					scanf("%d",&escolha);
					
					switch(escolha){
						case 1:
							printf("\n%s usou Flechas Triplas\n", nome);
							printf("%s levou 5 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 5;
							break;
						case 2:
							printf("\n%s usou Chuva de Flexas\n", nome);
							printf("%s levou 8 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 8;
							break;
						case 3:
							printf("\n%s usou Flexa de Gelo e Fogo\n", nome);
							printf("%s levou 11 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 11;	
							break;
						default:
							printf("\nAtaque Perdido\n");			
					}
				break;	
				case 4:
					//Classe Feiticeiro Usuario
					printf("[1] - Bola de Fogo\n");
					printf("[2] - Cura\n");
					printf("[3] - Meteoro Cortante\n");
					printf("Escolha Ataque: ");
					scanf("%d",&escolha);
					
					switch(escolha){
						case 1:
							printf("\n%s usou Bola de Fogo\n", nome);
							printf("%s levou 6 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 6;
							break;
						case 2:
							printf("\n%s usou Cura\n", nome);
							printf("%s recuperou 5 de HP\n\n", nome);
							hpUsuario = hpUsuario + 5;
							mpUsuario = mpUsuario - 10;
							
							if(hpUsuario > 100){
								hpUsuario = 100;
							}
							
							if(mpUsuario == 0){
								printf("MP do %s chegou a 0\n\n", nome);
								hpUsuario = hpUsuario - 5;
							}
							break;
						case 3:
							printf("\n%s usou Meteoro Cortante\n", nome);
							printf("%s levou 12 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 12;	
							break;
						default:
							printf("\nAtaque Perdido\n\n");			
					}
				break;		
				case 5:
				//Classe Padeiro Usuario
					printf("[1] - Investida Cacetinho\n");
					printf("[2] - Cacetinho Bumerangue\n");
					printf("[3] - Cacetinho Sangrente\n");
					printf("Escolha Ataque: ");
					scanf("%d",&escolha);
					
					switch(escolha){
						case 1:
							printf("\n%s usou Investida Cacetinho\n", nome);
							printf("%s levou 7 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 7;
							break;
						case 2:
							printf("\n%s usou Cacetinho Bumerangue\n", nome);
							printf("%s levou 10 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 10;
							break;
						case 3:
							printf("\n%s usou Cacetinho Sangrento\n", nome);
							printf("%s levou 15 de Dano\n\n", nomePC);
							hpComputador = hpComputador - 15;	
							break;
						default:
							printf("\nAtaque Perdido\n\n");			
					}
				break;	
								
			}
			
			switch(escolhaClassePC){
				case 1:
					//Classe Guerreiro Computador
					srand(time(NULL));
					escolhaPC = rand() % 3 + 1;
					
					switch(escolhaPC){
						case 1:
							printf("\n%s usou Investida Dupla\n", nomePC);
							printf("%s levou 5 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 5;
							break;
						case 2:
							printf("\n%s usou Golpe Brutal\n", nomePC);
							printf("%s levou 6 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 6;
							break;
						case 3:
							printf("\n%s usou Corte do Dragao\n", nomePC);
							printf("%s levou 13 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 13;	
							break;
						default:
							printf("\nAtaque Perdido\n\n");	
					}
					
				break;	
				case 2:
					//Classe Ladrão Computador
					srand(time(NULL));
					escolhaPC = rand() % 3 + 1;
					
					switch(escolhaPC){
						case 1:
							printf("%s usou Adagas Duplas\n", nomePC);
							printf("%s levou 5 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 5;
							break;
						case 2:
							printf("%s usou Investida Sombria\n", nomePC);
							printf("%s levou 7 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 7;
							break;
						case 3:
							printf("%s usou Adaga Cortante\n", nomePC);
							printf("%s levou 10 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 10;	
							break;
						default:
							printf("Ataque Perdido\n");			
					}
					
				break;	
				case 3:
					
					//Clase Arqueiro Computador
					srand(time(NULL));
					escolhaPC = rand() % 3 + 1;
					
					switch(escolhaPC){
						case 1:
							printf("\n%s usou Flechas Triplas\n", nomePC);
							printf("%s levou 5 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 5;
							break;
						case 2:
							printf("\n%s usou Chuva de Flexas\n", nomePC);
							printf("%s levou 8 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 8;
							break;
						case 3:
							printf("\n%s usou Flexa de Gelo e Fogo\n", nomePC);
							printf("%s levou 11 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 11;	
							break;
						default:
							printf("\nAtaque Perdido\n\n");			
					}
						
				break;		
				case 4:
					
					//Clase Feiticeiro Computador
					srand(time(NULL));
					escolhaPC = rand() % 3 + 1;
						
					switch(escolhaPC){
						case 1:
							printf("\n%s usou Bola de Fogo\n", nomePC);
							printf("%s levou 6 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 6;
							break;
						case 2:
							printf("\n%s usou Cura\n", nomePC);
							printf("%s recuperou 5 de HP\n\n", nomePC);
							hpComputador = hpComputador + 5;
							mpComputador = mpComputador - 10;
							if(hpComputador > 100){
								hpComputador = 100;
							}
							if(mpComputador == 0){
								printf("MP do %s chegou a 0\n", nome);
								hpComputador = hpComputador - 5;
							}
							break;
						case 3:
							printf("\n%s usou Meteoro Cortante\n", nomePC);
							printf("%s levou 12 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 12;	
							break;
						default:
							printf("\nAtaque Perdido\n\n");		
						break;		
					}
				break;		
				case 5:
					//Classe Padeiro Computador
					srand(time(NULL));
					escolhaPC = rand() % 3 + 1;
					
					switch(escolhaPC){
						case 1:
							printf("\n%s usou Investida Cacetinho\n", nomePC);
							printf("%s levou 7 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 7;
							break;
						case 2:
							printf("\n%s usou Cacetinho Bumerangue\n", nomePC);
							printf("%s levou 10 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 10;
							break;
						case 3:
							printf("\n%s usou Cacetinho Sangrento\n", nomePC);
							printf("%s levou 15 de Dano\n\n", nome);
							hpUsuario = hpUsuario - 15;	
							break;
						default:
							printf("\nAtaque Perdido\n");			
					}	
				break;			
			}
		
		if(hpComputador <= 0 || hpUsuario <= 0){
				encerrar -= 1;
			}
			
		system("pause");
		system("cls"); //Limpa a Tela
			
		}
}

int main(){
	
	int continuar = 1;
	int hpUsuario;
	int hpComputador;
	
	//Função cor da Tela
	void cor(void);
	cor();
	
	printf("					Cadastro de Conta\n");
	
	void usuario(void);
	usuario();
	
	void senha(void);
	senha();
	
	printf("\nConta Criada com Sucesso\n");
	system("pause");
	system("cls");

	printf("				BEM - VINDO A PORRADARIA INSANA\n\n");
	
	//Função Perfil
	void perfil(void);
	perfil();
	
	//Função da Escolha do nome do Usuário
	void nomeJogador(void);
	nomeJogador();
	
	//Função da Escolha do nome do Computador
	void nomeComputador(void);
	nomeComputador();
	
	system("pause");
	system("cls");
	
	//Função da Batalha
	void batalha(void);
	batalha();
	
	//Reseta o Jogo
	while(continuar != 0){
		if(hpUsuario == 0){
			printf("ERRO NO SISTEMA\n");
			printf("NESSE JOGO VOCE NUNCA GANHARA\n");
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
			printf("Voce Perdeu, Tenta a proxima seu RUIM\n");
		}else{
			printf("Voce Ganhou, Humildimente te SOLAMOS\n\n");		
		}
			
		printf("\nDeseja Jogar novamente? [1] Sim - [0] Nao: ");
		scanf("%d", &continuar);
		
		if(continuar == 1){
			printf("\n");
			system("pause");
			system("cls");
			void batalha(void);
			batalha();
		}else{
			printf("\nObrigado por jogar ate a Proxima\n");
		}
	}
	
	getch();
	return 0;
}
