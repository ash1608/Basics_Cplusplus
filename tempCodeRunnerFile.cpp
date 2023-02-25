#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[]={1,2,3,7,5,6};
    int odd=0;
    int even=0;
    
    for(int i=0;i,6;i++){
        if(i%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    cout<<even<<endl;
    cout<<odd<<endl;
    int sum=even-odd;
    cout<<"Differenece is :"<<sum;
}
