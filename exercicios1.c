#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	int idade;
	char telefone[20];
	char celular[20];
	char endereco[100];
	char nascimento[20];
} contato;

contato vet[3];

int main(void) {
	
	int i;
	for(i = 0; i < 3; i++){
		printf("Digite o nome do contato %d: ",i+1);	
		gets(vet[i].nome);
		printf("Digite a idade: ",i);
		scanf("%d",&vet[i].idade); getchar();
		printf("Numero do telefone: ");
		gets(vet[i].telefone);
		printf("Numero do celular: ");
		gets(vet[i].celular);
		printf("Digite o endereco: ");
		gets(vet[i].endereco);
		printf("Digite a data de nascimento: ");
		gets(vet[i].nascimento);
	} 
	for( i = 0; i < 3; i++){
		printf("\n--------------------------------\n");
		printf("Nome: %s\t Idade: %d anos\n",vet[i].nome, vet[i].idade);
		printf("Numero telefone: %s \tCelular:%s\n",vet[i].telefone, vet[i].celular);
		printf("Endereco: %s\t Data de nascimento:: %s \n",vet[i].endereco, vet[i].nascimento);
		printf("-----------------------------------\n");
	
	}
	
}
