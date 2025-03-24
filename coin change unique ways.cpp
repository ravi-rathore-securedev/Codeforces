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

    vector<vector<int>>t(n+1,vector<int>(k));

    for(int i=0;i<k;i++){
        t[0][i]=1;
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<k;j++){
            for(int k=0;k<=j;k++){
                if(i-coins[k]>=0){
                    t[i][j]+=t[i-coins[k]][k];
                }
            }
        }
    }
    cout<<t[n][k-1];
    
    cout<<endl;
    return 0;
}
