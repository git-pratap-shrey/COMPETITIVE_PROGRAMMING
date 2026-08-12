#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> arr;
        arr.reserve(n);

        while(n--){
            long long temp;
            cin>>temp;

            arr.push_back(temp);
        }

        long long num = 1;
        bool flag = false;
        for(int i = 1; i <= 64; i++){
            num *= 2;
    
            long long prev = arr[0] % num;
            long long curr;
            if(flag) break;
            for(long long x : arr){
                curr = x % num;
                if(curr != prev){
                    cout<<num<<"\n";
                    flag = true;
                    break;
                }
            }
        }
    }

    return 0;
}