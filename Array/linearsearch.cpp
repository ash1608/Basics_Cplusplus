#include<iostream>
using namespace std;

int main(){
    int arr[5],target;
    int i,ans;
    printf("Enter the elements of the array:\n");
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are:"<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"enter the targetd value:"<<endl;
    cin>>target;
    for(i=0;i<5;i++){
        if(arr[i]==target){
            ans= i;
            break;
        }
    }
    cout<<ans;
}