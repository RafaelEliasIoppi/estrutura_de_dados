#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct{
	char nome[150];
	char matricula[15];
	float nota1, nota2, nota3, nota4;
	int faltas;
} aluno;

	


//void leitura(aluno vet[MAX], int i){
 void cadastra (aluno *a)  {
	printf("Digite o nome do aluno: ");	
	gets((*a).nome);
	printf("Digite o matricula do aluno: ");	
	gets((*a).matricula);
	printf("Digite a nota 1 do aluno: ");
	scanf("%f",&(*a).nota1); getchar();
	printf("Digite a nota 2 do aluno: ");
	scanf("%f",&(*a).nota2); getchar();
	printf("Digite a nota 3 do aluno: ");
	scanf("%f",&(*a).nota3); getchar();
	printf("Digite a nota 4 do aluno: ");
	scanf("%f",&(*a).nota4); getchar();
	printf("Digite o numero de faltas do aluno: ");
	scanf("%d",&(*a).faltas); getchar();
	
	
}
float media(aluno a){
	float media;
	media = (a.nota1 + a.nota2 + a.nota3 + a.nota4) / 2;
	return media;
	
	
}

void imprime(aluno  a){
	
	printf("\n-----------------------------------------\n");
	printf("Nome: %s\t Matricula: %d\n",a.nome, a.matricula);
	printf("Nota 1: %.2f Nota 2: %.2f \nNota 3: %.2f Nota 4: %.2f\n",a.nota1, a.nota2, a.nota3, a.nota4);
	printf("A media final eh: %.2f", media(a));
	printf("\n-----------------------------------------\n");
}

int main(void) {
	int i, num;
	aluno alunos[MAX];

    for (i = 0; i < MAX; i++)
        cadastra(&alunos[i]); 

    do {
        printf("\nDigite um numero de 1 a %d (ou 0 para sair): ", MAX);
        scanf("%d", &num);
        if (num >= 1 && num <= MAX)
            imprime(alunos[num - 1]);
        else if (num != 0)
            printf("Numero invalido!\n");
    } while (num != 0);

    return 0;
}


