/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

#include<bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin>>n;
    cin.ignore();
    string st;
    cin>>st;
    bool isPan=true;

    if(n<26)
        isPan=false;
    unordered_set<char>stt;

    for(auto&s:st){
        stt.insert(tolower(s));
    }
    if(stt.size()!=26)
        isPan=false;
    
    if(isPan)
        cout<<"YES";
    else
        cout<<"NO";

    cout<<endl;
    return 0;
}