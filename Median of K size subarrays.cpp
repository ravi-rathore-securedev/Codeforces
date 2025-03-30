/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

/*
Problem - There is an array given you find median
    of x size subarrays. return the median array
*/

#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {

    int n;
    cin>>n;
    vector<int>input(n);

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    int k;
    cin>>k;
    
    multiset<int>left,right;
    vector<int>res;

    int i=0,j=0;

    while(j<n){

        if(left.empty() || left.size()<=right.size()){
            left.insert(input[j]);
        }else{
            right.insert(input[j]);
        }

        if(!right.empty() && *left.rbegin()>*right.begin()){
            int temp1=*left.rbegin();
            int temp2=*right.begin();
            left.erase(left.find(temp1));
            right.erase(right.find(temp2));

            right.insert(temp1);
            left.insert(temp2);
        }
        if(j-i+1==k){
            res.push_back(*left.rbegin());
            if(left.find(input[i])!=left.end()){
                left.erase(left.find(input[i]));
            }else{
                right.erase(right.find(input[i]));
            }
            i++;
        }

        j++;
    }
    
    for(int r=0;r<res.size();r++){
        cout<<res[r]<<" ";
    }
 
    cout<<endl;
    return 0;
}
