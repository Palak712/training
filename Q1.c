// Q1 Find the Largest Sum Contiguous SubarrayExample: Input:[-2,1,-3,4,-1,2,1,-5,4] Output:6(Subarray:[4,-1,2,1])
#include <stdio.h> // Required for printf

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max_so_far = arr[0]; 
    int current_max = arr[0]; 

    for (int i = 1; i < n; i++) {
        // Step 1: Check if current element is bigger than current sum + element
        if (arr[i] > (current_max + arr[i]))
            current_max = arr[i];
        else
            current_max = current_max + arr[i];

        // Step 2: Update the global maximum
        if (current_max > max_so_far)
            max_so_far = current_max;
    }
    printf("Max Sum: %d\n", max_so_far);
    return 0;
}