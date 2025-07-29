 #include<stdio.h>
int fibo(int num){
    int first=0,next=1,ans;
    if(num==1){
        return 0;
    }
    else if(num==2){
        return 1;
    }
    else{
    for(int i=3;i<=num;i++){
        ans=first+next;
        first=next;
        next=ans;
    }
    return ans;
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
    printf("%d",fibo(num));
    }
    return 0;
}
