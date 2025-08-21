#include<iostream>
#include<vector>

using namespace std;

// bool checkArray(vector<int>&v){
//     for(int i=1;i<=v.size()-1;i++){
//         if(v[i]>=v[i-1]){
//             return true;
//         } else{
//             return false;
//         }
//     }
// }

int main(){
    vector<int>v;
    for(int i=0;i<6;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    // if(checkArray(v)){
    //     cout<<"The array is sorted"<<endl;
    // } else{
    //     cout<<"The array is not sorted"<<endl;
    // }

    // METHOD 02 FOR SAME QUESTION IN EASY WAY
    bool isSorted=false;
    for(int i=1;i<=v.size()-1;i++){
        if(v[i]>=v[i-1]){
            isSorted= true;
        }
        if(isSorted==false){
            break;
        }
    }
    if(isSorted==true){
        cout<<"The array is sorted";
    } else{
        cout<<"The array is not sorted";
    }

    return 0;
}