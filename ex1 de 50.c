/* Gerador de Senhas: Crie um gerador de senhas que produza senhas seguras com base em critérios específicos, 
como comprimento e uso de caracteres especiais. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int numeros, i, k, j, a, qtde, b = 0;
	char letras_min[] = "abcdefghijklmnopqrstuvwxyz";
    	char letras_mai[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    	char carac[] = "@&#*$%¨<>";
    	char senha[10];
	
	printf("A senha irá conter: 9 digitos, letras maiusculas, letras minusculas, numeros e caracteres especiais.\n");
	printf("Digite a quantidade de senhas que deseja gerar?: ");
	scanf("%d", &qtde);
	
    srand(time(NULL));
    do {
    	for(a = 0; a < 9; a++){
    		if(a == 0 || a == 4){
    			senha[a] = rand()% 10 + '0';
			}
			else if (a == 1 || a == 5 || a == 8){
				i = rand()% 26;
				senha[a] = letras_min[i];
			}
			else if (a == 2 || a == 6){
				k = rand()% 26;
				senha[a] = letras_mai[k];
			}
			else{
				j = rand()% 9;
				senha[a] = carac[j];
			}
		}
		printf("Senha %d: %s\n", b+1, senha);
		b++;
	} while(b < qtde);
    

	return 0;
}
