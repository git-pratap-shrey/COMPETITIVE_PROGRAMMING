#include<bits/stdc++.h>
using namespace std;    

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int freq_hash[26] = {0};
        
        while(n--){
            char c;
            cin>>c;
            freq_hash[c - 'a']++;
        }
        
        int odd_count = 0;
        for(int i = 0; i < 26; i++){
            if(freq_hash[i] % 2 != 0){
                odd_count++;
            }
        }

        k -= (odd_count - 1);
        if(k < 0){
            cout<<"NO\n";
        }

        else{
            cout<<"YES\n";
        }
    }

    return 0;
}