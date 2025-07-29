 #include<stdio.h>
int main(){
    int num,ans=1;
    printf("Enter an number: ");
    scanf("%d",&num);
    if(num==1){
        printf("1");
    }
    else if(num<0){
        printf("Invalid number");
    }
    else{
    for(int i=2;i<=num;i++){
        ans*=i;
    }
    printf("The factorial of %d is %d",num,ans);
    }
}
