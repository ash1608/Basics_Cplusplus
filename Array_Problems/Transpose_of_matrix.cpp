#include<iostream>
using namespace std;

int main(){
    int r1,c1;
    cout<<"Enter the value of r1 , c1: "<<endl;
    cin>>r1>>c1;
    int mat[r1][c1];
    cout<<"Enter the matrix data:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat[i][j];
        }
        cout<<endl;
    }
    cout<<"Matrix:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose:"<<endl;
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
    

}