/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: Coin Change
    you are given coins of denominations (1,3,5,10)
    and you need to make a change the n in these denomination
    return the unique number of ways to make a change of n 

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

    vector<int>t(n+1);

    t[0]=1;

    for(auto &coin:coins){
        for(int i=0;i<=n;i++){
            if(i-coin>=0)
                t[i]+=t[i-coin];
        }
    }
    cout<<t[n];
    
    cout<<endl;
    return 0;
}
