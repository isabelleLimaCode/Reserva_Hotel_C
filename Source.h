#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define max 5
#include <string.h>
typedef struct {
	int dia;
	int mes;
	int ano;

}Tdata;
typedef struct {
	char nome[100];
	char email[60];
	Tdata checkin;
	Tdata checkout;
}Thotel;


int lervalores(int* a, int n);// LER VALORES VETOR INTEIRO
int mostar(int* a, int n);// MOSTRAR VETOR INTEIROS
int valoresrepitidos(int* a, int* b, int *vet);// VALORES REPITIDOS NO VETOR INTEIROS
char convertaocontrario(int tam, char* str);// CONVETER UM VETOR DE CHAR AO CONTRARIO
char procurar(char* s, char carct);// PROCURAR QUANTAS VEZES SE REPETE A LETRA EM UM VETOR
void isnull(char* str); // VERIFICAR SE A ARRAY ESTA VAZIA
float notas(int* r); // LER NOTAS VALORES FLOATS
char numeromasculas(char* b); // CONTA O NUMERO DE LETRAS MAUSCULAS E MINUSCULAS
void lercractere(char* a); // INTRODUZIR VARIOS CARACTERES ATE INSEIRI #
// teste
int registradados(Thotel *a);
void listarresevas(Thotel* a, int n);
int  menureseva();
void mostar1(Thotel  a);
void pesquisareseva(Thotel* a, int n);