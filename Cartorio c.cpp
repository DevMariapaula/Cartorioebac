#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca responsavel por cuidar das string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("digite o cpf a ser cadastrado:");
	scanf("%s" , cpf);
	
	strcpy(arquivo,cpf); // responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); // salvo o valor do arquivo
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s" , nome);
	
	file= fopen (arquivo , "a");
	fprintf(file,nome);
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s" , sobrenome);
	
	file= fopen (arquivo , "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	
	printf("digite o cargo a ser cadastrado:");
	scanf("%s", cargo);
	
	file= fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
}




int consulta()

{
	
setlocale(LC_ALL, "Portuguese");  //definindo linguagem

  char cpf[40];
  char conteudo[200];
  
  printf("digite o cpf a ser consultado:\n");
  scanf("%s", cpf);
  
  FILE *file;
  file= fopen(cpf, "r");
  
  if(file== NULL)
  {
  	 printf("n�o foi possivel abrir o arquivo, n�o localizado. \n");

  }
  
    while(fgets(conteudo, 200, file) !=NULL)
    
    {
    	printf("\n Essas s�o as informa��es do usuario:");
    	printf("%s", conteudo);
    	printf("\n\n");
    	
	}
	 system ("pause");
}

int deletar()
{
 printf("voce escolheu deletar nomes!\n");
 system("pause");	
}

int main ()

 {
 
 
		    
    int opcao=0;// definindo variaveis
	int laco=1;	
	
	
    for(laco=1;laco=1;)

   
{

 	 
		system("cls");
	
	    setlocale(LC_ALL, "Portuguese");  //definindo linguagem
	
    printf("## Cart�rio da EBAC ## \n\n"); // inicio do menu
   	printf("escolha a op��o desejada do menu: \n\n");
    printf("\t1 - Registrar nomes\n");
    printf("\t2 - Consultar nomes\n");
    printf("\t3 - Deletar nomes\n\n");
    printf("\t4 - Sair do sistema\n\n");
    printf("Op��o:"); //fim do menu
 	
	
    scanf("%d" ,&opcao); // armazenando a ecolha do usuario
	
    system("cls");
    
    switch(opcao)

   {


	
    	case 1:
	    registro();
		break;
		
		case 2:
		consulta();
    	break; 
    	
    	case 3:
        deletar();
  	    break;
  	    
  	    case 4:
  	    printf("Obrigado por utilizar o sistema!\n");
  	    return 0;
  	    break;
 
  	    
  	    default:
  	    printf("Essa op��o n�o esta disponivel\n"); 
    	system("pause");
  	    break;
    }
 }
}

		  
		    	    



    
  
 
    
    
	


