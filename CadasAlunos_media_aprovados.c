// Criado por Carlos Miranda Henrique Miranda Esteves e João Renan Santanna Lopes;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Pista(char *name, float *note, float *midia){
	int counter;
	
	printf("NOME: %s",name);
	
	
	
for(counter=0;counter<3;counter++){
	
	printf("NOTA: %.2f\n",note[counter]);
	}
   
    printf("MEDIA: %.2f\n", (*midia) );
	

	
}


void Aprove(char *nome, float *media){
	

if((*media)>=7){
	
printf("NOME:%s",nome);   ;printf("NOTA:%f\n\n",(*media)); 	

}


}

void Cadastro();
void Media();

void main() {
	
struct{
	
	int cad;
	char nome[50];
	float notas[3];
	float media;
}aluno[15];

	int p=0;
	int comando;
	int escolha=0;
	int count=0;
	int l=0;
do{
	
	printf("NOSSA ESCOLA\n");
	printf("1-CADASTRAR\n");
	printf("2-CALCULAR MEDIA\n");
	printf("3-GERAR LISTA\n");
	printf("4-APROVADOS\n");
	printf("5-SAIR\n");
	printf("COMANDO:");
	scanf("%i",&comando);
	
switch(comando){
	
	case 1:
	if(p<15){
	count=0;	
	while(aluno[count].cad==1){
		
	count++;	
	}	
	
	aluno[count].cad=1;
	printf("ALUNO CADASTRADO, SUA MATRICULA EH: %i\n",count);	
	p++;
	Cadastro(&aluno[count].nome, &aluno[count].notas, &aluno[count].media);	
	}
	else
	printf("TODOS OS ESPACOS ESTAO CHEIOS\n");	
	break;
	
	
	case 2:
	printf("\n");
	printf("DIGITE O CADASTRO DO ALUNO:");
	scanf("%i",&escolha);
	if(escolha<p){
		
	Media(&aluno[escolha].media, &aluno[escolha].notas);
	
	printf("A media deste aluno eh:%.2f\n",aluno[escolha].media);	
	}
	else
	printf("ERROR, espaco nao cadastrado\n");	
	break;
	
	case 3:
	printf("\n");
	printf("DIGITE O CADASTRO DO ALUNO:");
	scanf("%i",&escolha);
	if(escolha<p){
		

	Pista(&aluno[escolha].nome , &aluno[escolha].notas, &aluno[escolha].media);	
	
	
	}
	else
	printf("ERROR, espaco nao cadastrado\n");	
	break;
	
	case 4:
	l=0;
	while(l<p){	
	Aprove(&aluno[l].nome, &aluno[l].media);	
	l++;
		
	}	
		
	break;
	
	case 5:
	exit(0);
	break;
	
	
	
	
}

system("pause");
system("cls");

}while(comando!=5);



}

void Cadastro(char *nome, float *notas, float *media){
	
	int contador;
	printf("\n\n");
	printf("Por favor, insira os dados do aluno\n");
	fflush(stdin);
	printf("NOME: "); fgets(nome,50,stdin);
	printf("Insira as notas:\n");
	
for(contador=0;contador<3;contador++){
	
	printf("Digite a nota referente a %i avaliacao: ",contador+1);
	scanf("%f",&notas[contador]);
}
    printf("Notas cadastradas com sucesso!\n");	
}



void Media(float *calculo, float *notas){
	
	int contador;
    float soma;
for(contador=0;contador<3;contador++){
	
	soma=soma+notas[contador];
}

(*calculo)=soma/3;
}



