#include<stdio.h>


main(){
	
	int r, c,k;
	
	for(r=1; r<=5; r++){		
		
		for (k=1;k<r; k++){
			
			printf(" ");
		}
		
		for(c=r; c<=5; c++){
			
				printf("%d",c);
			
		}
		
		printf("\n");
		
		
		
	}	
}
