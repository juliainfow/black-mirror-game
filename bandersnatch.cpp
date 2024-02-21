#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
//intruções e objetivos: 
//ao rodar o game haverá um historia sendo contada onde oUSER
//irá decidir os caminhos que o STEPHAN vai seguir durante o jogo
//o jogo vai apresentar um total de 10 escolhas para você tomar e +uma bonus no final principal
//algumas escolha nao sao relevantes po é apenas para interação



//escolha 1: QUAL CERAL COMER -não é relevante
//escolha 2: TRABALHAR PRESENCIALMENTE OU NÃO -aqui é o primeiro final
//escolha 3: FALAR SOBRE A MAE -não é relevante
//escolha 4: QUEBRAR PC OU GRITAR COM O PAI -aqui é o segundo final
//escolha 5: SEGUIR COLIN OU IR NA TERAPEUTA -aqui é o terceiro final
//escolha 6: ACEITAR OU NÃO DROGAS DE COLIN
//escolha 7: QUEM DEVE PULAR DA SACADA-aqui é o quarto final
//escolha 8: QUEBRAR OU NÃO O PC-nao é relevante
//escolha 9: FAZER ALGO POR ESTAR ANSIOSO -nao é relevante 
//escolha 10: LIGAR PARA TERAPEUTA OU ESCONDER O CORPO - aqui é o quinto
//como a escolha 11 bonus aparece: se esconder o corpo vai aparecer a filha do Colin

//FINAL EM ORDEM DE ESCRITA E O PRINCIPAL DELES É O ULTIMO
//FINAL 1:stephan nao consegue trabalhar na espresa e ganha nota zero no jogo
//FINAL 2:stephan joga cha no computador e perde o projeto
//Final 3:stephan pula da sacada e colin assume o jogo que ganha 2.5/5
//final 4:stephan vai preso e o jogo recebe 2.5/5
//final 5:stephan vai preso e o jogo recebe 5/5




int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int gameRunning = 1;  // var para o programa iniciar em falso
	char c;
	int op;
	int i=0;
	//intruções
	
	

while (gameRunning)	{

		printf("\n");
	
	//mudar a cor do printf pelo S.O
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("  \n                            Black Mirror:  Bandersnatch\n\n ");
	
	
	//premissa 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);

	printf("  Em 1984, um jovem programador começa a adaptar um livro fantástico para videogame\n");
	printf("   e põe em questão a própria realidade. Uma história alucinante com múltiplos finais.\n\n");
	
	printf("                           PRESIONE ENTER PARA INICIAR\n\n\n");
	scanf("%c",&c);
	fflush(stdin);
	
	
	// pega o caractere sem imprimir pro usuario
	char c=getch();
	
	// if teste sei o user apertou a tecla enter(13 em ascii)
	if (c == 13 || c == 10){ // e
		
	} 	
	//introduçao ao game
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t 9 de Julho de 1984.\n");
	printf("\t Stephan desperta e toma seus comprimidos,descendo as escadas vê seu\n \t pai trancando o escritório, e o mesmo o convida para o café da manhã.\n\n");

	//inicio do dialogo com o pai
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Peter: Não vai tomar o seu chá?\n\n");
	printf("\t   Stephan:Desculpa,pai.Eu estava distraido.\n\n");
	printf("\t   Peter: O pessoal que trabalha com computadores?\n\n");
	printf("\t   Stephan: É... TuckerSoft, eles fazem os jogos do Colin Ritman.\n");
	printf("\t   Stephan: O senhor Mohan, o dono, disse que eu posso mostrar minha demo de Bandersnatch.\n\n");
	printf("\t   Peter: Bandersnacth? O livro da sua mãe?\n\n");	
	printf("\t   Stephan: Sim. Estava nas coisas dela. Mas eu não acho que ela leu.\n\n");
	printf("\t   Peter: O autor não parece bom, você está sempre avançando e voltando as páginas.\n\n");
	printf("\t   Stephan: É no estilo escolha sua aventura, eu decido as escolhas do personagem,\n\t  e isso me manda pra páginas diferentes a cada escolha.\n\n");
	printf("\t   Peter: Agora escolha o seu ceral.\n\n");
	//final do dialogo com o pai
	
	//loop para escolha 1
	do {
	
		//escolha 1 (não é relevante)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
			printf("\t 1-FROSTIES OU 2-SUGAR PUFFS\n\n");
				scanf("%d",&op);
				fflush(stdin);
	if(op==1){
		printf("\t FROSTIES\n\n");
		   	}else if (op==2) {
								printf("\t SUGAR PUFFS\n\n");
							}
	
		}while(op<1 || op>2);
	//final do loop para escolha 1
	
	//narração
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);//
	printf("\t Stephan termina seu café e pega um ônibus a caminho da Tuckersoft.\n");
	printf("\t Chegando lá encontra Mohan e é apresentado ao Colin Ritman.\n\n");
	
	//mohan falando com stephan
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Mohan:Sabe porquê eu comprei esse prédio?Imagina só: uma equipe inteira só para os gráficos\n\t   outra só para a jogabilidade, e outra para o desenvolvimento.\n\n");
	printf("\t  Mohan:Quer conhecer o Colin? O novo jogo dele é um personagem caindo de uma sacada\n\t   e o objetivo dele é pegar as roupas dos vizinhos que estão penduradas.\n\n");
	
	//narração
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\n\t Colin mostra seu novo jogo ao Stephan, e em seguida Stephan mostra a demo de Bandersnatch.\n \n");
	
	//dialogo entre Colin, Stephan e Mohan
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Mohan:Então é um jogo de aventura? Tipo O Hobbit?\n\n");
	printf("\t   Stephan:As opções aparecem na tela e quem está jogando decide, é uma cópia fiek ao livro.\n\n");
	printf("\t   Colin:Se tem vários caminhos tem vários finais.\n\n");
	printf("\t   Colin:Eu tenho esse livro em casa, mas nunca li.\n\n");
	printf("\t   Stephan:Sim. Deveria ler, o autor é brilhante.\n\n");
	printf("\t   Conlin:Não foi ele que matou a  esposa?\n\n");
	printf("\t   Stephan:Sim ,m..\n\n");
	
	//narração
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Mohan escolhe um caminho do jogo e ele trava, Stephan explica então que aquele caminho ainda não tinha sido programado.\n");
	printf("\t Mohan lemnra que eles estão em julho, e que para vender no natal as fitas precisam estar nas lojas em novembro.\n\n");
	
	//escolha 2 (relevamte)
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Mohan:Minha proposta é essa:vem trabalhar aqui, no escritório juntos com os outros.O que acha?\n\n");
	
	//atribuindo zero para op, assim o user vai escolher
	op=0;
	
	//loop para escolha 2
	do { 
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
			printf("\t 1-Aceitar 2-Recusar\n\n");
				scanf("%d",&op);
				fflush(stdin);
		
			if(op==1){	
						printf("\t   Stephan:Eu aceito.\n\n");
				
				//narração/ primeiro final/game over
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
						printf("\t   Stephan perde sua produtivide ao trabalhar junto com outras pessoas, \n\t O jogo é finalizado e publicado antes do natal, porém,\n\t recebe nota 0/5 da crítica.\n\n\t\t\t GAME OVER");
						return 0;
				
				//continua
		   			}else if(op==2){
		   		
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
		   							printf("\t   Stephan:Eu prefiro trabalhar na minha casa,lá eu posso ser mais produtivo.\n\n");
							    	}
	
		}while(op<1 ||op >2);
	//final do loop para escolha 2
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t   Stephan vai ao consultório da sua psicóloga e diz quanto essa oportunidade vai mudar a vida dele.\n\n");
	
	//diálogo entre stephan e sua psicologa
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   DraHay:Então você esperou por essa oportunidade, e finalmente aconteceu.\n\t   Você está preparado?Vai conseguir entregar o jogo até o natal?\n\n");
	printf("\t   Stephan:Eu sei exatamente o que fazer,até achei melhor trabalhar sozinho, em casa...\n\t   é dificil fazer tantos caminhos,mas eu decido o final, sempre.\n\n");
	printf("\t   DraHay:Vai continuar tomando seus remédios?Talvez seja melhor você não ficar dopado durante o trabalho.\n\t   Posso falar com seu pai.\n\n");
	printf("\t   Stephan:Não, não fala com ele. Ele me sufoca, se a minha mãe estivesse aqui ela...\n\n");
	printf("\t   DraHay:Quer falar sobre ela?\n\n");
	
	//atribuindo zero para op, assim o user vai escolher
	op=0;
	
	//inicio do loop para escolha  3 falar sobr e amae, não é relevante
	do {
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
			printf("\t 1-Sim 2-Não\n\n");
				scanf("%d",&op);
				fflush(stdin);
				
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);		
			if(op==1){
						printf("\t   Stephan passa por um flashback onde conta sobre a morte da sua mãe.\n\t Ela ia pegar um trem mas se atrasou procurando um brinquedo do Stepahan.\n\t Ela se atrasa e então vai no trem seguinte, onde acontece um acidente.\n\n");
					}
			else if(op==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);

							printf("\t   DraHay:Tudo bem, podemos falar disso qualquer outra hora.Você tem o meu número.\n\n");
					   	}
		
		}while(op<1 ||op>2);
	//final do loop para escolha 3
	
	//stephan vai pra casa programar
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t   Stephan tenta programar os caminhos do jogo, ele fica preso entre os bugs.\n\t   Seu pai o interrompe.\n\n");

	//dialogo entre peter e stephan
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Stephan:Você pode sair? Eu to trabalhando e não está fácil.\n\n");	
	printf("\t   Peter:Eu estou preocupado, você virou a noite e o dia, você nem comeu.\n\n");	
	printf("\t   Stephan:Eu estou concentrado, você não consegue me dar espaço.\n\n");	
	
	//atribuindo zero para op começar com zero
	op=0;
	
	//inicio do loop para escolha 4 gritar eu qebrar computador
	do {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		printf("\t 1-Jogar chá no computador 2-Gritar com o pai\n\n");
			scanf("%d",&op);
			fflush(stdin);
			
		if(op==1){
					//final 2/game over
					printf("\t Stephan perde todo o projeto e não consegue entregar o jogo.\n\n\t\t\t GAME OVER");
					return 0;
				}
				
		else if(op==2){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
			//dialogo entre peter e stephan
			printf("\t   Stephan:Me desculpa, pai. Eu não sei porquê fiz isso, eu...\n\n");
			printf("\t   Peter:Filho, tá tudo bem.\n\n");
			printf("\t   Peter:Deixa eu te levar pra almoçar.\n\n");
					}
		
	}while(op<1 || op>2);
	//final do loop para escolha 4
	
	//narração
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Peter leva Stephan ao consultório, diz que vai ser melhor assim, e que viu os remédios no lixo.\n\t Stephan desce do carro e vê Colin.\n\n");
	
	//atribuir zero a op
	op=0;
	
	//inicio do loop para escolha 5
	do {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		printf("\t 1-Seguir Colin até a casa dele 2-Entrar no consultório\n\n");
			scanf("%d",&op);
			fflush(stdin);
			
	//se seguir, segue um dialogo entre os dois
		if(op==1){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Colin:Você está perdido,você não vê que existe mais de um caminho?\n\n ");
	printf("\t   Stephan:Pode me mostrar?\n\n");
	printf("\t   Colin:Você está sempre lúcido, sua mente está limitada.\n\t   Você acha que essa é sua única oportunidade, mas não há somente essa linha do tempo.\n\t   Pense nisso.\n\n");
		
	//escolha 6
	//escolha entre tomar ou nao tomar md é irrelevante
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
					printf("\t 1-Aceitar pulila  2-Recusar pilula\n\n");
						scanf("%d",&op);
						fflush(stdin);
		
		
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
					if(op==1){
						printf("\t Stephan toma a pilula.\n\n");

		
								}else if(op==2) {
												printf("\t Colin coloca a pilula no chá de Stephan quando ele se distrai.\n\n");
	
													}
	
	//final da escolha 6
	
	//narração
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
			printf("\t Colin leva Stephan até a varanda.Diz que não importa o que aconteça pois não exite apenas aquela linha temporal.\n\n");

//escolha 7 quem pula da sacada
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		printf("\t 1-Stephan pula da sacada 2-Colin pula da sacada \n\n");
			scanf("%d",&op);
			fflush(stdin);
			
			//final 3/game over
			if(op==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
						printf("\t Stephan morre e Colin assume o jogo.\n\t O jogo recebe 2.5 da crítica.\n\n\t\t\t GAME OVER");
						return 0;
						
					}else if (op==2){
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
									printf("\t Stephan vai falar com a Dra.Hay.\n\n");
	
									}
//final da escolha 7 entre pular ou não da sacada
			
					}else if (op==2){
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
									printf("\t Stephan vai falar com a Dra.Hay.\n\n");
		
									} 
//final da escolha 5 entre entrar ou nao no consultorio	
	}while(op<1 || op>2);
	
	//DIALOGO ENTRE DRA E STEPHAN
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Stephan:Eu já li o livro, eu sei todos os caminhos.Talvez eu devesse retirar alguns caminhos.\n\n");
	printf("\t   DraHay:Isso seria ruim pra quem joga?\n\n");
	printf("\t   Stephan:Não, quem está jogando não sabe quantos caminhos são possíveis.\n\t   Eles acham que controla, mas controlo quem joga, eu decido os finais?\n\n");
	printf("\t   DraHay:Acha que as pessoas gostam de ser controladas?\n\n");
	printf("\t   Stephan:Não, elas gostam de estar no controle, eu dou essa falsa sensação.\n\n");
	printf("\t   Stephan:Eu me sinto controlado as vezes, eu to mo atitudes querendo fazer o contrario.\n\n");
	
	//escolha 8 não é relevante
do {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
	printf("\t 1-Coçar a orelha 2-Roer as unhas\n");
	scanf("%d",&op);
	//fim da escolha 8
}while(op<1 || op>2);
	//narração
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Stephan vai pra casa e tenta remover alguns caminho do jogo.\n\n");
	
	//escolha 9 sobre qubrar computador, não é relevante
do{
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
	printf("\t 1-Quebrar computador 2-Jogar chá no computador.\n\n");
	scanf("%d",&op);
	//fim da escolha 9
}while(op<1 || op>2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Stephan:Quem é você?Eu sei que você está me controlando.QUEM É VOCÊ?!\n\n");
	printf("\t   Peter:Stephan?Com quem está falando?\n\n");
	
	//narração
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Stephan mata Peter.\n\n");
	
	//escolha 10//FINAL 4/GAME OVER
do {

	op=0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
	printf("\t 1-Ligar para terapeuta 2-Enterrar o corpo.\n\n");
	scanf("%d",&op);
	fflush(stdin);
	
	
	if(op==1){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Stephan confessa o crime e vai preso, o jogo é publicado e recebe 2.5/5 da crítica.\n\t TuckerSoft sofre ataques e recolhe o jogo de todas as lojas\n\n\t\t\t GAME OVER");
			return 0;
			}
	
	else if(op==2){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Stephan ganha tempo e consegue remover alguns caminhos.\n\t O jogo é publicado e recebe 5/5 da crítica.\n\t Quando o crime é descoberto o jogo é retirado de todas as lojas. Colin é preso por posse de drogas.\n\n");
	printf("\t 2017- Entrevista com Lola Ritman.\n\n");
	
	//dialogo filha do colin com jornalista
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Jornalista:Então você pretente recriar a história desse livro?Pode falar dele?\n");
	printf("\t   Jornalista:Esse é o mesmo livro que o programador Stephan Buttler se baseou para fazar um jogo em 1984?\n\n");
	printf("\t   Lola:Sim é o mesmo livro, Stephan trabalhou com meu pai Colin Ritman.\n\t   Lola:Meu pai também tinha esse livro mas eu não acho que ele leu.\n");
	printf("\t   Lola:No livro o personagem foge de um monstro chamado Bandersnatch.\n\t   Lola:E você pode escolher pra onde o personagem vai e gera diferentes finais.\n\t   Lola:Não está sendo fácil a produção pois são muitos caminhos para avançar e voltar.\n\n");
	printf("\t   Jornalista:O lançamento do filme vai ser em uma streaming. É pela Netflix?\n\n");
	printf("\t   Lola:Não posso reponder antes do lançamento.\n\n");
	//fim do dialogo
	
	}
	
	//fim da escolha 10
}while(op<1 || op>2);

//escolha 11 bonus
	
do{


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
	printf("\t 1-Lola joga chá no computador 2-Lola quebra o computador\n\n");
	scanf("%d",&op);
		
	
}while (op<1 ||op>2);
	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t\t\tGAME OVER");	
	gameRunning=0;	
}
	
	
return 0;	

	
} 
