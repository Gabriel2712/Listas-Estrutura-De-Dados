#ifndef EX3_H_INCLUDED
#define EX3_H_INCLUDED

int **alocarMemoriaMatriz(int l, int c);
int **somaMatrizes(int **m1, int **m2, int l, int c);
int **subtraiMatrizes(int **m1, int **m2, int l, int c);
void printaMatriz(int **matriz, int l, int c);
void desalocarMemoriaMatriz(int **p, int l);

#endif // EX3_H_INCLUDED