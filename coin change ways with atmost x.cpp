/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: Coin Change
    you are given coins of denominations (1,3,5,10)
    and you need to make a change the n in these denomination
    return the total number of ways to make a change of n by using
    atmost x coins

*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n,k,x;
    cin>>n>>k>>x;
    cin.ignore();

    vector<int>coins(k);

    for(int i=0;i<k;i++){
        cin>>coins[i];
    }

    vector<vector<int>>t(n+1,vector<int>(x+1));

    t[0][0]=1;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=x;j++){
            if(i>0 && j==0){
                t[i][j]=0;
                continue;
            }
            if(i==0 && j>0){
                t[i][j]=1;
                continue;
            }
            for(auto &coin:coins){
                if(i-coin>=0){
                    t[i][j]+=t[i-coin][j-1];
                }
            }
        }
    }
    cout<<t[n][x];
    
    cout<<endl;
    return 0;
}
