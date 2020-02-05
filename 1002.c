#include<stdio.h>
#include<math.h>

int main(){
	int T;
	int x1, y1, r1;
	int x2, y2, r2;
	
	scanf("%d", &T);
	int result[T];
	int i;
	
	for(i = 0; i < T; i++){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		if(x2 == x1 && y2 == y1 && r1 == r2) {
			result[i] = -1;
			continue;
		}
		
		int x_length = pow((x2-x1),2);
		int y_length = pow((y2-y1),2);
		int length = x_length + y_length;
		
		int max = pow(r2+r1, 2);
		int min = pow(r2-r1, 2);
		
		if(length > max || length < min){
			result[i] = 0;
		}else if(length == max || length == min){
			result[i] = 1;
		}else if(length < max || length > min){
			result[i] = 2;
		}		
	}
	
	for(i = 0; i < T; i++){
		printf ("%d\n",result[i]);
	}
	
	
}
