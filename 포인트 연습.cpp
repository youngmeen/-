#include<stdio.h>

int main(){
	
	int a = 10, b = 5, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double *pg = &avg;
	
	pa = &a;
	pb = &b;
	
	*pt = *pa + *pb;
	*pg = *pt / 2.0;
	
	printf("두정수의 값 : %d, %d\n",*pa,*pb);
	
}
