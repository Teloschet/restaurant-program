// Autor: Christopher Arthur

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int codigo, disponivel, totEnt, totSai;

	disponivel = 40;
	totEnt = totSai = 0;

	do {
		system("cls");
		printf("Menu de opcoes \n");
		printf("0 - Encerrar programa \n");
		printf("1 - Entrando uma pessoa no restaurante \n");
		printf("2 - Saindo uma pessoa do restaurante \n");
		printf("3 - Mostrando vagas disponiveis no restaurante \n");
		printf("4 - Mostrando o total de pessoas que entraram no restaurante \n");
		printf("5 - Mostrando o total de pessoas que sairam do restaurante \n");
		printf("Escolha uma opcao: ");
		scanf_s("%d", &codigo);

		switch (codigo) {
		case 0:
			printf("Encerrando o programa \n");
			break;
		case 1:
			if (disponivel > 0) {
				printf("Entrando uma pessoa no restaurante \n");
				totEnt++;
				disponivel--;
			}
			else {
				printf("Aguarde, restaurante esta lotado \n");
			}
			break;
		case 2:
			if (disponivel == 40) {
				printf("Restaurante esta vazio \n");
			}
			else {
				printf("Saindo uma pessoa do restaurante \n");
				disponivel++;
				totSai++;
			}
			break;
		case 3:		
			printf("Existem %d vagas disponiveis \n", disponivel);
			break;
		case 4:
			printf("Entraram %d pessoas no restaurante \n", totEnt);
			break;
		case 5:
			printf("Sairam %d pessoas do restaurante \n", totSai);
			break;
		default:
			printf("Opcao invalida \n");
			break;
		}
		system("pause");
	}

	while (codigo != 0);

    return 0;
}

