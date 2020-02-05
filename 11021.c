#include<stdio.h>

int main(){
	
	int num;
	int a, b;	
	int i;
	
	scanf("%d",&num);
	int result[num];
	
	for(i = 0; i < num; i++){
		scanf("%d %d",&a,&b);
		result[i] = a + b;
	}
	
	for(i = 0; i < num; i++){
		printf("Case #%d: %d\n", i+1, result[i]);
	}
}
