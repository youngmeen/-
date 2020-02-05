#include<stdio.h>

int main(){
	
	int num;
	int i;
	
	scanf("%d",&num);
	int result[num];
	int a[num];
	int b[num];
	
	for(i = 0; i < num; i++){
		scanf("%d %d",a+i ,b+i);
		result[i] = a[i] + b[i];
	}
	
	for(i = 0; i < num; i++){
		printf("Case #%d: %d + %d = %d\n", i+1, a[i], b[i], result[i]);
	}
}
