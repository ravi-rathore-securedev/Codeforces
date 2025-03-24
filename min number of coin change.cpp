/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: Coin Change
    you are given coins of denominations.
    and you need to make a change the n in these denomination
    return the minimum number of coins to make a change of n 

*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n,k;
    cin>>n>>k;
    cin.ignore();

    vector<int>coins(k);

    for(int i=0;i<k;i++){
        cin>>coins[i];
    }

    vector<int>t(n+1,INT_MAX);

    t[0]=0;

    for(int i=0;i<=n;i++){
        for(auto &coin:coins){
            if(i-coin>=0 && t[i-coin]!=INT_MIN){
                t[i]=min(t[i],1+t[i-coin]);
            }
        }
    }
    if(t[n]==INT_MAX) 
        cout<<-1;
    else
        cout<<t[n];
    
    cout<<endl;
    return 0;
}
