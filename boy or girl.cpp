/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

#include<bits/stdc++.h>
using namespace std;



//main function
int main(){
    string str;
    getline(cin,str);

    unordered_set<char>st;

    for(auto &ch:str){
        st.insert(ch);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
