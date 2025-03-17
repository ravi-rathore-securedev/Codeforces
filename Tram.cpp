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
    int temp=0;
    int res=0;
    while(n--){
        int exit,enter;
        cin>>exit>>enter;
        cin.ignore();
        int x = temp-exit+enter;
        temp=x;
        res=max(res,temp);
    }

    cout<<res;
    
    return 0;
}
