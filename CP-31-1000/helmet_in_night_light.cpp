#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        int n , p; cin>>n>>p;

        vector<int> A, B;
        for(int i = 0; i < n; i++){
            int temp; cin>>temp;
            A.push_back(temp);
        }
        for(int i = 0; i < n; i++){
            int temp; cin>>temp;
            B.push_back(temp);
        }

        long long cost = p;
        
        vector<pair<int,int>> v;
        
        for (int i = 0; i < n; i++)
        v.push_back({B[i], A[i]});
    
        sort(v.begin(), v.end());
        
        for (int i = 0; i < n; i++) {
            B[i] = v[i].first;
            A[i] = v[i].second;
        }
    
        n--;
        int index = 0;
        while(n){
            if(index < A.size() && B[index] < p){
                cost += B[index];
                A[index]--;
                n--;

                if(!A[index]){
                    index++;
                }
            }
            else{
                cost += p;
                n--;
            }
        }

        cout<<cost<<"\n";
    }
}