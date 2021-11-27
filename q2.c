#include <stdio.h>
#include <stdlib.h>


int* quadrants(int* x, int* y, int n);


int main(void) {
    int n, i = 0;
    int* x; // X coordinates.
    int* y; // Y coordinates.
    int* quads;
    
    printf("Enter integer: ");
    scanf("%d", &n);
    
    x = (int*) malloc(sizeof(int) * n);
    y = (int*) malloc(sizeof(int) * n);
    
    
    for(i = 0; i < n; i++){
    	
    	printf("Enter point x for point %d: ", i+1);
    	scanf("%d", &x[i]);
    	printf("Enter point y for point %d: ", i+1);
    	scanf("%d", &y[i]);

	}i = 0;
	

	quads = quadrants(x, y, n);
	
	for(i = 0 ; i < n ; i++){
		
		printf("For quadrant %d there is %d point avaiable\n", i+1, quads[i]);
	}
	
    // Read n.
    // Allocate X.
    // Allocate Y.
    // Read points.
    // Call quadrants
    // Print quadrant content.
    // Free memory.
    free(x);
    free(y);
    free(quads);
    
    
}


// x: X coordinate of points.
// y: Y coordinate of points.
// n: number of points.
// Return value: quadrant array allocated in the function.
// It must have size 4, If its name is q, then q[0] 
// is the numper of points in the first quadrant. 
int* quadrants(int* x, int* y, int n) {
	
	int i = 0;
	int *arr;
	
	arr = (int*)malloc(sizeof(int) * 4);
	
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	arr[3] = 0;
	
	int q0 = 0, q1 = 0, q2 = 0, q3 = 0;
	
	for(i = 0 ; i < n ; i++){
		
		if(x[i] > 0 && y[i] > 0){
			
			arr[0] += 1;
		}
		else if(x[i] > 0 && y[i] < 0){
			
			arr[3] += 1;
		}
		else if(x[i] < 0 && y[i] > 0){
			
			arr[1] += 1;
		}
		else{
			
			arr[2] += 1;
		}
	}
	
    return arr;
}
