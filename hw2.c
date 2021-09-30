#include <stdio.h>

int main(void)
{
	float num1;
	
	printf("Please enter kilometers:");
	scanf("%f", &num1);

	float result1 = num1 / 1.609;
	printf("%.1f is equal to %.1f miles. \n", num1, result1);
	return 0;
}