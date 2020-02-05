#include<stdio.h>

int main(){
	int H, M;
	scanf("%d %d",&H,&M);
	
	if(H == 0 && M > 45){
		printf("0 %d", M-45);
	}else if(H == 0 && M < 45){
		printf("23 %d",60 - (45 - M));	
	}else if(M > 45){
		printf("%d %d", H, M-45);
	}else if(M < 45){
		printf("%d %d", H-1, 60 - (45 - M));
	}	
}
