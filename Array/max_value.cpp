#include<iostream>
using namespace std;

int main(){
    int arr[5];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum element in the array is: "<<max;
}