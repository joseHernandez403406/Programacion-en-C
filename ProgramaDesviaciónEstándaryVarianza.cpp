#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main(void){
	
	float calif[36]={5,5,6,6,7,7,7,8,8,8,8,8,8,9,9,9,9,9,9,10,10,10,10,10,10,11,11,11,11,11,11,11,11,12,12,12};
	float sum, promedio, var, des;
	int i=0, j=0;
	
	printf("calculo de varianza y desviacion estandar...\n");
	
	for(i = 0; i < 36; i++){
		sum=sum+calif[i];
		promedio=sum/36;
	}
	j=i;
	for(j = 0; j < 36; j++){
		var+=pow(calif[j]-promedio, 2);
	}
	
	des=pow(var/36, .5);
	
	printf("La varianza de las calidicaiones es: %.2f\n", var/36);
	printf("La desviacion estandar es: %.2f", des);
	return 0;
}