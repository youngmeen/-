#include<stdio.h>

int main(){
	
	int min = -1000001;
	int max = 1000001;

	int T;
	int i;
	
	scanf("%d",&T);	
	int array[T];
	
	for(i = 0; i < T; i++){
		scanf("%d", array[i]);		
	}
	
	max = array[0];
	min = array[0];

	for(i = 0; i < T; i++){
		if(array[T] < max){
			max = array[T];
		}else if(array[T] > min){
			min = array[T];
		}
	}
	
	printf("%d %d",max, min);
	
}
