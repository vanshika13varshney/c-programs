#include <stdio.h>


int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    
    while (left <= right) {
        int mid = left + (right - left) / 2;  

        
        if (arr[mid] == target) {
            return mid;  
        }
      
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        
        else {
            left = mid + 1;
        }
    }

    return -1; 
}

int main() {
    int n, target;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n],i;

    
    printf("Enter %d sorted elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

   
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

