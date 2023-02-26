// Find the unique number in a given array where all the elements are being repeated twice with one value being unique.

// In this question we can do array manipulation......means that if the two elements are same in the array we cahnge their value to some other elemnts which are not present in the array.
// suppose arr[]={2,3,1,3,2,4,1}; here 4 is unique and 2,1,3 are occurs 2 times so we can mainpulate 2,3,1 by -1 or something else.
// since we replace the common elemnts with -1 and 4 is the unique element, now all elemnts become negative except 4 , so we check if any of the array elemnt is greater than 0 , if yes then then put them in answer; 
// This technique is known as arry manipulation i.e to cahnge the value of array with something other value that is not present in the array
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,1,3,2,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            ans=arr[i];
        }
    }
    cout<<ans;


}