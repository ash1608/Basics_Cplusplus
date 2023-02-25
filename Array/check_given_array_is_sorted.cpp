#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[]={1,2,3,7,5,6};

    bool flag=true;  //it means that we are considering that array is already sorted
     for(int i=1;i<6;i++){
        if(arr[i]<=arr[i-1]){    
            flag=false;
        }
     }
    cout<<flag;
}