#include<bits/stdc++.h>

using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int hash[26] = {0};
        int distict_count = 0;
        int sum = 0;

        while(n--){
            char temp;
            cin>>temp;

            if(!hash[temp - 'a']){
                hash[temp - 'a']++;
                distict_count++;
            }
            sum += distict_count;
        }

        cout<<sum<<"\n";   
    }
    return 0;
}