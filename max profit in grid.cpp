/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: Maximum Profit in a Grid
    We have a matrix of size m*n and you are at(0,0)
    and you need to reach at (m-1,n-1) and you can move
    only down and right. You are also given a cost of
    each cell return the maximum profit to go from start to 
    end

*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int m,n;
    cin>>m>>n;
    cin.ignore();

    vector<vector<int>>cost(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>cost[i][j];
        }
    }
    vector<vector<int>>t(m,vector<int>(n));

    t[0][0]=cost[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>0 && j>0){
                t[i][j]= max(t[i-1][j],t[i][j-1]) + cost[i][j];
            }else if(i>0){
                t[i][j]=t[i-1][j]+cost[i][j];
            }else if(j>0){
                t[i][j]=t[i][j-1]+cost[i][j];
            }
        }
    }

    cout<<t[m-1][n-1];
    
    cout<<endl;
    return 0;
}

/*
3 4
1 2 3 4
2 1 1 2
3 4 4 2

o/p - 

*/