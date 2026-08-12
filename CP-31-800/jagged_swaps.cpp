#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--){
        int n, first;
        cin>>n;

        bool flag = true;

        cin>>first;
        if(first != 1){
            flag = false;
        }

        while(--n){
            cin>>first;
        }
        
        flag ? cout<<"YES\n" : cout<<"NO\n";
    }
    
    return 0;
}