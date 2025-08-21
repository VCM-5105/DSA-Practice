#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Enter the element in vectors: "<<endl;

    for(int i=0;i<=5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    cout<<" size is: "<< v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int element:v){
        cout<<element<<"  ";
    }
    cout<<endl;

    int idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";
        idx++;
    }
    cout<<endl;
return 0;
}