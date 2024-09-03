#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define max 5
#include <string.h>
#include "Source.h";




int lervalores(int *a, int n) {

	/*printf("introduza os valores:\n");*/
	for (int i = 0; i <= max; i++) {
		scanf("%d", &a[i]);
	}
	return a;
}
int mostar(int *a, int n) {
	for (int i = 0; i <= max; i++) {

		printf("\n [%d]: %d",i, a[i]);
	}
	return a;
}
int valoresrepitidos(int* a, int* b, int *vet) {

	int r =0;
	for (int i = 0; i <= r; i++) {

		if (a[i] == b[i]) {

			int aux = a[i];
			vet[r] = aux;
			printf("\n [%d]: %d", r, a[r]);
			r++;
		}
	}
	return vet[r];
}
char convertaocontrario(int tam, char* str) {
	
		for (int i = tam - 1; i >= 0; i--)
		{
			printf("%c", str[i]);
		}
		char c;
		for (int i = 0; i < tam / 2; i++)
		{
			c = str[i];
			str[i] = str[tam - i - 1];
			str[tam - i - 1] = c;
		}
		return str;
	}
char procurar(char* s, char carct) {
		char *ap = s;
		int soma = 0,i;
		printf("\n introduza um carctere para ser procurado :");
		scanf("%s", &carct);
		for (i = 0; ap[i] != '\0'; i++) {
			
			if (ap[i] == carct)
			{
				soma++;
			}
		}
		return soma;
}
void isnull(char* str) {
	int i = 0;
	/*str = NULL;*/
	if (strlen(str) == 0)
		printf("\n nao esta vazia");
	else {
		printf("\n tem elementos");
	}
}
float notas(int *r) {
	int i;
	for (i = 0; i <= 10 || r[i] < 0; i++) {
		scanf("%d", &r[i]);
	}
	
}
char numeromasculas(char* b)
{
	int i, soma_minus = 0, soma2 = 0;
	for (i = 0; b[i] != '\0'; i++) {

		if (b[i] >= 'A' && b[i] <= 'Z')
		{
			soma2++;
		}
		if (b[i] >='a' && b[i] <='z')
		{
			soma_minus++;
		}
	}
	return printf("O numero de letras maisculas: %d | Numero de letras minusculas: %d", soma2, soma_minus);
}
void lercractere(char* a)
{
	int i = 0;
	printf("introduza um caracter(para terminar introduza '#'):\n");
	
	for (i = 0; a[i] != '\0' || a[i] != '#' || i<10; i++) {

		scanf("%c", &a[i]);
	}

}
// teste
int registradados(Thotel *a) {
	int n = 1, i=0;
	char op[5];
	do {
		printf("introduza os dados de uma nova reseva: \n");
		fgets(a[i].nome, 50, stdin);
		printf("Nome:");
		gets(a[i].nome);
		fgets(a[i].email, 60, stdin);
		printf("Email:");
		gets(a[i].email);
		printf(" checkin:");
		scanf("%d/%d/%d", &a[i].checkin.dia, &a[i].checkin.mes, &a[i].checkin.ano);
		printf("checkout:");
		scanf("%d/%d/%d", &a[i].checkout.dia, &a[i].checkout.mes, &a[i].checkout.ano);

		printf("deseja introduzir outra reseva ? S- sim N- nao \n");
		scanf("%c", &op);
		if (op == 's' || op == 'S') {
			i++;
			n++;
		}
		
	} while (op == 'n' || op == 'N');
	return n;
}
void mostar1(Thotel  a) {


		printf("introduza os dados de uma nova reseva: \n");
		printf("\n Nome: %s", a.nome);
		printf("\n Email: %s", a.email);
		printf("\n checkin:%d/%d/%d", a.checkin.dia, a.checkin.mes, a.checkin.ano);
		printf("\n checkout:%d/%d/%d", a.checkout.dia, a.checkout.mes, a.checkout.ano);


}
void listarresevas(Thotel * a, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("introduza os dados de uma nova reseva: \n");
		printf("\n Nome: %s", a[i].nome);
		printf("\n Email: %s", a[i].email);
		printf("\n checkin:%d/%d/%d", a[i].checkin.dia, a[i].checkin.mes, a[i].checkin.ano);
		printf("\n checkout:%d/%d/%d", a[i].checkout.dia, a[i].checkout.mes, a[i].checkout.ano);

	}
	
}
int  menureseva() {

	int op;
	printf("\n Hotel Maraja - Reservas \n");
	printf("\n 1 -  Registar reseva");
	printf("\n 2 -  Mostrar reseva");
	printf("\n 3 -  Pesquisar reseva por email");
	printf("\n 0 -	Sair\n");
	scanf("%d", &op);
	return op;
}
void pesquisareseva(Thotel * a, int n) {
	int i;
	char email2[50];
	printf("\n Qual o email da reseva deseja mostra?");
	scanf("%s", &email2);
	for (i = 0; i < n; i++) {
		if (strstr(a[i].email, email2) != NULL)
			mostar1(a[i]);

	}
}

