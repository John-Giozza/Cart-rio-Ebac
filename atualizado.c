#include <stdio.h>  //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuida das string





int registro ()
{
	  char arquivo[40];
	  char cpf[40];
	  char nome[40];
	  char sobrenome[40];
	  char cargo[40];
	  
	  printf("Digite o cpf a ser cadastrado:");
	  scanf("%s" , cpf);
	  
	  strcpy(arquivo, cpf);//Responsável por copiar valores
	  
	  FILE *file; //cria arquivo
	  file = fopen(arquivo, "w"); // cria arquivo
	  fprintf(file,cpf); //salva o valor da variável
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
	 	printf("não foi possível abrir o arquivo, não localizado!.\n");
	 }
	 
	 while(fgets(conteudo,200,file) !=NULL)
	 {
	 	printf("\nEssas são informações do usuário:");
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
		printf("cpf não existe\n");
		system("pause");
		
	}
	
	
	
	}
int main ()
    {
	 int opcao=0;//Definindo variáveis 
	 int laco=1;
	 
	  
	  for(laco=1;laco=1;)
	 {
	 
	    system("cls");
	 
	 
	 setlocale(LC_ALL, "Portuguese");
	 
	 
	 printf("Cartório da Ebac\n\n");// inicio do menu
	 printf("Escolha a opção desejada do menu \n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n");
	 printf("Opção:"); // fim do menu
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
    printf("Essa opçãp não está disponível \n");
    system("pause");
    break;
      	
	  }
}
}
	

