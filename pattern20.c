#include<stdio.h>


main(){
	
	int r, c, k;
	
	for(r=5; r>=1; r--){	
	
		for (k=5;k>=r; k--){
			
			printf(" ");
		}
	
	
		
		for(c=1; c<=r; c++){
			
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
