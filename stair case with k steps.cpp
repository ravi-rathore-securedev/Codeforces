/*
    ***********************
    Coder :: sirravirathore
    ***********************

    problem: stair case
    you are given n stairs return how many ways you reach to nth stair 
    you can do only 1 to k steps at a time
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
    int n,k;
    cin>>n>>k;

    vector<int>t(n+1);

    t[0]=1;
    t[1]=1;
    
    for(int i=2;i<=n;i++){
       for(int j=1;j<=k;j++){
        if((i-j)>=0)
            t[i]+=t[i-j];
       }
    }
    cout<<t[n];
    cout<<endl;
}

    return 0;
}
