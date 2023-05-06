#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char frase[100];

    printf("Entre com um texto (max 100 caracteres): ");
    scanf("%100[^\n]", &frase);

	int i;
	
    for (i = 0; i < strlen(frase); i++)
    {
    	
		if (isalpha(frase[i]) == 1 || isalpha(frase[i])== 2 ){
	        if (islower(frase[i])){
	            frase[i] = toupper(frase[i]);
	        }else if (isupper(frase[i])){
	            frase[i] = tolower(frase[i]);
	        }
	    }else if (isalpha(frase[i]) == 0 && frase[i] != ' ' && frase[i] != '_'){
	    	printf("Conversao nao realizada!\nCaracter(es) invalidos presentes. Apenas letras, espacos em branco e '_' sao permitidos!");
			return 0;
		}
    }

    printf("Texto com a conversao: %s", frase);
}
