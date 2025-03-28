/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
    bool isFound=true;
 
    string guest,host,pile;
    cin>>guest;
    cin>>host;
    cin>>pile;
 
    unordered_map<char,int>names;
 
    for(auto &s:guest){
        names[s]++;
    }
    for(auto &s:host){
        names[s]++;
    }
 
    for(auto &s:pile){
        names[s]--;
        if(names[s]==0)
            names.erase(s);
    }
 
    if(names.size()!=0)
        cout<<"NO";
     else
        cout<<"YES";
 
 
    cout<<endl;
    return 0;
}
