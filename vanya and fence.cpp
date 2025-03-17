/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,h;
    cin>>n>>h;
    cin.ignore();

    int res=0;
    while(n--){
        int x;
        cin>>x;
        res+=ceil(x/(h*1.0));
    }
    cout<<res;
    
    
    return 0;
}
