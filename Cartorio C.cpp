#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> //biblioteca de alocação de texto por região
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
  	 printf("não foi possivel abrir o arquivo, não localizado. \n");

  }
  
    while(fgets(conteudo, 200, file) !=NULL)
    
    {
    	printf("\n Essas são as informações do usuario:");
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
	
    printf("## Cartório da EBAC ## \n\n"); // inicio do menu
   	printf("escolha a opção desejada do menu: \n\n");
    printf("\t1 - Registrar nomes\n");
    printf("\t2 - Consultar nomes\n");
    printf("\t3 - Deletar nomes\n\n");
    printf("Opção:"); //fim do menu
 	
	
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
  	    
 
  	    
  	    default:
  	    printf("Essa opção não esta disponivel\n"); 
    	system("pause");
  	    break;
    }
 }
}

		  
		    	    



    
  
 
    
    
	


