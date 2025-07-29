#include<iostream>
using namespace std;
void fact(int num){
    int factorial=1;
    if(num<0){
        cout<<"Invalid"<<endl;
    }
    else if(num==1){
        cout<<"1"<<endl;
    }
    else {
        for(int i=2;i<=num;i++){
            factorial*=i;
        }
            cout<<"The factorial of "<<num<<" is "<<factorial<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter an number: ";
    cin>>num;
    fact(num);
    return 0;
}
