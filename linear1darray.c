#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    int i;
	for ( i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int n,j, target;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n];

    printf("Enter %d elements:\n", n);
    for ( j = 0; j< n; j++) {
        scanf("%d", &arr[j]); 
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    
    int result = linearSearch(arr, n, target);

    
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}


