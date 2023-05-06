#include <stdio.h>
#include <stdlib.h>

int main(){

    int **p, num, copia_num, i , j;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    copia_num = num;

    p = (int **) malloc(num * sizeof(int *));

    for(i = 0; i < num; i++){
        p[i] = (int *) malloc(num * sizeof(int));
    }

    for(i = 0; i < num; i++){
        for (j = i; j < num; j++){
            p[i][j] = i + 1;
            p[num-1][j] = i + 1;
            p[j][num-1] = i + 1;
            p[j][i] = i + 1;
        }
        num--;
    }


    for(i = 0; i < copia_num; i++){
        for (j = 0; j < copia_num; j++){
            printf("%3d", p[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i < num; i++){
        free(p[i]);
    }
    free(p);
}
