#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i; 
	
	do{
		printf("\n Digite um numero do sabor \n");
		
		printf("\t (1) ...flocos \n");
		printf("\t (2) ...morango \n");
		printf("\t (3) ...chocolate \n");
		
		scanf("%d", &i);
		
	}while((i<1) || ((i>3)));
	
	switch(i){
		case 1:
			printf("\t\t voce escolheu flocos");
			break;
			
		case 2:
			printf("\t\t voce escolheu morango");
			break;
				
		case 3:
			printf("\t\t voce escolheu chocolate");
			break;
	}
	
	return 0;
}
