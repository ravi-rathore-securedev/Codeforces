/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h> 
using namespace std;

//Classes

// knapsack recursive function
class knapsack{
    public:
        vector<int>wts;
        vector<int>prices;
        int cap;
        int t[101][101];

        int recur(int i,int w,int n){
            if(i==n || w==0)
                return 0;
            if(t[i][w]!=-1)
                return t[i][w];
            int take=0;

            if(wts[i]<=w)
                take=prices[i]+recur(i+1,w-wts[i],n);

            int skip=recur(i+1,w,n);

            return t[i][w] =max(take,skip);
        }

        int maxProfit(){
            int n=wts.size();

            if(n==0)
             return 0;
            
            memset(t,-1,sizeof(t));
            return recur(0,cap,n);
        }

};

//knapsack top down method DP
class knapsackTopdown{
    public:
        vector<int>wts;
        vector<int>prices;
        int W;

        int maxProfit(){
            int n=wts.size();

            if(n==0)
                return 0;
            
            vector<vector<int>>t(n+1,vector<int>(W+1));

            for(int i=0;i<=n;i++){
                t[i][0]=0;
            }
            for(int i=0;i<=W;i++){
                t[0][i]=0;
            }

            for(int i=1;i<=n;i++){
                for(int j=1;j<=W;j++){
                    if(wts[i-1]<=j){
                        t[i][j]=max(prices[i-1]+t[i-1][j-wts[i-1]],t[i-1][j]);
                    }
                    else{
                        t[i][j]=t[i-1][j];
                    }
                }
            }
            return t[n][W];
        }
};
 
int main(){
    
    knapsack p;

    p.wts={1,2,3,4,5};
    p.prices={10,20,8,16,18};
    p.cap=10;

    cout<<p.maxProfit();
    cout<<endl;

    knapsackTopdown p2;

    p2.wts={1,2,3,4,5};
    p2.prices={10,20,8,16,18};
    p2.W=10;

    cout<<p2.maxProfit();



    cout<<endl;
    return 0;
}