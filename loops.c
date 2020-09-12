#include<stdio.h>

int main() {
    
    int arr[1000], n, end, temp;
    
    printf("Enter number of elements in array : \n");
    scanf("%d", &n);
    
    end = n-1;
    
    printf("Enter %d numbers: \n", n);
    
    for (int i = 0; i < n; i++) {
    
        scanf("%d\n", &arr[i]);
    
    }
    
    for (int i = 0; i < end / 2; i++) {
        
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        
        end--;
    
    }
    
    printf("Swapped2 array : \n");
    
    for (int i = 0; i < n; i++) {
    
        printf("%d\n", arr[i]);
    
    }
    
}
