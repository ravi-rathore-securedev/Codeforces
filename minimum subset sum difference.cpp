/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h> 
using namespace std;

// minimum subset sum difference

//Classes
class knapsack{
    public:
        vector<int>arr;
        bool subsetsum(int W,int n, vector<vector<bool>>&t){

            for(int i=0;i<=W;i++){
                t[0][i]=false;
            }
            for(int i=0;i<=n;i++){
                t[i][0]=true;
            }


            for(int i=1;i<=n;i++){
                for(int j=1;j<=W;j++){
                    if(arr[i-1]<=j){
                        t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                    }
                    else{
                        t[i][j]=t[i-1][j];
                    }
                }
            }
            return t[n][W];
        } 
        int MinSubsetSumDiff(){
            int n=arr.size();
            if(n==0)
                return 0;

            int h=accumulate(arr.begin(),arr.end(),0);
            int minh=h;
            vector<vector<bool>>t(n+1,vector<bool>(h+1));
            subsetsum(h,n,t);
            for(int i=0;i<=h/2;i++){
                if(t[n][i]==true){
                    minh=min(minh,h-2*i);
                }
            }
           return minh;
        }
};
 
int main(){
    
    knapsack p;

    p.arr={1,4,10,6,8,7,5};

    cout<<p.MinSubsetSumDiff();

    cout<<endl;
    return 0;
}

//10 6 4 1
//8 7 5