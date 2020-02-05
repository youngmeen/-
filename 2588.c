#include<stdio.h>

int main(){
	int num1, num2;
	int result;
	
	scanf("%d", &num1);
	scanf("%d", &num2);	
	
	int temp = num2;
	result = num1 * (num2 % 10);
	
	printf ("%d\n",result);
	
	num2 /= 10;
	
	result = num1 * (num2 % 10);
	
	printf("%d\n", result);
	
	num2 /= 10;
	
	result = num1 * (num2 % 10);
	
	printf("%d\n", result);
	
	printf("%d", num1 * temp);
	
}
