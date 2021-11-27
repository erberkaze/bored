#include <stdio.h>
#include <math.h>

int** alloc_and_read(int m, int n);
float** normalize(int** arr, int m, int n);

int main(void){
	
	int n, m, i = 0, j = 0;
	
	float** nrmlzd_arr;
	printf("Enter n: ");
	scanf("%d", &m);
	
	printf("Enter m: ");
	scanf("%d", &n);
	
	nrmlzd_arr = normalize(alloc_and_read(m, n), m, n);
	
	for(i = 0 ; i < m ; i++){
		
		for(j = 0 ; j < n ; j++){
			
			printf("%lf\t", nrmlzd_arr[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}

int** alloc_and_read(int m, int n){
	
	int i = 0;
	int j = 0;
	
	int** arr = (int**)malloc(m * sizeof(int*));
	
	for(i = 0; i < m; i++){
		
		arr[i] = (int*)malloc(n * sizeof(int));
	}i = 0;
	
	
	for(i = 0; i < m; i++){
		
		printf("Enter the row %d elements: ", i+1);
		
		for(j = 0; j < n; j++){
			
			scanf("%d", &arr[i][j]);
		}		
	}i = 0; j = 0;

	return arr;
	
}

float** normalize(int** arr, int m, int n){
	
	int i = 0, j = 0, k = 0; 
	float total_pow = 0;
	
	float** nrm = (float**)malloc(sizeof(float*) * m);
	
	for(i = 0; i < m; i++){
		
		nrm[i] = (float*)malloc(sizeof(float*) * n);
	}i = 0;
	
	for(i = 0; i < m; i++){
		
		for(j = 0; j < n; j++){
			
			nrm[i][j] = arr[i][j];
		}
	}i = 0; j = 0; 
	

	for(i = 0 ; i < m ; i++){
		
		for(k = 0; k < n ; k++){
			
			for(j = 0 ; j < n ; j++){
			
				//printf("%lf", pow(nrm[i][j], 2));
				total_pow += pow(arr[i][j], 2);
			}	
			
			nrm[i][k] = (arr[i][k]) / sqrt(total_pow);
			total_pow = 0;
		}
	
	}

	return nrm;
	
}





