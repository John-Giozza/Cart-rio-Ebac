#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuida das string





int registro ()
{
	  char arquivo[40];
	  char cpf[40];
	  char nome[40];
	  char sobrenome[40];
	  char cargo[40];
	  
	  printf("Digite o cpf a ser cadastrado:");
	  scanf("%s" , cpf);
	  
	  strcpy(arquivo, cpf);//Respons�vel por copiar valores
	  
	  FILE *file; //cria arquivo
	  file = fopen(arquivo, "w"); // cria arquivo
	  fprintf(file,cpf); //salva o valor da vari�vel
	  fclose(file); //fecha o arquivo
	  
	  file = fopen(arquivo, "a");
	  fprintf(file,",");
	  fclose(file);
	  
	  printf("Digite o nome a ser cadatrado:");
	  scanf("%s",nome);
	  
	  file = fopen(arquivo,"a");
	  fprintf(file,nome);
	  fclose(file);
	  
	  file = fopen(arquivo, "a");
	  fprintf(file,",");
	  fclose(file);
	  
	  printf("Digite o sobrenome a ser cadastrado");
	  scanf("%s",sobrenome);
	  
	  file = fopen(arquivo,"a");
	  fprintf(file,sobrenome);
	  fclose(file);
	  
	  file = fopen(arquivo, "a");
	  fprintf(file,",");
	  fclose(file);
	  
	  
	  
	  
	  printf("Digite o cargo a ser cadastrado");
	  scanf("%s", cargo);
	  
	  file = fopen(arquivo, "a");
	  fprintf(file,cargo);
	  fclose(file);
	  
	  system("pause");
	  
	  
	  
	  
	  
	  
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	 char cpf[40];
	 char conteudo[200];
	 
	 printf("Digite o cpf a ser consultado;");
	 scanf("%s",cpf);
	 
	 FILE*file;
	 file = fopen(cpf,"r");
	 
	 if(file==NULL)
	 {
	 	printf("n�o foi poss�vel abrir o arquivo, n�o localizado!.\n");
	 }
	 
	 while(fgets(conteudo,200,file) !=NULL)
	 {
	 	printf("\nEssas s�o informa��es do usu�rio:");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 }
	 
	 system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o cpf a ser deletador");
	scanf("%s,cpf");
	
	remove(cpf);
	
	FILE * file;
	file = fopen(cpf,"r");
	
	if(file ==NULL);
	{
		printf("cpf n�o existe\n");
		system("pause");
		
	}
	
	
	
	}
int main ()
    {
	 int opcao=0;//Definindo vari�veis 
	 int laco=1;
	 
	  
	  for(laco=1;laco=1;)
	 {
	 
	    system("cls");
	 
	 
	 setlocale(LC_ALL, "Portuguese");
	 
	 
	 printf("Cart�rio da Ebac\n\n");// inicio do menu
	 printf("Escolha a op��o desejada do menu \n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n");
	 printf("Op��o:"); // fim do menu
	 scanf("%d" , &opcao);
	 
	 system("cls");
	 
	 switch(opcao)
      {
     case 1 :
	registro();
	break;
	
	case 2 :
	consulta();
	break;
	
	case 3 :
	deletar();
	break;
	
	
	default :
    printf("Essa op��p n�o est� dispon�vel \n");
    system("pause");
    break;
      	
	  }
}
}
	

