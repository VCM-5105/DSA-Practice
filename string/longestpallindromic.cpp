#include<iostream>
using namespace std;

//Brute force approach for solving this question O(n^3) first by generating all the substring and then solcing separetly

bool check_palin(string &s){
    int low=0,high=s.length();

    while(low<high){
        if(s[low]!=s[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}