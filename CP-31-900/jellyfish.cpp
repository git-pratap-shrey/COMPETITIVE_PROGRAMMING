#include<bits/stdc++.h>
using namespace std;    

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        long long int a, b, n;
        cin>>a>>b>>n;
        
        while(n--){
            long long int x;
            cin>>x;
            
            b += min(a-1, x);
        }
        cout<<b<<"\n";
    }

    return 0;
}