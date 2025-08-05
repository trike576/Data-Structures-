#include<iostream>
using namespace std;
int fact(int num){
    int factorial=1;
    if(num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter an number: ";
    cin>>num;
    if(num<0){
        cout<<"Invalid"<<endl;
    }
    else
    {
    cout<<"The factorial of "<<num<<" is "<<fact(num)<<endl;
    }
    return 0;
}
