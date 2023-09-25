#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	char telefone[20];
	int idade;
	char contato[50];
} aluno;


 
 void cadastra(aluno vet[],int i){
 	printf("Digite o nome do aluno: ");	
	gets(vet[i].nome);
	printf("Digite a idade do aluno: ");
	scanf("%d",&vet[i].idade); getchar();
	printf("Nome do Contato de emergencia: ");
	gets(vet[i].contato);
	printf("Digite o Telefone do Contato: ");
	gets(vet[i].telefone);
 }
 
 void imprime(aluno vet[],int i){
 	printf("\n-------------------------------------------\n");
	printf("Nome: %s\t Idade: %d anos\n",vet[i].nome, vet[i].idade);
	printf("Contato: %s \tTelefone:%s\n",vet[i].contato, vet[i].telefone);
	printf("\n-------------------------------------------\n");
}

int main(void) {
	int i,num;
	 aluno vet[5];
	for(i = 0;i < 5 ;i++){
		cadastra(vet, i);
	} 
	
	do{
		printf("\nDigite um numero de 1 a 5 ou digite 0 para sair\n");
		scanf("%d",&num);
		if(num == 0) printf("\nPrograma Encerrado\n");
		else imprime(vet,num-1);
	}while(num);
	
}
