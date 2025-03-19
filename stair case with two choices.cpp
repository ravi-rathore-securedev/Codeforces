/*
    ***********************
    Coder :: sirravirathore
    ***********************

    problem: stair case
    you are given n stairs return how many ways you reach to nth stair 
    you can do only 1 or 2 steps at a time
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>t(n+1);

    t[0]=1;
    t[1]=1;

    for(int i=2;i<=n;i++){
        t[i]=t[i-1]+t[i-2];
    }
    cout<<t[n];


   cout<<endl;
    return 0;
}
