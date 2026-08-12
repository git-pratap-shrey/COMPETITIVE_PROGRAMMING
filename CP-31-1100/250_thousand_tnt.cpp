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

        vector<int> arr;
        arr.reserve(n);

        vector<int> factors;
        for(int i = 1; i <= n/2; i++){
            if(n % i == 0){
                factors.push_back(i);
            }
        }
        while(n--){
            int temp;
            cin>>temp;

            arr.push_back(temp);
        }

        if(arr.size() == 1){
            cout<<0<<"\n";
            continue;
        }
        long long max_diff = LLONG_MIN;
        for(int f : factors){
            // cout<<f<<"->";
            long long max_sum = LLONG_MIN;
            long long min_sum = LLONG_MAX;
            
            for(int i = 0; i < arr.size(); i+=f){
                
                long long sum = 0;
                for(int j = i; j < i + f; j++){
                    sum += arr[j];
                }
                max_sum = max(max_sum, sum);
                min_sum = min(min_sum, sum);
            }

            max_diff = max(max_sum - min_sum, max_diff);
        }

        cout<<max_diff<<"\n";
    }

    return 0;
}