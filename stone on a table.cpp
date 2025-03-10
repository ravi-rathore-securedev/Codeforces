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

    string str;
    getline(cin,str);

    int i=0;
    int j=1;
    int count=0;
    while(j<n){
        if(str[j]==str[i]){
            while(str[j]==str[i]){
                count++;
                j++;
            }
        }else{
            i=j;
            j++;
        }
    }
    cout<<count;

    cout<<"\n";
    return 0;
}
