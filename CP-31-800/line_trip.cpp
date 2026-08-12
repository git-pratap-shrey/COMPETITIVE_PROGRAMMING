#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    int n, x;
    int curr;
    int prev;
    int max_dist;

    while(t--){
        cin>>n>>x;
        max_dist = 0;
        prev = 0;

        while(n--){
            cin>>curr;

            max_dist = max(max_dist, curr - prev);
            prev = curr;
        }
        max_dist = max(max_dist, (x - prev) * 2);
        cout<<max_dist<<endl;
    }
}