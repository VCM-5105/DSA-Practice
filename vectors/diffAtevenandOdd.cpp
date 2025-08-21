#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v ;
    cout<<"Enter the element of a vector: "<<endl;
    for(int i=0;i<6;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int SumAtEven=0;
    int SumAtOdd=0;
    for(int i=0;i<=v.size()-1;i++){
        if(i%2==0){
            SumAtEven+=v[i];
        }
        else{
            SumAtOdd+=v[i];
        }
       

    }
     int difference=SumAtEven-SumAtOdd;
        if(difference<0){
            cout<<"The diffrence of numbers is: "<<-(difference)<<endl;
        } else{
            cout<<"The difference of number is: "<<difference<<endl;
        }
        return 0;
}