#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(6);
    for(int i=0;i<6;i++){ // or for(int i=0;i<v.size();i++)
        cin>>v[i];
    }
    int x;
    cout<<"enter x: "<<endl;
    cin>>x;
    int occurence;
    // for(int i=0;i<6;i++){ //or for(int i=0;i<v.size();i++)
    //     if(v[i]==x){
    //         occurence=i;
    //     }
    // }
    // cout<<occurence<<endl;


    // or we can also find in another way

    for(int i=v.size()-1;i>=0;i++){
        if(v[i]==x){
            occurence=i;
            break;
        }
    }
    cout<<occurence<<endl;



}