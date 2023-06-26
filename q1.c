#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    // printf("%d \n",n);
    
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element at position %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int smallest, second_smallest;
    for (int i=0;i<n;i++){
        // printf("%d\n", arr[i]);
        if (arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
    }
    
    for (int i=0;i<n;i++){
        if ((arr[i] < second_smallest) && (arr[i] != smallest)){
            second_smallest = arr[i];
        }
    }
    
    printf("\n");
    printf("smallest = %d \n", smallest);
    printf("second_smallest = %d", second_smallest);
    
    return 0;
}