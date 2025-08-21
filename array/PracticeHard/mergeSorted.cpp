#include<iostream>
#include<vector>
using namespace std;

vector<int>mergeSorted(vector<int>a, vector<int>b){
    int i=0;
    int j=0;
    vector<int>final;
    while(i<a.size()&& j<b.size()){
        if(a[i]<=b[j]){
            final.push_back(a[i]);
            i++;
        } else{
            final.push_back(b[j]);
            j++;
        }
    }
        while(i<a.size()){
            final.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            final.push_back(b[j]);
            j++;
        }
    
    return final;
}
void median(vector<int> a, vector<int>b){
    vector<int>k=mergeSorted(a,b);
    int n=k.size();
    cout<<"size is "<<n<<endl;;
    float median=0;
    if(n%2!=0){
       int j=(n+1)/2;
       median=k[j-1];
       cout<<median;
    } else{
        int j= n/2;
        int i=(n-1)/2;
        cout<<endl;
        float z= k[i]+k[j];
        median=(z)/2;
        cout<<median;
    }

}

int main(){
    vector<int>a,b;
    a={1,3,5,7,9};
    b={2,4,6,8,10,11};
    vector<int> k= mergeSorted(a,b);
    cout<<" Merged array is "<<endl;
    for(int num: k){
        cout<<num<<" ";
    }
    cout<<endl;
   median(a,b);

   return 0;
}