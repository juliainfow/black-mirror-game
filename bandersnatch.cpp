#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
//intru��es e objetivos: 
//ao rodar o game haver� um historia sendo contada onde oUSER
//ir� decidir os caminhos que o STEPHAN vai seguir durante o jogo
//o jogo vai apresentar um total de 10 escolhas para voc� tomar e +uma bonus no final principal
//algumas escolha nao sao relevantes po � apenas para intera��o



//escolha 1: QUAL CERAL COMER -n�o � relevante
//escolha 2: TRABALHAR PRESENCIALMENTE OU N�O -aqui � o primeiro final
//escolha 3: FALAR SOBRE A MAE -n�o � relevante
//escolha 4: QUEBRAR PC OU GRITAR COM O PAI -aqui � o segundo final
//escolha 5: SEGUIR COLIN OU IR NA TERAPEUTA -aqui � o terceiro final
//escolha 6: ACEITAR OU N�O DROGAS DE COLIN
//escolha 7: QUEM DEVE PULAR DA SACADA-aqui � o quarto final
//escolha 8: QUEBRAR OU N�O O PC-nao � relevante
//escolha 9: FAZER ALGO POR ESTAR ANSIOSO -nao � relevante 
//escolha 10: LIGAR PARA TERAPEUTA OU ESCONDER O CORPO - aqui � o quinto
//como a escolha 11 bonus aparece: se esconder o corpo vai aparecer a filha do Colin

//FINAL EM ORDEM DE ESCRITA E O PRINCIPAL DELES � O ULTIMO
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
	//intru��es
	
	

while (gameRunning)	{

		printf("\n");
	
	//mudar a cor do printf pelo S.O
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("  \n                            Black Mirror:  Bandersnatch\n\n ");
	
	
	//premissa 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);

	printf("  Em 1984, um jovem programador come�a a adaptar um livro fant�stico para videogame\n");
	printf("   e p�e em quest�o a pr�pria realidade. Uma hist�ria alucinante com m�ltiplos finais.\n\n");
	
	printf("                           PRESIONE ENTER PARA INICIAR\n\n\n");
	scanf("%c",&c);
	fflush(stdin);
	
	
	// pega o caractere sem imprimir pro usuario
	char c=getch();
	
	// if teste sei o user apertou a tecla enter(13 em ascii)
	if (c == 13 || c == 10){ // e
		
	} 	
	//introdu�ao ao game
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t 9 de Julho de 1984.\n");
	printf("\t Stephan desperta e toma seus comprimidos,descendo as escadas v� seu\n \t pai trancando o escrit�rio, e o mesmo o convida para o caf� da manh�.\n\n");

	//inicio do dialogo com o pai
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Peter: N�o vai tomar o seu ch�?\n\n");
	printf("\t   Stephan:Desculpa,pai.Eu estava distraido.\n\n");
	printf("\t   Peter: O pessoal que trabalha com computadores?\n\n");
	printf("\t   Stephan: �... TuckerSoft, eles fazem os jogos do Colin Ritman.\n");
	printf("\t   Stephan: O senhor Mohan, o dono, disse que eu posso mostrar minha demo de Bandersnatch.\n\n");
	printf("\t   Peter: Bandersnacth? O livro da sua m�e?\n\n");	
	printf("\t   Stephan: Sim. Estava nas coisas dela. Mas eu n�o acho que ela leu.\n\n");
	printf("\t   Peter: O autor n�o parece bom, voc� est� sempre avan�ando e voltando as p�ginas.\n\n");
	printf("\t   Stephan: � no estilo escolha sua aventura, eu decido as escolhas do personagem,\n\t  e isso me manda pra p�ginas diferentes a cada escolha.\n\n");
	printf("\t   Peter: Agora escolha o seu ceral.\n\n");
	//final do dialogo com o pai
	
	//loop para escolha 1
	do {
	
		//escolha 1 (n�o � relevante)
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
	
	//narra��o
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);//
	printf("\t Stephan termina seu caf� e pega um �nibus a caminho da Tuckersoft.\n");
	printf("\t Chegando l� encontra Mohan e � apresentado ao Colin Ritman.\n\n");
	
	//mohan falando com stephan
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Mohan:Sabe porqu� eu comprei esse pr�dio?Imagina s�: uma equipe inteira s� para os gr�ficos\n\t   outra s� para a jogabilidade, e outra para o desenvolvimento.\n\n");
	printf("\t  Mohan:Quer conhecer o Colin? O novo jogo dele � um personagem caindo de uma sacada\n\t   e o objetivo dele � pegar as roupas dos vizinhos que est�o penduradas.\n\n");
	
	//narra��o
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\n\t Colin mostra seu novo jogo ao Stephan, e em seguida Stephan mostra a demo de Bandersnatch.\n \n");
	
	//dialogo entre Colin, Stephan e Mohan
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Mohan:Ent�o � um jogo de aventura? Tipo O Hobbit?\n\n");
	printf("\t   Stephan:As op��es aparecem na tela e quem est� jogando decide, � uma c�pia fiek ao livro.\n\n");
	printf("\t   Colin:Se tem v�rios caminhos tem v�rios finais.\n\n");
	printf("\t   Colin:Eu tenho esse livro em casa, mas nunca li.\n\n");
	printf("\t   Stephan:Sim. Deveria ler, o autor � brilhante.\n\n");
	printf("\t   Conlin:N�o foi ele que matou a  esposa?\n\n");
	printf("\t   Stephan:Sim ,m..\n\n");
	
	//narra��o
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Mohan escolhe um caminho do jogo e ele trava, Stephan explica ent�o que aquele caminho ainda n�o tinha sido programado.\n");
	printf("\t Mohan lemnra que eles est�o em julho, e que para vender no natal as fitas precisam estar nas lojas em novembro.\n\n");
	
	//escolha 2 (relevamte)
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Mohan:Minha proposta � essa:vem trabalhar aqui, no escrit�rio juntos com os outros.O que acha?\n\n");
	
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
				
				//narra��o/ primeiro final/game over
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
						printf("\t   Stephan perde sua produtivide ao trabalhar junto com outras pessoas, \n\t O jogo � finalizado e publicado antes do natal, por�m,\n\t recebe nota 0/5 da cr�tica.\n\n\t\t\t GAME OVER");
						return 0;
				
				//continua
		   			}else if(op==2){
		   		
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
		   							printf("\t   Stephan:Eu prefiro trabalhar na minha casa,l� eu posso ser mais produtivo.\n\n");
							    	}
	
		}while(op<1 ||op >2);
	//final do loop para escolha 2
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t   Stephan vai ao consult�rio da sua psic�loga e diz quanto essa oportunidade vai mudar a vida dele.\n\n");
	
	//di�logo entre stephan e sua psicologa
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   DraHay:Ent�o voc� esperou por essa oportunidade, e finalmente aconteceu.\n\t   Voc� est� preparado?Vai conseguir entregar o jogo at� o natal?\n\n");
	printf("\t   Stephan:Eu sei exatamente o que fazer,at� achei melhor trabalhar sozinho, em casa...\n\t   � dificil fazer tantos caminhos,mas eu decido o final, sempre.\n\n");
	printf("\t   DraHay:Vai continuar tomando seus rem�dios?Talvez seja melhor voc� n�o ficar dopado durante o trabalho.\n\t   Posso falar com seu pai.\n\n");
	printf("\t   Stephan:N�o, n�o fala com ele. Ele me sufoca, se a minha m�e estivesse aqui ela...\n\n");
	printf("\t   DraHay:Quer falar sobre ela?\n\n");
	
	//atribuindo zero para op, assim o user vai escolher
	op=0;
	
	//inicio do loop para escolha  3 falar sobr e amae, n�o � relevante
	do {
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
			printf("\t 1-Sim 2-N�o\n\n");
				scanf("%d",&op);
				fflush(stdin);
				
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);		
			if(op==1){
						printf("\t   Stephan passa por um flashback onde conta sobre a morte da sua m�e.\n\t Ela ia pegar um trem mas se atrasou procurando um brinquedo do Stepahan.\n\t Ela se atrasa e ent�o vai no trem seguinte, onde acontece um acidente.\n\n");
					}
			else if(op==2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);

							printf("\t   DraHay:Tudo bem, podemos falar disso qualquer outra hora.Voc� tem o meu n�mero.\n\n");
					   	}
		
		}while(op<1 ||op>2);
	//final do loop para escolha 3
	
	//stephan vai pra casa programar
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t   Stephan tenta programar os caminhos do jogo, ele fica preso entre os bugs.\n\t   Seu pai o interrompe.\n\n");

	//dialogo entre peter e stephan
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Stephan:Voc� pode sair? Eu to trabalhando e n�o est� f�cil.\n\n");	
	printf("\t   Peter:Eu estou preocupado, voc� virou a noite e o dia, voc� nem comeu.\n\n");	
	printf("\t   Stephan:Eu estou concentrado, voc� n�o consegue me dar espa�o.\n\n");	
	
	//atribuindo zero para op come�ar com zero
	op=0;
	
	//inicio do loop para escolha 4 gritar eu qebrar computador
	do {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		printf("\t 1-Jogar ch� no computador 2-Gritar com o pai\n\n");
			scanf("%d",&op);
			fflush(stdin);
			
		if(op==1){
					//final 2/game over
					printf("\t Stephan perde todo o projeto e n�o consegue entregar o jogo.\n\n\t\t\t GAME OVER");
					return 0;
				}
				
		else if(op==2){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
			//dialogo entre peter e stephan
			printf("\t   Stephan:Me desculpa, pai. Eu n�o sei porqu� fiz isso, eu...\n\n");
			printf("\t   Peter:Filho, t� tudo bem.\n\n");
			printf("\t   Peter:Deixa eu te levar pra almo�ar.\n\n");
					}
		
	}while(op<1 || op>2);
	//final do loop para escolha 4
	
	//narra��o
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Peter leva Stephan ao consult�rio, diz que vai ser melhor assim, e que viu os rem�dios no lixo.\n\t Stephan desce do carro e v� Colin.\n\n");
	
	//atribuir zero a op
	op=0;
	
	//inicio do loop para escolha 5
	do {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		printf("\t 1-Seguir Colin at� a casa dele 2-Entrar no consult�rio\n\n");
			scanf("%d",&op);
			fflush(stdin);
			
	//se seguir, segue um dialogo entre os dois
		if(op==1){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Colin:Voc� est� perdido,voc� n�o v� que existe mais de um caminho?\n\n ");
	printf("\t   Stephan:Pode me mostrar?\n\n");
	printf("\t   Colin:Voc� est� sempre l�cido, sua mente est� limitada.\n\t   Voc� acha que essa � sua �nica oportunidade, mas n�o h� somente essa linha do tempo.\n\t   Pense nisso.\n\n");
		
	//escolha 6
	//escolha entre tomar ou nao tomar md � irrelevante
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
					printf("\t 1-Aceitar pulila  2-Recusar pilula\n\n");
						scanf("%d",&op);
						fflush(stdin);
		
		
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
					if(op==1){
						printf("\t Stephan toma a pilula.\n\n");

		
								}else if(op==2) {
												printf("\t Colin coloca a pilula no ch� de Stephan quando ele se distrai.\n\n");
	
													}
	
	//final da escolha 6
	
	//narra��o
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
			printf("\t Colin leva Stephan at� a varanda.Diz que n�o importa o que aconte�a pois n�o exite apenas aquela linha temporal.\n\n");

//escolha 7 quem pula da sacada
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		printf("\t 1-Stephan pula da sacada 2-Colin pula da sacada \n\n");
			scanf("%d",&op);
			fflush(stdin);
			
			//final 3/game over
			if(op==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
						printf("\t Stephan morre e Colin assume o jogo.\n\t O jogo recebe 2.5 da cr�tica.\n\n\t\t\t GAME OVER");
						return 0;
						
					}else if (op==2){
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
									printf("\t Stephan vai falar com a Dra.Hay.\n\n");
	
									}
//final da escolha 7 entre pular ou n�o da sacada
			
					}else if (op==2){
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
									printf("\t Stephan vai falar com a Dra.Hay.\n\n");
		
									} 
//final da escolha 5 entre entrar ou nao no consultorio	
	}while(op<1 || op>2);
	
	//DIALOGO ENTRE DRA E STEPHAN
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Stephan:Eu j� li o livro, eu sei todos os caminhos.Talvez eu devesse retirar alguns caminhos.\n\n");
	printf("\t   DraHay:Isso seria ruim pra quem joga?\n\n");
	printf("\t   Stephan:N�o, quem est� jogando n�o sabe quantos caminhos s�o poss�veis.\n\t   Eles acham que controla, mas controlo quem joga, eu decido os finais?\n\n");
	printf("\t   DraHay:Acha que as pessoas gostam de ser controladas?\n\n");
	printf("\t   Stephan:N�o, elas gostam de estar no controle, eu dou essa falsa sensa��o.\n\n");
	printf("\t   Stephan:Eu me sinto controlado as vezes, eu to mo atitudes querendo fazer o contrario.\n\n");
	
	//escolha 8 n�o � relevante
do {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
	printf("\t 1-Co�ar a orelha 2-Roer as unhas\n");
	scanf("%d",&op);
	//fim da escolha 8
}while(op<1 || op>2);
	//narra��o
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Stephan vai pra casa e tenta remover alguns caminho do jogo.\n\n");
	
	//escolha 9 sobre qubrar computador, n�o � relevante
do{
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
	printf("\t 1-Quebrar computador 2-Jogar ch� no computador.\n\n");
	scanf("%d",&op);
	//fim da escolha 9
}while(op<1 || op>2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Stephan:Quem � voc�?Eu sei que voc� est� me controlando.QUEM � VOC�?!\n\n");
	printf("\t   Peter:Stephan?Com quem est� falando?\n\n");
	
	//narra��o
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
	printf("\t Stephan confessa o crime e vai preso, o jogo � publicado e recebe 2.5/5 da cr�tica.\n\t TuckerSoft sofre ataques e recolhe o jogo de todas as lojas\n\n\t\t\t GAME OVER");
			return 0;
			}
	
	else if(op==2){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t Stephan ganha tempo e consegue remover alguns caminhos.\n\t O jogo � publicado e recebe 5/5 da cr�tica.\n\t Quando o crime � descoberto o jogo � retirado de todas as lojas. Colin � preso por posse de drogas.\n\n");
	printf("\t 2017- Entrevista com Lola Ritman.\n\n");
	
	//dialogo filha do colin com jornalista
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	printf("\t   Jornalista:Ent�o voc� pretente recriar a hist�ria desse livro?Pode falar dele?\n");
	printf("\t   Jornalista:Esse � o mesmo livro que o programador Stephan Buttler se baseou para fazar um jogo em 1984?\n\n");
	printf("\t   Lola:Sim � o mesmo livro, Stephan trabalhou com meu pai Colin Ritman.\n\t   Lola:Meu pai tamb�m tinha esse livro mas eu n�o acho que ele leu.\n");
	printf("\t   Lola:No livro o personagem foge de um monstro chamado Bandersnatch.\n\t   Lola:E voc� pode escolher pra onde o personagem vai e gera diferentes finais.\n\t   Lola:N�o est� sendo f�cil a produ��o pois s�o muitos caminhos para avan�ar e voltar.\n\n");
	printf("\t   Jornalista:O lan�amento do filme vai ser em uma streaming. � pela Netflix?\n\n");
	printf("\t   Lola:N�o posso reponder antes do lan�amento.\n\n");
	//fim do dialogo
	
	}
	
	//fim da escolha 10
}while(op<1 || op>2);

//escolha 11 bonus
	
do{


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
	printf("\t 1-Lola joga ch� no computador 2-Lola quebra o computador\n\n");
	scanf("%d",&op);
		
	
}while (op<1 ||op>2);
	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("\t\t\tGAME OVER");	
	gameRunning=0;	
}
	
	
return 0;	

	
} 
