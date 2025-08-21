#include<iostream>
#include<unordered_map>
using namespace std;


//Brute force approach
int value(char r){
    if(r=='I'){
        return 1;
    }
    if(r=='V'){
        return 5;
    }
    if(r=='X'){
        return 10;
    }
    if(r=='L'){
        return 50;
    }
    if(r=='C'){
        return 100;
    }
    if(r=='D'){
        return 500;
    }
    if(r=='M'){
        return 1000;
    }
    return -1;
}

int conversion(const string &s){
    int res=0;
    for(int i=0;i<s.length();i++){
        int s1=value(s[i]);
        if(i+1<s.length()){
            int s2=value(s[i+1]);
            if(s1>s2){
                res+=s1;
            } else{
                res+=(s2-s1);
                i++; // for skipping the next character
            }

        } else{
            res+=s1;
        }
    }

    return res;
}


// Using Hashing a better approach than brute force 

int romantodecimal( const string &s){
    unordered_map<char,int > value={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int res=0;
    for(int i=0;i<s.length();i++){
        if(i+1<s.length()&&value[s[i]]<value[s[i+1]]){
            res+=(value[s[i+1]]-value[s[i]]);
            i++;
        } else{
            res+=value[s[i]];
        }
    }
    return res;
}



int main(){
    cout<<conversion("IX")<<endl;
    cout<<romantodecimal("XI");
    return 0;
}