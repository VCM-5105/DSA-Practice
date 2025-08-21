#include<iostream>

using namespace std;

void countElement( string str){

    int lowercase=0,uppercase=0,space=0,numbervalue=0,specialcharacter=0;
    for(int i=0;i<str.length();i++){

        if(str[i]>='a'&&str[i]<='z'){
            lowercase++;
        }
        else if(str[i]>='A'&&str[i]<='Z'){
            uppercase++;
        }
        else if(str[i]==' '){
            space++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            numbervalue++;
        }
        else{
            specialcharacter++;
        }
    }
    cout<<"The number of lowercase character is"<<lowercase<<endl;
    cout<<"The number of uppercase character is"<<uppercase<<endl;
    cout<<"The number of spaces is"<<space<<endl;
    cout<<"The number of numeric value is :"<<numbervalue<<endl;
    cout<<"The number of special character is"<<specialcharacter<<endl;
}


int main(){
   string str="Abc3Q@14*  &GHfk";
   countElement(str);
    return 0;
}