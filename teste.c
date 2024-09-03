#include <stdio.h>
#include <string.h>
#include"Source.h"
#define _CRT_SECURE_NO_WARNINGS
#define max 50






main()
{

	Thotel an[max];
	int n = 0, s = 0;
	int op = 0;
	do {
		op = menureseva();
		switch (op)
		{
		case 1:
			if (n < max) {
				n = registradados(an);
				s = n + s;
			}
			else {
				printf("Impossivel inserir novas resevas!\n");
			}
			break;
		case 2:
			printf("valor de s : %d", s);
			listarresevas(an, s);
			break;
		case 3:
			pesquisareseva(an, s);
			break;
		default:
			printf("aplicacao terminada..");
			break;
		}
	} while (op != 0);

}