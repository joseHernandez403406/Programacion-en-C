#include <stdio.h>
#include <math.h>

int main (void){
	
	float calificaciones [36]={5,5,6,6,7,7,7,8,8,8,8,8,8,9,9,9,9,9,9,10,10,10,10,10,10,11,11,11,11,11,11,11,11,12,12,12}
	float promedio= 0;
	
	printf("programa que calcula el promedio de 36 calificaciones...\n");
	
	for (int i= 0;i <36; i++){
		promedio=promedio+calificaciones [i];
	}
	printf (" el promedio de las calificaciones es: %.2f\n", promedio/36);
	return 0;
}