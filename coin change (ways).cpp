/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: Coin Change
    you are given coins of denominations (1,3,5,10)
    and you need to make a change the n in these denomination
    return the total number of ways to make a change of n

*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    cin.ignore();

    vector<int>t(n+1);

    t[0]=1;

    for(int i=1;i<=n;i++){
        if(i>=1){
            t[i]+=t[i-1];
        }
        if(i>=3){
            t[i]+=t[i-3];
        }
        if(i>=5){
            t[i]+=t[i-5];
        }
        if(i>=10){  
            t[i]+=t[i-10];
        }
    }
    cout<<t[n];
    
    cout<<endl;
    return 0;
}
