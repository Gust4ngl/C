#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
Como esse é um dos primeiros codigos que estou fazendo vou tentar especificar bem cada coisinha que fiz, mesmo se algumas coisas forem obvias,
e tambem acho que é uma forma bem boa de pegar bem os conceitos basicos dessa linguagem de programação
*/
main(){
	
	system ("chcp 1252 > nul");
	
	char livro[6][25];
	int op=0;
	int linha=0;
	
	/*
	A primeira coisa que defini nessse codigo foram as variaveis que eu iria usar, que seriam o char(que vai ser usado como uma string), e os int op e int linha.
	A variavel com o nome livro vai ser usada como uma string, nela eu conseguirei armazenar ate 6 valores ou 6 livros se preferir, cada um desses "livros" poderao ter um nome de ate 25 caracteres incluindo espaços.
	A variavel com o nome op vai ser usado no comando switch case, e nos if else.
	A variavel com o nome linha ira ser usada para mostrar em qual "linha" o livro que o usuario cadastrou está, para quando ele querer alterar ou deletar algum livro, o processo de ver onde o livro esta fique mais facil.
	*/
	
		while(op!=5){
		
		//Aqui eu fiz um laço de repetiçao que enquanto o usuario nao digite o numero 5, o codigo ficara se repetindo infinitamente
		
			system("cls");
			printf("\n\t\t Bem vindo a biblioteca!\n");
			printf("\n\t O que você quer fazer?\n\n\t 1-Registrar livros\n\t 2-Exibir livros registrados\n\t 5-Sair\n");
			scanf("%i", &op);
			
			//Aqui o usuario pode visualizar quais sao as opçoes disponiveis da biblioteca
			//Logo em seguida o usuario ira escolher uma das opçoes disponiveis, e oque ele digitou sera atrinuido ao valor da variavel "op".
			
			
				switch(op){
					
					//Esse switch aqui em cima ira ver oque esta registrado na variavel op e ira fazer uma das seguintes opçoes:
				
					case 1:{
						
						//Caso ele digite um, ele vira parar aqui, no sistema de cadastro de livros.
						
							system("cls");
						for(linha=1;linha<6;linha++){
							printf("Digite o nome do livro aqui: \n");
							scanf("%s", livro[linha]);
							livro[0][0] = '\0';
							
							/*
							Vou explicar aqui o porque de ter usado o scanf e nao o comando gets, percebi que usando o comando gets,
							o que aparecia no printf para o usuario ficava duplicado e consegui resolver esse bug, usando o scanf. Outra coisa que
							pode parecer bem estranha é, porque eu coloquei "livro[0][0] = '\0';", vou explicar, como eu usei o scanf e nao o gets,
							nao sei porque mas o livro que era para aparecer na linha 0, aparecia na quebra de linha entre o printf"\t\t Os livros registrados foram:\n",
							e o printf"printf("%s\n", &livro[linha]);", e aquilo estava me dando uma agonia da mesma forma que os textos de "Digite o nome do livro aqui",
							entao eu pensei em definir o valor do vetor 0 de livro para nulo, e acabou resolvendo todo meu problema.
							*/
							
						}
						printf("\n Livros registrados com sucesso! \n");
						system("pause");
						break;
					}
				
					case 2:{
						
						//Aqui é praticamente a mesma coisa, se o usuario digitar 2 ele vem parar aqui. :)
						
						system("cls");
						printf("\t\t Os livros registrados foram:\n");
							for(linha=0;linha<6;linha++){
							printf("%s\n", &livro[linha]);
							printf("%i\t", linha);
							
							/*
							Oque eu fiz aqui foi bem simples na verdade, simplesmente mostrei ao usuario os livros que estavam registrados e em qual
							posiçao eles estavam registrados, para caso ele queira fazer alguma das opçoes abaixo, ele ja sabe em qual posicao o livro esta. 
							*/
							
						}
						printf("\n \t\t O que você deseja fazer?\n 1-Alterar um livro\n 2-Deletar um livro\n Digite qualquer outro número para retornar ao menu principal \n");
						scanf("%i", &op);
						
							switch(op){
							
								case 1:{
									
									/*
								Aqui eu posso dizer que foi a parte que mais quebrei a cabeça para resolver. Minha primeira ideia que tive para 
								fazer esse sistema de alteraçao de livros foi em usar algo como um laço de repeticao do tipo for e adivinha? Não deu certo. :(
								Depois lembrei que tinha falado com um amigo meu, e que ele tinha feito um sistema parecido so que ao inves de livros ele resolveu
								fazer um estacionamento para carros. Logo depois disso ele acabou me mandando o link no github do codigo que ele fez e eu resolvi dar uma olhada
								alias o link ta aqui: https://github.com/diogovsmartins/ULBRA/blob/main/2021-2/Laboratorio_De_Programa%C3%A7%C3%A3o/exercicios/aula_07/SimulaEstacionamento.java
								Minha unica dificuldade ao ver o codigo dele era que era em java, e ate o momento eu nao sabia nem usar o C corretamente, mas tentei tirar algo de util desse codigo e adivinha? Acabou dando muito certo.
								*/
									
									printf("\n Digite em que linha o livro está para alterá-lo \n");
									scanf("%i", &linha);
									
									/*
									Acabei reparando que para registrar um carro em uma certa vaga ele usou o comando if, e para cada opçao que ele digitava, 
									o carro era registrado em uma vaga, ai como tinham varias opçoes eu resolvi fazer o sistema para alternar os livros de um jeito bem simples,
									pode nao ser um jeito muito eficiente mas e bem simples de se entender. Os comandos que fiz com if else davam de fazer com um switch case tambem,
									mas na hora eu nao tinha pensado nisso. E bem, é simples caso o usuario digitar 0, o codigo faz o seguinte, pega o que ele digitou,
									e atribui a variavel livro de seu respectivo espaço, nao sei bem o porque mas o livro[1], fica na variavel linha 0, entao sempre que 
									eu digitava para ele alterar o nome de um livro em uma linha, na hora de anexar esse valor ao valor do livro da respectiva linha, eu teria que colocar
									a variavel livro 1 espaço a mais por exemplo "linha=0" e "livro[1]"
									*/
										if(linha==0){
											printf("\n Digite um novo nome para o livro: \n");
											scanf("%s", &livro[1]);
										}
										else if(linha==1){
											printf("\n Digite um novo nome para o livro: \n");
											scanf("%s", &livro[2]);
										}
										else if(linha==2){
											printf("\n Digite um novo nome para o livro: \n");
											scanf("%s", &livro[3]);
										}
										else if(linha==3){
											printf("\n Digite um novo nome para o livro: \n");
											scanf("%s", &livro[4]);
										}
										else if(linha==4){
											printf("\n Digite um novo nome para o livro: \n");
											scanf("%s", &livro[5]);
										}
										else{
											printf("\n DIGITE UMA OPÇÃO VALIDA! \n");
										}
									printf("\n Livro alterado com sucesso! \n");
									system("pause");
									break;
								}
								
								case 2:{
									
									/*
									Essa foi a parte mais facil de fazer, como o sistema de alteraçao ja estava pronto, a base para fazer o de apagar era quase a mesma coisa,
									a unica coisa que mudou foi que ao inves de dar a opcao do usuario escolher um nome ou um valor para a variavel livro, isso seria 
									executado de forma automatica pela maquina.
									*/
									printf("\ndigite a linha em que esta o livro para apaga-lo\n");
									scanf("%i", &linha);
										if(linha==0){
											livro[1][0] = '\0';
										}
										else if(linha==1){
											livro[2][0] = '\0';
											
										}
										else if(linha==2){
											livro[3][0] = '\0';
										}
										else if(linha==3){
											livro[4][0] = '\0';
										}
										else if(linha==4){
											livro[5][0] = '\0';
										}
										else{
											printf("\nDIGITE UMA OPÇÃO VALIDA!\n");
										}
									printf("\n Livro deletado com sucesso! \n");
									system("pause");
									break;
								}
							}
					}
				}
		}
}
