// Rotate the given array 'a' by k steps, where k is non-negative. Note: k can be greater than n as well where n is the size of array 'a'
// Lets assume k is 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int arr1[]={1,2,3,4,5};
    // int k=2;
    // int size=sizeof(arr1)/sizeof(arr1[0]);
    // //k can be greater than n
    // k=k%size;
    //     int arr2[size];
    //     int j=0;
    //     // inserting last k elements in ans array i.e. array 2
    //     for(int i=size-k;i<size;i++){
    //         arr2[j]=arr1[i];
    //         j++;
    //     }
    //     // inserting first n-k elements in ans array;
    //     for(int i=0;i<=k;i++){
    //         arr2[j]=arr1[i];
    //         j++;
    //     }

    //     for(int i=0;i<size;i++){
    //         cout<<arr2[i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // In this we are using extra memory by creating arr2. we can do in the same i.e in the given array by using reverse operation in vector

    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    k = k % v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

