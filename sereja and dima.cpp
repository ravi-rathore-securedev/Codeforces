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
    vector<int>inp(n);
    
    for(int i=0;i<n;i++){
        cin>>inp[i];
    }
    bool sTurn=true;
    int i=0;
    int  j=n-1;
    int stotal=0;
    int dtotal=0;
    
    while(n--){
        if(sTurn){
            if(inp[i]>inp[j]){
              stotal+=inp[i];
              i++;
              }else{
              stotal+=inp[j];
              j--;
              }
        }else{
        if(inp[i]>inp[j]){
              dtotal+=inp[i];
              i++;
              }else{
              dtotal+=inp[j];
              j--;
              }
        }
        sTurn=!sTurn;
    }
    cout<<stotal<<" "<<dtotal;

    cout<<endl;
    return 0;
}