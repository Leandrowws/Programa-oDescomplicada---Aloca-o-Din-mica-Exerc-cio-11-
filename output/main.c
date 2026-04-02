#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[20];
    int ano;
} aluno;

int main()
{
    int num;
    scanf("%d", &num);

    aluno *vetorAluno = (aluno*)malloc(sizeof(aluno)*num);

    for(int i = 0; i < num; i++) {
        printf("Digite a matricula: ");
        scanf("%d", &vetorAluno[i].matricula);
        getchar();
        printf("Digite o sobrenome: ");
        fgets(vetorAluno[i].sobrenome, sizeof(vetorAluno[i].sobrenome), stdin);
        printf("Digite o ano de nascimento: ");
        scanf("%d", &vetorAluno[i].ano);
    }

    for(int i = 0; i < num; i++) {
        printf("\nMatricula %d = %d\n", i+1, vetorAluno[i].matricula);
        printf("Sobrenome %d = %s", i+1, vetorAluno[i].sobrenome);
        printf("Ano de Nascimento %d = %d\n\n\n", i+1, vetorAluno[i].ano);
    }

    free(vetorAluno);
    return 0;
}