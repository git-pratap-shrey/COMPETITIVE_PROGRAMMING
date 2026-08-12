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

        unordered_map<int, int> freq;
        int temp;

        while(n--){
            cin>>temp;
            freq[temp]++;
        }

        int size = freq.size();
        if(size == 1){
            cout<<"YES\n";
        } 
        else if(size > 2){
            cout<<"NO\n";
        }
        else{
            if(abs(freq.begin()->second - next(freq.begin())->second) <= 1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}