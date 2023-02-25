#include<iostream>
using namespace std;

void check_eligibility(int age){
    if(age>=18){
        cout<<"Eligible to vote!";
    }
    else{
        cout<<"Not eligible to vote!";
    }
}

int main(){
    int age;
    cout<<"Enter the age:";
    cin>>age;
    check_eligibility(age);
}