 #include<stdio.h>
int main(){
    int size, evenIndex = 0, oddIndex = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size], even[size], odd[size];
    
    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even[evenIndex] = arr[i];
            evenIndex++;
        } else {
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    printf("Even numbers: ");
    for(int i = 0; i < evenIndex; i++){
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for(int i = 0; i < oddIndex; i++){
        printf("%d ", odd[i]);
    }

    return 0;
}
