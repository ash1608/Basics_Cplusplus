#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    cout<<"Enter the values of r1,c1,r2,c2:";
    cin>>r1>>c1>>r2>>c2;
    int mat1[r1][c1],mat2[r2][c2];

    cout<<"Enter the elemnents of matrix 1:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elemnents of matrix 2:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>mat2[i][j];
        }
    }
    cout<<"Matrix 1:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matrix 2:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<"\n";
    }
    int mat3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int ans=0;
            for(int k=0;k<c1;k++){
                ans+=mat1[i][k]*mat2[k][j];
            }
            mat3[i][j]=ans;
        }
    }
    cout<<"Result:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }

}