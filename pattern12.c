#include<stdio.h>


main(){
	
	int r, c,k;
	
	for(r=1; r<=5; r++){
		
			for (k=5;k>r; k--){
			
			printf(" ");
		}
		for(c=1; c<=r; c++){
			
				printf("*");
			
		}
		
		printf("\n");
		
		
		
	}	
}
