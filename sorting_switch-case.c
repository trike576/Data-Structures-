#include<stdio.h>
int main(){
    int choose=1;
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Which method do you want to use?\n");
    printf("1.Basic selection sort (1)\n");
    printf("2.Advanced selection sort (2)\n");
    printf("3.Bubble sort (3)\n");
    
    scanf("%d",&choose);
    
    switch(choose){
        case 1:
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        break;
        
        case 2:
        for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

        break;
        
        case 3:
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {  
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

        break;
    }
    
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
