#include<stdio.h>
int fibo(int num){
    int first=0,next=1,ans;
    for(int i=1;i<=num;i++){
        ans=first+next;
        first=next;
        next=ans;
        printf("%d ",ans);
    }
}
int main(){
    int num;
    printf("Enter term no: ");
    scanf("%d",&num);
    if(num<=0){
        printf("Invalid");
    }
    else{
    fibo(num);
    }
    return 0;
}
