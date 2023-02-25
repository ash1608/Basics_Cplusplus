#include<iostream>
using namespace std;

float area(int radius){
    float pi=3.14;
    return pi*radius*radius;
}

float circumference(int radius){
    float pi=3.14;
    return 2*pi*radius;
}

int main(){
    int radius;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    cout<<"The area of the circle is :"<<area(radius)<<endl;
    cout<<"The circumference of the circle is :"<<circumference(radius)<<endl;
}