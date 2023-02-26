#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={3,1,2,4,0,6};
    int targetSum;
    printf("Enter the targetedSum: ");
    cin>>targetSum;
    int size=6;
    int triplets=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetSum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets;
}