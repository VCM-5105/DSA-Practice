#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
        
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
     
     cout<<endl;
    v.insert(v.begin()+2,45);
    for(int element:v){
        cout<<element<<" ";
    } 
    cout<<endl;
    v.erase(v.begin()+2);
    int index=0;
    while (index<v.size())
    {
        cout<<v[index++]<<" ";
    }
    cout<<"size is "<<v.size()<<endl;
 
   
 
    cout<<endl;
    return 0;
}