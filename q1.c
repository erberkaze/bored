#include <stdio.h>
#include <stdlib.h>

int* reorder(int* arr, int n);

int main(void) {
	
    int* nums;
    int n, i = 0, buf;
    int* nums_ord;
    
    
    printf("Enter integer: ");
    scanf("%d", &n);
    
    nums = (int*) malloc(sizeof(int) * n);
    
    printf("Enter your array's values:\n");
    
    for(i = 0; i < n ; i++){
    	
    	scanf("%d",&buf);
    	
    	if(buf == 0 || buf == 1){
    		
    		nums[i] = buf;
		}
    	
	}i = 0;
	

	nums_ord = reorder(nums, n);
	
	for(i = 0; i < n ; i++){
		
		printf("nums_ord member %d -> %d \n", i+1, nums_ord[i]);
	}
    
    // Read length.
    // Allocate array.
    // Read numbers.
    // Call reorder (nums_ord = reorder(arr, ...))
    // Print contents of nums_ord
    // Free memory.
    free(nums);
    free(nums_ord);
    
    return 0;
}

int* reorder(int* arr, int n) {
    
    int i = 0, ct = 0;
    
    for(i = 0; i < n ; i++){
    	
    	if(arr[i] == 1){
    		
    		ct++;
		}
	}
	
	for(i = 0; i < n ; i++){
		
		if(i+1 <= ct){
			
			arr[i] = 1;
		}
		else{
			
			arr[i] = 0;
		}
	}
	
	return arr;
	
    
}

