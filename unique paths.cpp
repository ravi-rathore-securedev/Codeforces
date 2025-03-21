/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: Unique Path
    We have a matrix of size m*n and you are at(0,0)
    and you need to reach at (m-1,n-1) and you can move
    only down and right. Return the number of way to reach 
    the end of matrix

*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    int m,n;
    cin>>m>>n;
    cin.ignore();

    vector<vector<int>>t(m,vector<int>(n));

    t[0][0]=1;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>0 && j>0){
                t[i][j]= t[i-1][j] + t[i][j-1];
            }else if(i>0){
                t[i][j]=t[i-1][j];
            }else if(j>0){
                t[i][j]=t[i][j-1];
            }
        }
    }

    cout<<t[m-1][n-1];
    
    cout<<endl;
    return 0;
}