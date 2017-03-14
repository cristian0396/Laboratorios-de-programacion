#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
	int num=0, adivi=0, i;	
	printf("escriba el numero secreto:\n");
	scanf("%d", &adivi);
	srand(time(NULL));
	num = rand()%51;
	i = 0;
	int intentos = 1;
	if(adivi==num){
		printf("adivino\n");
	}else{
		while(adivi!=num){

			if(adivi>num){
				printf("el numero es menor\n");
				printf("escriba el numero secreto:\n");
				scanf("%d", &adivi);
			}else if(adivi<num){
				printf("el numero es mayor\n");
				printf("escriba el numero secreto:\n");
				scanf("%d", &adivi);
			}
			
			if(adivi == num){
				printf("adivino\n");
			}
			
			intentos++;
		}

	}
		
	printf("lo lograste en: %d \n",intentos);
	

	return(0);

}