#include<iostream>
#include<vector>
using namespace std;

int main(){
    int array[]={3,4,6,7,1};
    int targetSum;
    cout<<"Enter the targetd sum:";
    cin>>targetSum;
    int pair=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if((array[i]+array[j])==targetSum){
                pair++;
            }
        }
    }
    cout<<"Number of the pairs that are equal to the targetd sum is/are: "<< pair<<endl; 
}