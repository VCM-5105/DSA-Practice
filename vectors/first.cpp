#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Size of vector is: "<< v.size()<<endl;
    cout<<"The capacity of vector is :"<<v.capacity()<<endl;
    v.push_back(1);
    
    cout<<"Size of vector is :"<< v.size()<<endl;
    cout<<"The capacity of vector is :"<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.resize(5);
    
    cout<<"Size of vector is :"<< v.size()<<endl;
    cout<<"The capacity of vector is :"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    
    cout<<"Size of vector is"<< v.size()<<endl;
    cout<<"The capacity of vector is"<<v.capacity()<<endl;
    v.insert(v.begin()+2,56);
    v.insert(v.begin()+3,67);
    v.push_back(8);
    v.push_back(9);

    
    cout<<"Size of vector is: "<< v.size()<<endl;
    cout<<"The capacity of vector is: "<<v.capacity()<<endl;
    v.erase(v.end()-2);
    
    cout<<"Size of vector is: "<< v.size()<<endl;
    cout<<"The capacity of vector is: "<<v.capacity()<<endl;
    v.clear();
    
    cout<<"Size of vector is: "<< v.size()<<endl;
    cout<<"The capacity of vector is: "<<v.capacity()<<endl;

    return 0;
    
}