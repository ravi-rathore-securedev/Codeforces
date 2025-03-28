/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

/* Problem :- 0/1 Knapsack 

    We have given an items of weights wt along with p prices and there is a bag whose capacity is W. You need to put these items
    in bag such that weight does not exceed capacity and profit should be maximum.

    items   = I1  I2  I3 I4
    weight  = 1   3   4  7
    price   = 10  20  25 5

    capacity(W)    = 7  10

    max_profit  = 45 55

    int solve(int i,vector<int>weight, vector<int>price, int W){
        int n=weights.size();
        if(i>=n)
            return 0;
        
        int not_take=solve(i+1,weight,price,W);
        int take=0;
        if(weight[i]<=W){
        take = price[i]+solve(i+1,weight,price,W-weight[i]);
        }

        return max(take + not_take);
    }

    main(){
    if(W==0 || weight.size()==0 || price.size()==0)
        return 0;
    int maxProfit = solve(0,weight,price,W);
    }

*/

#include<bits/stdc++.h>

using namespace std;

int solve(int i, vector<int>&weight, vector<int>&price,int W,vector<vector<int>>&t){
    int n=weight.size();
    if(i>=n || W==0)
        return 0;

    if(t[i][W]!=-1)
        return t[i][W];
    
    int take=0;
    int not_take=solve(i+1,weight,price,W,t);

    if(weight[i]<=W)
        take=price[i]+solve(i+1,weight,price,W-weight[i],t);
    
    return t[i][W]=max(take,not_take);
}

int main() {

    int n;
    cin>>n;
    cin.ignore();

    vector<int>weight(n),price(n);

    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    for(int i=0;i<n;i++){
        cin>>price[i];
    }

    int cap;
    cin>>cap;
    cin.ignore();

    vector<vector<int>>t(n,vector<int>(cap+1,-1));

    int max_profit=solve(0,weight,price,cap,t);

    cout<<max_profit;

    cout<<endl;
    return 0;
}