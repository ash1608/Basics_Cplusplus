// Find the second largest element in the array of all unique elements

#include<iostream>
using namespace std;

int largestelement_index(int arr[],int size){
    int max=0;
    int max_index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
    }
    return max_index; // we can return max value also but when we change the max value in main function to -1 or something else i.e. array manipulation 
    // then we only chang the value of maxium elemnt not the max elemnt in the array so we return index of the max value.
}

int main(){
    int arr[]={2,3,5,9,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index_largestelement=largestelement_index(arr,size);
    arr[index_largestelement]=-1;
    int second_largest_index=largestelement_index(arr,size);
    cout<<arr[second_largest_index];
    //index_largestelement=-1;          //we cannot use it ...see the above comments
    //int second_largest_index=largestelement_index(arr,size); 
    //cout<<second_largest_index;
   


}