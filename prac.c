
#include <stdio.h>
#define _CRT_SECURE_NO_WARNING_

int main(void){
	float inches, centimetres;


	printf("Enter the number of inches:");
	scanf("%f", &inches);

	centimetres = inches * 2.54;

	printf("%.2f inches is %.2f centimetres ", inches, centimetres);

	return 0;
}
