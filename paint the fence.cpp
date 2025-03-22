/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: Paint Fence with two colors

    There is a fence with n posts, each post can be painted
    with either green or blue color. You have to paint all posts
    such that no more than two adjacent fence posts have the same
    color. return the total number of ways you can paint the fence.

*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    cin.ignore();

    vector<vector<int>>f(n+1,vector<int>(2));

    f[1][0]=1;
    f[1][1]=1;
    f[2][0]=2;
    f[2][1]=2;

    for(int i=3;i<=n;i++){
        for(int j=0;j<=1;j++){
            f[i][j]=f[i-1][1-j] + f[i-2][1-j];
        }
    }
    cout<<f[n][0]+f[n][1];
    
    cout<<endl;
    return 0;
}
