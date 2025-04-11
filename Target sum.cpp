/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h> 
using namespace std;

// Target sum

//Classes
class knapsack{
    public:
        vector<int>arr;
        int k;
        int MinSubsetSumDiff(){
            int n=arr.size();
            if(n==0)
                return 0;

            int h=accumulate(arr.begin(),arr.end(),0);
            int W= (h + k)/2;

            vector<vector<int>>t(n+1,vector<int>(W+1));

            t[0][0] = 1;


            for(int i=1;i<=n;i++){
                for(int j=0;j<=W;j++){
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

    p.arr={1,4,10,6,8,7,5};
    p.k=1;
    cout<<p.MinSubsetSumDiff();

    cout<<endl;
    return 0;
}

/*
10 6 4 1
10 7 4
8 7
5 4
6 7
*/