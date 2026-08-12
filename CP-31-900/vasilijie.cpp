#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        long long int a, b x;
        cin>>n>>k>>x;

        long long int min_sum = k*(k+1) / 2;
        long long int max_sum = (n*k) - (k*(k-1)/2);
        
        if(x < min_sum || x > max_sum){
            cout<<"NO\n";
        }

        else{
            long long int left = n - k; 
            if(left > 0 || min_sum == x){ 
                cout<<"YES\n";
            }
        }
   }

    return 0;
}