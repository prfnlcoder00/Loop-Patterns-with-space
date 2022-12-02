#include<stdio.h>


main(){
	
	int r, c, k;
	
	for(r=1; r<=5; r++){	
	
		for (k=1;k<=r; k++){
			
			printf(" ");
		}
	
	
		
		for(c=r; c<=5; c++){
			
		if(c%2==0){
				printf("0");
		}
		else{
				printf("1");
		}	
		
		
		}
		
		printf("\n");
		
		
		
	}	
}
