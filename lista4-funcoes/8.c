#include <stdio.h>

int retorna_tipo(char);

int main(){
    char c;

    printf("Entre com um caracter: ");
    scanf("%c", &c);


    int resultado = retorna_tipo(c);

    printf("Retorno: %d", resultado);
}

int retorna_tipo(char c){

    if (c == 'a' || c == 'b' || c == 'c' || c == 'd' || c == 'e' ||
       c == 'f' || c == 'g' || c == 'h' || c == 'i' || c == 'j' ||
       c == 'k' || c == 'l' || c == 'm' || c == 'n' || c == 'o' ||
       c == 'p' || c == 'q' || c == 'r' || c == 's' || c == 't' ||
       c == 'u' || c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z')
    {
        return 1;
    }else if (c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' ||
       c == 'F' || c == 'G' || c == 'H' || c == 'I' || c == 'J' ||
       c == 'K' || c == 'L' || c == 'M' || c == 'N' || c == 'O' ||
       c == 'P' || c == 'Q' || c == 'R' || c == 'S' || c == 'T' ||
       c == 'U' || c == 'V' || c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
    {
    	return 2;
	}else{
		return 0;
	}
}

