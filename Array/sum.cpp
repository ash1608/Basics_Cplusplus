#include<iostream>
using namespace std;

int main(){
    int arr[5],sum=0;
    printf("Enter the elements of the array:\n");
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"Sum of the elements present in the array is: "<<sum;
    
}