#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 50
#define cont 8
struct Cadastro{
	char Nome[TAM];
	char DataNasc[TAM];
	char CPF[TAM];
	char login[TAM];
	int senhaadm;
	char Email[TAM];
	char  Senha[TAM];
	char  ConfirmacaoSenha[TAM];
	int opcadastro;
	int opcase1;
	FILE * dados;
	FILE * idinicial;
	int numid;
	int id;
	int Opmenu;
}C1;

struct Produtos{
	int CodProduto;
	int QuantidadeProdutos;
	int QuantidadeDeCadaTipo;
	int op;
	float PrecoProduto;
	float ResultadoMult;
	char produto[55][TAM]={"Alfenim"       ,"Ambrosia"        ,"Baba De Moça"    ,"Bananada"     ,"Bananinha"      ,
    "Beijinho"      ,"Bem - Casado"    ,"Bolinho De Chuva","Bolinho De Estudante"           ,
    "Bolo De Fuba"  ,"Bolo De Milho"   ,"Bolo De Rolo"    ,"Brigadeiro"   ,"Cajuada"        ,
    "Cajuzinho"     ,"Doce carolina"   ,"Cartola"         ,"Chuvisco Doce","Cocada"         ,
    "Cupulate"      ,"Coral"           ,"Doce De Abobora" ,"Doce De Leite","Doce De Especie",
    "Doce De Mocoto","Doce De Trigo"   ,"Figada"          ,"Filhó"        ,"Fan"            ,
    "Furrudum"      ,"Goiabada"        ,"Maria Mole"      ,"Mariola"      ,"Marmelada"      ,
    "Mouse De Limão","Munguzá"         ,"Nega - Maluca"   ,"Nego Bom"     ,"Olho De Sogra"  ,
    "Paçoquinha"    ,"Pão Doce"        ,"Bom Bocado"      ,"Papo De Anjo" ,"Pé De Moleque"  ,
    "Pixé"          ,"Quebra - Queixo" ,"Queijadinho"     ,"Quequé"       ,"Quindin"        ,
    "Rapadura"      ,"Romeu e Julieta" ,"Sagu"            ,"Tareco"       ,"Umbuzada"       ,
    "Doce Surpreza"};
}P1;

struct Cartaocredito{
	char Nome[TAM];
	char DataNasc[TAM];
	int  CodigoSeguranca;
	int  CPFtitular;
	int  numero;
	char Sobrenome[TAM];
}C2;

struct Boleto{
	char NomeSobrenome[TAM];
	char RuaAv[TAM];
	int  Numero;
	char Complemento[TAM];
	int  CEP;
	char Estado[TAM];
	char Cidade[TAM];
	char Bairro[TAM];
	int CPF;
}B;

struct Transferencia{
	char Nome[TAM];
	int  Agencia;
	int  Conta;
}T;

struct Pagamento{ 
    struct Cartaocredito C2;
    struct Boleto B;
    struct Transferencia T;
	int OpPagamento;
}P2; 

int produto(){
	system("cls");
		printf ("Opções de doces e a tabela de preços: ");
		printf ("\n________________________________________________________________________________________________________________\n1.Alfenim-350g por R$10,00;--------2.Ambrosia- R$3,00;----------3.Baba de moça-R$1,00;--------4.Bananada-R$0,30;\n\n5.Bananinha-R$0,25;----------------6.Beijinho-R$1,00;-----------7.Bem-casado-R$1,50;----------8.Bolinho de chuva-R$0,75;\n\n9.Bolinho de estudante-R$1,00;----10.Bolo de fubá-R$15,00;------11.Bolo de milho-R$12,00;-----12.Bolo de rolo-17,00;\n\n13.Brigadeiro-R$1,50;-------------14.Cajuada-R$5,80;------------15.Cajuzinho-R$0,70;----------16.Doce Carolina-R$2,50;\n\n17.Cartola-R$5,00;----------------18.Chuvisco doce-R$3,00;------19.Cocada-R$2,50;-------------20.Cupulate-R$1,50;\n\n21.Cural-R$3,00;------------------22.Doce de abóbora-R$3,00;----23.Doce de leite-R$2,50;------24.Doce de espécie-R$1,50;\n\n25.Doce de mocotó-R$3,50;---------26.Doce de trigo-R$3,00;------27.Figada-R$4,60;-------------28.Filhó-R$1,50;\n\n29.Flan-R$3,00;-------------------30.Furrundum-R$2,50;----------31.Goiabada-R$5,50;-----------32.Maria-mole-R$1,25;\n\n33.Mariola-R$0,50;----------------34.Marmelada-R$3,75;----------35.Mousse de limão-R$4,00;----36.Mungunzá-R$4,00;\n\n37.Nega-maluca-R$15,00;-----------38.Nego-bom-R$0,35;-----------39.Olho de sogra-R$2,50;------40.Paçoquinha-R$0,50;\n\n41.Pão doce-R$0,75;---------------42.Bom-bocado-R$3,00;---------43.Papo de anjo-R$1,50;-------44.Pé de moleque-R$0,75;\n\n45.Pixé-R$1,50;-------------------46.Quebra queixo-R$1,50;------47.Queijadinha-R$3,00;--------48.Queque-R$2,00;\n\n49.Quindim-R$3,00;----------------50.Rapadura-R$8,00;-----------51.Romeu e Julieta-R$2,50;----52.Sagu-R$3,50;\n\n53.Tareco-R$1,50;-----------------54.Umbuzada-R$4,00;-----------55.Doce surpresa-R$1,50.\n________________________________________________________________________________________________________________");

		printf ("\nINFORME O CÓDIGO DO PRODUTO QUE VOCÊ DESEJA ADQUIRIR: ");
		fflush(stdin);
		scanf ("%d", &P1.CodProduto);
	
			switch(P1.CodProduto){
				case 1:
					P1.PrecoProduto= 10.00;
					P1.CodProduto=0;
					break;
			}
			switch(P1.CodProduto){
				case 2:
					P1.PrecoProduto=3.00;
					P1.CodProduto=1;
					break;
			}
			switch(P1.CodProduto){
				case 3:
					P1.PrecoProduto= 1.00;
					P1.CodProduto=2;
					break;
			}
			switch (P1.CodProduto){
				case 4:
					P1.PrecoProduto= 0.30;
					P1.CodProduto=3;
					break;
			}
			switch (P1.CodProduto){
				case 5:
					P1.PrecoProduto= 0.25;
					P1.CodProduto=4;
					break;
			}
			switch (P1.CodProduto){
				case 6:
					P1.PrecoProduto= 1.00;
					P1.CodProduto=5;
					break;
			}
			switch (P1.CodProduto){
				case 7:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=6;
					break;
			}
			switch (P1.CodProduto){
				case 8:
					P1.PrecoProduto= 0.75;
					P1.CodProduto=7;
					break;
			}
			switch (P1.CodProduto){
				case 9:
					P1.PrecoProduto= 1.00;
					P1.CodProduto=8;
					break;
			}
			switch (P1.CodProduto){
				case 10:
					P1.PrecoProduto= 15.00;
					P1.CodProduto=9;
					break;
			}
			switch (P1.CodProduto){
				case 11:
					P1.PrecoProduto= 12.00;
					P1.CodProduto=10;
					break;
			}
			switch (P1.CodProduto){
				case 12:
					P1.PrecoProduto= 17.00;
					P1.CodProduto=11;
					break;
			}
			switch (P1.CodProduto){
				case 13:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=12;
					break;
			}
			switch (P1.CodProduto){
				case 14:
					P1.PrecoProduto= 5.80;
					P1.CodProduto=13;
				break;
			}
			switch (P1.CodProduto){
				case 15:
					P1.PrecoProduto= 0.70;
					P1.CodProduto=14;
					break;
			}
			switch (P1.CodProduto){
				case 16:
					P1.PrecoProduto= 2.50;
					P1.CodProduto=15;
					break;
			}
			switch (P1.CodProduto){
				case 17:
					P1.PrecoProduto= 5.00;
					P1.CodProduto=16;
					break;
			}
			switch (P1.CodProduto){
				case 18:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=17;
					break;
			}
			switch (P1.CodProduto){
				case 19:
					P1.PrecoProduto= 2.50;
					P1.CodProduto=18;
					break;
			}
			switch (P1.CodProduto){
				case 20:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=19;
					break;
			}
			switch (P1.CodProduto){
				case 21:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=20;
					break;
			}
			switch (P1.CodProduto){
				case 22:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=21;
					break;
			}
			switch (P1.CodProduto){
				case 23:
					P1.PrecoProduto= 2.50;
					P1.CodProduto=22;
					break;
			}
			switch (P1.CodProduto){
				case 24:
						P1.PrecoProduto= 1.50;
						P1.CodProduto=23;
					break;
			}
			switch (P1.CodProduto){
				case 25:
						P1.PrecoProduto= 3.50;
						P1.CodProduto=24;
					break;
			}
				switch (P1.CodProduto){
				case 26:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=25;
						break;
			}
			switch (P1.CodProduto){
				case 27:
					P1.PrecoProduto= 4.60;
					P1.CodProduto=26;
					break;
			}
			switch (P1.CodProduto){
				case 28:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=27;
					break;
			}
			switch (P1.CodProduto){
				case 29:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=28;
					break;
			}
			switch (P1.CodProduto){
				case 30:
					P1.PrecoProduto= 2.50;
					P1.CodProduto=29;
					break;
			}
			switch (P1.CodProduto){
				case 31:
					P1.PrecoProduto= 5.50;
					P1.CodProduto=30;
					break;
			}
			switch (P1.CodProduto){
				case 32:
					P1.PrecoProduto= 1.25;
					P1.CodProduto=31;
					break;
			}
			switch (P1.CodProduto){
				case 33:
					P1.PrecoProduto= 0.50;
					P1.CodProduto=32;
				break;
			}
			switch (P1.CodProduto){
				case 34:
					P1.PrecoProduto= 3.75;
					P1.CodProduto=33;
					break;
			}
			switch (P1.CodProduto){
				case 35:
					P1.PrecoProduto= 4.00;
					P1.CodProduto=34;
					break;
			}
			switch (P1.CodProduto){
				case 36:
					P1.PrecoProduto= 4.00;
					P1.CodProduto=35;
					break;
			}
			switch (P1.CodProduto){
				case 37:
					P1.PrecoProduto= 15.00;
					P1.CodProduto=36;
						break;
			}
			switch (P1.CodProduto){
				case 38:
					P1.PrecoProduto= 0.35;
					P1.CodProduto=37;
					break;
			}
			switch (P1.CodProduto){
				case 39:
						P1.PrecoProduto= 2.50;
						P1.CodProduto=38;
					break;
			}
				switch (P1.CodProduto){
			case 40:
					P1.PrecoProduto= 0.50;
					P1.CodProduto=39;
					break;
				}
			switch (P1.CodProduto){
				case 41:
					P1.PrecoProduto= 0.75;
					P1.CodProduto=40;
					break;
			}
			switch (P1.CodProduto){
				case 42:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=41;
					break;
			}
			switch (P1.CodProduto){
				case 43:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=42;
					break;
			}
			switch (P1.CodProduto){
				case 44:
					P1.PrecoProduto= 0.75;
					P1.CodProduto=43;
					break;
			}
			switch (P1.CodProduto){
				case 45:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=44;
					break;
			}
			switch (P1.CodProduto){
				case 46:
						P1.PrecoProduto= 1.50;
						P1.CodProduto=45;
					break;
			}
			switch (P1.CodProduto){
				case 47:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=46;
					break;
			}
			switch (P1.CodProduto){
				case 48:
					P1.PrecoProduto= 2.00;
					P1.CodProduto=47;
					break;
			}
			switch (P1.CodProduto){
				case 49:
					P1.PrecoProduto= 3.00;
					P1.CodProduto=48;
					break;
			}
			switch (P1.CodProduto){
				case 50:
					P1.PrecoProduto= 8.00;
					P1.CodProduto=49;
					break;
			}
			switch (P1.CodProduto){
			case 51:
					P1.PrecoProduto= 2.50;
					P1.CodProduto=50;
					break;
			}
			switch (P1.CodProduto){
				case 52:
					P1.PrecoProduto= 3.50;
					P1.CodProduto=51;
					break;
			}	
			switch (P1.CodProduto){
				case 53:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=52;
					break;
			}
			switch (P1.CodProduto){
				case 54:
					P1.PrecoProduto= 4.00;
					P1.CodProduto=53;
					break;
			}
			switch (P1.CodProduto){
				case 55:
					P1.PrecoProduto= 1.50;
					P1.CodProduto=54;
					break;
			}
		
			printf ("\nQuantas unidades desse produto?: ");
			fflush(stdin);
			scanf ("%d", &P1.QuantidadeDeCadaTipo);
				 
			P1.ResultadoMult += P1.PrecoProduto * P1.QuantidadeDeCadaTipo;


			printf ("\nO valor da compra é %.1f", P1.ResultadoMult);
				
			printf ("\nVocê deseja realizar outra compra? \n1-SIM\n2-NÃO\n");
			scanf ("%d", &P1.op);
				
			C1.dados= fopen("dados.txt","a");
			fprintf(C1.dados,"\n|Compra Realizada: %s \\ Quantidade do Produto: %d \\ O valor da compra foi: %.1f reais ", P1.produto[P1.CodProduto], P1.QuantidadeDeCadaTipo,P1.ResultadoMult);
				
			return 0;
		}

int Menu(){
	system("cls");
	char dados[TAM], anexo[TAM];
	int opadmin;
	printf("\n Escolha uma das opções abaixo: \n 1- Ver informações de cadastro\n 2- Fazer novo pedido\n 3- Sair\n");
	scanf("%d", &C1.Opmenu);
	
	switch(C1.Opmenu){
		case 1:
			printf("\n Para ver as informações de cadastro é necessário ter o login e senha do administrador\n Login: ");
			fflush(stdin);
			gets(C1.login);
			
			printf("\n Senha: ");
			fflush(stdin);
			scanf("%d", &C1.senhaadm);
			
			if(C1.senhaadm!=1234){
				printf("\n A senha que você digitou está incorrteta");
				exit(0);
			}
			else{
				system("cls");
			C1.dados=fopen("dados.txt","r");
				while (fgets(dados,1000,C1.dados) !=NULL){
					printf("%s\n", dados);
				}
				system("pause");
				fclose(C1.dados);
				printf("\n 1- Anexar algo \n 2- Voltar ao menu \n 3- Sair: ");
				fflush(stdin);
				scanf("%d", &opadmin);
				
				switch(opadmin){
					case 1:
						C1.dados=fopen("dados.txt","a");
							printf("\n Digite algo que você queira anexar ao arquivo: ");
							fflush(stdin);
							gets(anexo);
							fprintf(C1.dados,"\n %s", anexo);
							fclose(C1.dados);
							Menu();
							break;
				
					case 2:
						Menu();
						break;
					
					case 3:
						exit(0);
						break;
					
					default:
						printf("\n ERROR");
						exit(0);
						break;
				}
			}
			break;
		
		case 2:
			produto();
			break;
		
		case 3:
			exit(0);
			break;
		
		default:
			printf("\n ERROR");
			exit(0);
			break;
	}
}

int cadastros(){	
	printf("\n Olá! Seja bem-vindo à BONBONCHOCOLAT!Por favor digite uma opção abaixo de acordo com seu desejo \n\n____________________________________________________________\n\n 1- Tenho cadastro  2- Quero me cadastrar 3- Sair\n\n____________________________________________________________\n:");
	scanf("%d", &C1.opcadastro);
	
	system("cls");
	switch(C1.opcadastro){
		case 1:		
			printf("\n Digite o nome do usuário:");
			fflush(stdin);
			scanf("%s", &C1.Nome);
			
			printf("\n Digite sua senha: ");
			fflush(stdin);
			scanf("%s", &C1.Senha);
			
			printf("\n Digite seu código de identificação (ID): ");
			fflush(stdin);
			scanf("%d", &C1.id);
			
			system("cls");
			
			Menu();
				break;
				
		case 2:
			
				C1.idinicial = fopen("ids.txt","r");
				fscanf(C1.idinicial,"%d", &C1.numid);
				
				C1.id=C1.numid+1;
				fclose(C1.idinicial);
			
				C1.idinicial = fopen("ids.txt","w");
	
				fprintf(C1.idinicial,"%d", C1.id);
		
				fclose(C1.idinicial);
		
				C1.dados= fopen("dados.txt","a");
	
				printf("\n Olá! Seja bem-vindo à BONBONCHOCOLAT!\n Para iniciarmos o cadastro, serão necessárias algumas informações \n Informe seu nome completo: ");
				fflush(stdin);
				gets(C1.Nome);
		
				printf("\n Informe sua data de nascimento: ");
				fflush(stdin);
				gets(C1.DataNasc);
		
				printf("\n Informe o número do seu CPF: ");
				fflush(stdin);
				scanf("%s", &C1.CPF);
				
				while(strlen(C1.CPF)!=11){
					printf("\n CPF INVÁLIDO\n Digite novamente: ");
					fflush(stdin);
					scanf("%s", &C1.CPF);
				}
		
		
				printf("\n Digite um E-MAIL válido: ");
				fflush(stdin);
				gets(C1.Email);
						
						
				printf("\n Digite uma senha de 8 caracteres: ");
				fflush(stdin);
				gets(C1.Senha);
							
					printf("\n Confirme sua senha: ");
					fflush(stdin);
					gets(C1.ConfirmacaoSenha);
						
					while (strcmp(C1.Senha,C1.ConfirmacaoSenha)!=0){
						printf("\n SENHAS DIFERENTES \n Digite novamente: ");
						fflush(stdin);
						gets(C1.Senha);
						
						printf("\n Confirme sua senha: ");
						fflush(stdin);
						gets(C1.ConfirmacaoSenha);
					}
						
					
					system("cls");
					
					printf("\n O código da sua conta é: %d \n Guarde-o com cuidado para acessar novamente o site\n", C1.id);
					
					system("pause");
						
					fprintf(C1.dados, "\n---------------------------CLIENTE %d---------------------------\n| Nome Do Usuário: %s\n| Data de Nascimento:%s\n| Número de CPF: %s\n| E-MAIL: %s\n| Senha: %s\n------------------------------------------------------",C1.id ,C1.Nome,C1.DataNasc,C1.CPF,C1.Email,C1.Senha);
						
					break;	
					
				case 3:
					exit(0);
					break;	
							
				default:
					printf("\n ERROR");
					exit(0);
					break;
	} 
	
}

int pagamentos(){
		printf("\n Escolha uma forma de pagamento\n Cartao de credito - 1\n Boleto - 2\n Tranferencia Bancaria - 3 \n: ");
	scanf ("%d", &P2.OpPagamento);	
	
	switch (P2.OpPagamento){
		case 1 : 
		C1.dados = fopen("dados.txt","a"); 
			fprintf(C1.dados,"\n------------------------------------------------\n CLIENTE %d \n PAGAMENTO -> CARTÃO DE CRÉDITO\n------------------------------------------------", C1.id);
			printf ("\n Informe o nome do titular: ");
			fflush(stdin);
			gets(P2.C2.Nome);
		           fprintf(C1.dados,"\n_____________________________________\n| Nome do titular: %s",  P2.C2.Nome);
		           
			printf ("\n Informe o sobrenome do titular: ");
		    fflush(stdin);
	      	gets(P2.C2.Sobrenome);
		          fprintf (C1.dados,"\n| Sobrenome do titular: %s", P2.C2.Sobrenome);
		
		  	printf ("\n Informe o número do seu cartao : ");
		    fflush(stdin);
	       	scanf("%i",P2.C2.numero);
	        fprintf (C1.dados,"\n| Número do cartao: %i", P2.C2.numero); 
	       	
		    printf ("\n Informe o CPF do titular do Cartao: ");
		    fflush(stdin);
		    scanf("%i",&P2.C2.CPFtitular);
		    fprintf (C1.dados,"\n| CPF do titular: %i", P2.C2.CPFtitular);

		 
		 	printf ("\n Informe a data de vencimento : ");
	    	fflush(stdin);
	        gets(P2.C2.DataNasc);
	     	 fprintf (C1.dados,"\n| Data de vencimento: %i", P2.C2.DataNasc);

		 
		 	printf ("\n Informe o código de segurança do seu cartao : ");
		    fflush(stdin);
	       	scanf("%i",P2.C2.CodigoSeguranca);
            fprintf (C1.dados,"\n| Código de segurança do cartao: %i", P2.C2.CodigoSeguranca);
			fclose(C1.dados);
	       	
	       	break;
	       	
	  	case 2 :
	  		C1.dados = fopen("dados.txt","a"); 
	  		fprintf(C1.dados,"\n----------------------------------\n CLIENTE %d \n PAGAMENTO -> BOLETO\n----------------------------------", C1.id);
	       	printf ("\n Informe seu nome e seu sobrenome: ");
	        fflush(stdin);
	        gets(P2.B.NomeSobrenome);
	      	fprintf (C1.dados,"\n__________________________________\n| Nome completo: %s", P2.B.NomeSobrenome);

		
			printf ("\n Informe seu CPF: ");
			fflush(stdin);
			scanf ("%i",&P2.B.CPF);
                 fprintf (C1.dados,"\n| CPF = %i", P2.B.CPF);

			printf ("\n Informe seu sua rua ou avenida: ");
			fflush(stdin);
			gets(P2.B.RuaAv);
		       fprintf (C1.dados,"\n| Rua ou avenida: %s", P2.B.RuaAv);

		
			printf ("\n acresente um complemento: ");
		    fflush(stdin);
	      	gets(P2.B.Complemento);
	         fprintf (C1.dados,"\n| Complemento: %s", P2.B.Complemento);

	      	
			printf ("\n Informe o numero: ");
			fflush(stdin);
			scanf("%i",&P2.B.Numero);
			fprintf (C1.dados,"\n| Número: %i", P2.B.Numero);

		
			printf ("\n Informe seu bairro: ");
			fflush(stdin);
			gets(P2.B.Bairro);
	             fprintf (C1.dados,"\n| Bairro: %s", P2.B.Bairro);

		
			printf ("\n Informe sua cidade: ");
			fflush(stdin);
			gets(P2.B.Cidade);
			fprintf (C1.dados,"\n| Cidade: %s", P2.B.Cidade);

			printf ("\n Informe seu estado: ");
		    fflush(stdin);
	      	gets(P2.B.Estado);
	      	fprintf (C1.dados,"\n| Estado: %s", P2.B.Estado);
			fclose(C1.dados);
	      	  
	   	  break;
	      	  
	   case 3: 
	   C1.dados = fopen("dados.txt","a"); 
	   		fprintf(C1.dados,"\n-----------------------------------------\n CLIENTE %d \n PAGAMENTO -> TRANFERÊNCIA BANCÁRIA\n------------------------------------------", C1.id);
	   		printf ("\n Informe seu nome: ");
			fflush(stdin);
			gets(P2.T.Nome);
			fprintf (C1.dados,"\n_____________________________________________\n| Nome: %s ", P2.T.Nome);
		 
		 	printf ("\n Informe o numero da sua agência bancaria: ");
			fflush(stdin);
			scanf("%i", &P2.T.Agencia);
			fprintf (C1.dados,"\n| Número da agência bancaria: %d", P2.T.Agencia);
		
		 	printf ("\n Informe o numero da  conta: ");
			fflush(stdin);
			scanf("%i", &P2.T.Conta);
			fprintf (C1.dados,"\n| Número da conta: %d", P2.T.Conta);
			fclose(C1.dados);
			  break;
			  
		default:
		system("cls");
		printf("ERRO");
		exit(0);
		break;	  
		}system("cls");
		printf("\n O valor total da compra é R$%.1f\n COMPRA REALIZADA COM SUCESSO! A SUA ENCOMENDA CHEGA EM ATÉ 15 DIAS", P1.ResultadoMult);
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	cadastros();
	
	do {
		produto();
	}while(P1.op == 1);
	
	system("cls");
	
	pagamentos();
	
	return 0;
}
