/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;

bool isdistinct(int n){
    unordered_set<int>st;
    while(n>0){
        if(st.find(n%10)==st.end()){
            st.insert(n%10);
        }else{
            return false;
        }
        n=n/10;
    }
    return true;
}
int main(){

   int n;
   cin>>n;
    while(!isdistinct(n+1)){
        n++;
    }
    cout<<n+1;
    
    return 0;
}
