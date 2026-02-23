#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are:\n");
    for (int i = 0;i<n;i++) {
        if(arr[i] == -1) continue; // Skip already marked duplicates
        else{
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];  
                arr[i+1] = temp;
            }
            else
                i++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1])
            printf("%d ", arr[i]);
        }  
    return 0;
}