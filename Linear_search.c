 #include<stdio.h>
int main(){
    int size,count=0,found=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int nums[size],value;
    printf("Enter the numbers: ");
    for(int i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter element you want to find: ");
    scanf("%d",&value);
    
    for(int i=0;i<size;i++){
        if(value==nums[i]){
            count++;
            found=1;
        }
    }
    if(found==1){
        printf("%d found %d times",value,count);
    }
    else{
        printf("Did not found");
    }
    return 0;
}
