/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h> 
using namespace std;

//Classes

class knapsack{
    public:
        vector<int>arr;
        int W;

        int countSubsetSum(){
            int n=arr.size();

            if(n==0)
                return 0;
            
            vector<vector<int>>t(n+1,vector<int>(W+1));
            for(int i=0;i<=W;i++){
                t[0][i]=0;
            }
            for(int i=0;i<=n;i++){
                t[i][0]=1;
            }


            for(int i=1;i<=n;i++){
                for(int j=1;j<=W;j++){
                    if(arr[i-1]<=j){
                        t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
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

    p.arr={1,5,10,4,8,6,7};
    p.W=11;

    cout<<p.countSubsetSum();



    cout<<endl;
    return 0;
}