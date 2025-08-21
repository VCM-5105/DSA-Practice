#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<6;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int x;
    cout<<"\nEnter the value of x:";
    cin>>x;
    int occurance=-1;
int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurance= i;
            count++;
        }
    }
    int flag=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            flag=i;
            break;
        }
    }
    cout<<flag;
    cout<<"\n The last occurance of x is"<<occurance<<endl;
    cout<<"The number of times a element occurs is: "<<count<<endl;
    return 0;
}