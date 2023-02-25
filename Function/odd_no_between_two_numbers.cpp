#include<iostream>
using namespace std;
void odd_numbers(int ,int);
bool isOdd(int num){
    if(num%2==0){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int a=1,b=10;
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<" ";
        }
    }
    printf("\n");
    odd_numbers(a,b);
}
void odd_numbers(int a,int b){
    for(int i=a;i<b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}