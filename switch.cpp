#include <stdio.h>

int main(){
	
	int data; // nao esquecer de colocar ; depois da variavel
	
	printf("Insira um numero de 1 a 7\n");
	scanf("%d", &data);
	
	switch(data){ // colocar a variavel entre parenteses e abrir cochetes
		case 1: { // o numero depois do case corresponde ao numero que vai ser colocado pelo usuario // sempre colocar depois do case e o numero os dois pontos senao vai da merda
			printf("Segunda-feira\n");
			break; // sempre colocar o break ao final de cada caso
		}
		
		case 2: {
			printf("Terça-feira\n");
			break;
		}
		
		case 3: {
			printf("Quarta-feira\n");
			break;
		}
		
		case 4: {
			printf("Quinta-feira\n");
			break;
		}
		
		case 5: {
			printf("Sextou\n");
			break;
		}
		
		case 6: {
			printf("Sabadou\n");
			break;
		}
		
		case 7: {
			printf("Domingou, mas depois e segunda, entao sinto muito\n");
			break;
		}
		
		default: { // o default é optativo, mas é legal colocar
			printf("valor invalido\n");
			break;
		}
	}
		
}
