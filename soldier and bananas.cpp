/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;




int main(){
    
    int k,n,w;
    cin>>k>>n>>w;

    int ans = k*(w*(w+1)/2)-n;
    if(ans<0)
        ans=0;
    cout<<ans;
   

    cout<<"\n";
    return 0;
}
