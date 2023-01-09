#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i;
	int j;
	int n = 5;
	int k = 2;
	
	printf("*************Feliz Navidad*************\n");
	
	
	
	for (i=1; i <= n ;i++){
		   
		
		for(j = 1; j <= n-i ; j++)
				
			printf(" ");
		
			for(j = 1; j <= 2*i-1 ; j++)
			
			printf("*");
				
		printf("\n");

	}
	
	for (i=1; i <= k ;i++){
		   
		
		for(j = 1; j <= 4-1 ; j++)
				
			printf(" ");
		
			for(j = 1; j <= 3 ; j++)
			
			printf("*");
				
		printf("\n");

	}		
	
	return 0;
}
