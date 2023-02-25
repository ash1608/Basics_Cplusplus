#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    // if size is not defined in the vector
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    // now we know the size of the vector after pushing the elements 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   cout<<endl;
    // vector<int>v(5);
    // if size is defined in the vector
    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }
    v.insert(v.begin()+2,6);
    // for each loop;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+4); // (or) v.erase(v.end()-2);
    //while loop

    int index=0;
    while(index<v.size()){
        cout<<v[index]<<" ";
        index++;
        // or we can line in one line as cout<<v[index++]<<" ";
    }

}
