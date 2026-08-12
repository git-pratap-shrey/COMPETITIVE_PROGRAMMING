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

        string s;
        while(n--){
            char temp;
            cin>>temp;
            
            s.push_back(temp);
        }
        char prev = s[0];
        char curr;
        char next;

        int diff = 0;
        for(int i = 1; i < s.size() - 1; i++){
            curr = s[i];
            next = s[i+1];
            if(prev != curr && curr != next){
                diff = 1;
                if(prev == next){
                    diff = 2;
                    break;
                }
            }
            prev = curr;
        }

        int count = 1;
        prev = s[0];
        
        for(int i = 1; i < s.size(); i++){
            curr = s[i];
            if(curr != prev){
                prev = curr;
                count++;
            }
        }

        cout<<count - diff<<"\n";
    }

    return 0;
}