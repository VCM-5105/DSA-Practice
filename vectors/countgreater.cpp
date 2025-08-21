#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    cout<<"Enter the  element for vectors: "<<endl;
    for(int i=0;i<6;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int countGreater=0;
    int x;
    cout<<"Enter the element for search :";
    cin>>x;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]>x){
            countGreater++;
        }
    }
    cout<<"The number of element which is greater than "<<x<<"is: "<<countGreater<<endl; 

    return 0;
}