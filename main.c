#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	fflush(stdin);
	system("color F0");
	char cadena1[50],cadena2[20],plastilina,continuar;
	do{
		system("cls");
		printf("Introduce la oracion:");
		scanf("%s",&cadena1);
		printf("Introduce la palabra a buscar: ");
		scanf("%s",&cadena2);
		plastilina=strstr(cadena1,cadena2);
		if(plastilina==0){
			printf("\n\tNo Esta");
		}
		else{
			printf("\n\tSi esta");
		}
		printf("\n\tDesea volver a probar s/n: ");
		scanf("%s",&continuar);
	}while(continuar=='s');
	
	
	return 0;
}
