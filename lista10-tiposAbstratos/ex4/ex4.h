#ifndef EX4_H_INCLUDED
#define EX4_H_INCLUDED

int **alocarMemoriaMatriz(int l, int c);
void preencheMatriz(int **m, int l, int c);
int **multiplicaMatrizes(int **m1, int l1, int c1, int **m2, int l2, int c2);
void printaMatriz(int **matriz, int l, int c);
void desalocarMemoriaMatriz(int **p, int l);

#endif // EX4_H_INCLUDED