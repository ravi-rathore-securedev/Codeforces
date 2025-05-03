/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

#include<bits/stdc++.h> 
using namespace std;

// for k size subarray find first negative element
vector<int> firstNegSub(vector<int>&a, int k){
    int n=a.size();

    int i=0,j=0;
    int neg=0;

    vector<int>res;
    queue<int>q;

    while(j<n){
        
        if(a[j]<0){
            q.push(a[j]);
        }
        
        if(j-i+1==k){
            if(!q.empty())
                res.push_back(q.front());
            else
                res.push_back(0);

            if(a[i]==q.front()){
                q.pop();
            }
            i++;
        }

        j++;
    }

    return res;
}
 
int main(){
    
    vector<int>a={2,-1,-3,-1,8,-6,2,3,4};
    int k=3;

    vector<int>res=firstNegSub(a,k);
    
   for(auto &r:res){
       cout<<r<<" ";
   }

    cout<<endl;

    return 0;
}
