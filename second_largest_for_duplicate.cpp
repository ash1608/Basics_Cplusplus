// Find the second largest element in the array if some duplicate lements are present

#include<iostream>
using namespace std;

// int largestelement_index(int arr[],int size){
//     int max=0;
//     int max_index=-1;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             max_index=i;
//         }
//     }
//     return max_index 
// }

// int main(){
//     int arr[]={2,3,5,9,8,1};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int index_largestelement=largestelement_index(arr,size);
//     int largest=arr[index_largestelement];
//     for(int i=0;i<size;i++){
//         if(arr[i]==largest){
//             arr[i]=-1;
//         }
//     }
//     int second_largest_index=largestelement_index(arr,size);
//     cout<<arr[second_largest_index];
   
// }

// (another process)............................

int secondlargestelement(int arr[],int size){
    int max=0;
    int second_max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>second_max&&arr[i]!=max){
            second_max=arr[i];
        }
    }
    return second_max;
}

    int main(){
    int arr[]={2,3,5,9,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int second_largest=secondlargestelement(arr,size);
    cout<<second_largest;

}