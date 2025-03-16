/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;

// matrix multiplication
/*
you are given two matrix of size m*n and n*p

return the multiple matrix
*/
int main(){

    int m,n,p;
    // cout<<"Enter the values of m,n,p: ";
    cin>>m>>n>>p;
    cin.ignore();

    vector<vector<int>>A(m,vector<int>(n));
    vector<vector<int>>B(n,vector<int>(p));

    // cout<<"enter the first matrix elements: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

    // cout<<"enter the second matrix elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cin>>B[i][j];
        }
    }
    vector<vector<int>>C(m,vector<int>(p));

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
