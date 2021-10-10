#include <stdio.h>

int main(void){
    
    float num1, num2, resultado;
    int operacao;
    
	    while(operacao!=5){
	    	system("cls");
	    	printf("------------------------------------");
	    	printf("\n\tCalculadora Simples\n");
	 		printf("------------------------------------");
		    printf("\n\tEscolha uma operacao: \t\n\n1-soma \n2-subtracao \n3-multiplicacao \n4-divisao \n5-Sair\n");
		    printf("------------------------------------\n");
		    scanf("%i", &operacao);
	    
		    switch (operacao){
		        case 1:
			        system("cls");
			        printf("digite aqui um numero:\n");
				    scanf("%f", &num1);
				    printf("digite outro numero:\n");
				    scanf("%f", &num2);
			        resultado = num1+num2;
			        printf("%0.2f + %0.2f = %0.2f\n", num1, num2, resultado);
			        system("pause");
			        break;
		        
		        case 2:
		        	system("cls");
			        printf("digite aqui um numero:\n");
				    scanf("%f", &num1);
				    printf("digite outro numero:\n");
				    scanf("%f", &num2);
			        resultado = num1-num2;
			        printf("%0.2f - %0.2f = %0.2f\n", num1, num2, resultado);
			        system("pause");
			        break;
		        
		        case 3:
		        	system("cls");
			        printf("digite aqui um numero:\n");
				    scanf("%f", &num1);
				    printf("digite outro numero:\n");
				    scanf("%f", &num2);
			        resultado = num1*num2;
			        printf("%0.2f * %0.2f = %0.2f\n", num1, num2, resultado);
			        system("pause");
			        break;
		        
		        case 4:
		        	system("cls");
			        printf("digite aqui um numero:\n");
				    scanf("%f", &num1);
				    printf("digite outro numero:\n");
				    scanf("%f", &num2);
			        resultado = num1/num2;
			        printf("%0.2f / %0.2f = %0.2f\n", num1, num2, resultado);
			        system("pause");
			        break;
	        }
	}
}
