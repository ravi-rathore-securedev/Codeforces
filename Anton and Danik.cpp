/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    cin.ignore();

    string str;
    cin>>str;

    int Anton=0, Danik=0;

    for(auto &ch:str){
        if(ch=='A') Anton++;
        else Danik++;
    }
    if(Anton>Danik)cout<<"Anton";
    else if(Anton==Danik) cout<<"Friendship";
    else cout<<"Danik";
    
    
    return 0;
}
