#include<stdio.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter numbers of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    printf("Even numbers: ");
    for(int i=0;i<size;i++){
        if(nums[i]%2==0){
            printf("%d ",nums[i]);
        }
    }
    return 0;
}
