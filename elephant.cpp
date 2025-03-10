/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;




int main(){
    int n;
    cin>>n;
    cin.ignore();

    int ans = min({n,int(ceil(n/(2*1.0))),int(ceil(n/(3*1.0))),int(ceil(n/(4*1.0))),int(ceil(n/(5*1.0)))});

    cout<<ans;
    cout<<"\n";
    return 0;
}
