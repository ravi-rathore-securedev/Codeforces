/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;


int main(){

    string a;
    getline(cin,a);
    string b;
    getline(cin,b);

    reverse(begin(b),end(b));

    if(a==b) cout<<"YES";
    else cout<<"NO";
    
    
    
    return 0;
}
