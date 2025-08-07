#include<bits/stdc++.h>
using namespace std;


int sumOfDigit(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

bool cmp(int a,int b){
       return sumOfDigit(a)<sumOfDigit(b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    vector<int>v;
    for(int i=0; i<t; i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        cout<<i<<" "<<"sumofdigit"<<" -> "<<sumOfDigit(i)<<endl;
    }


    return 0;
}