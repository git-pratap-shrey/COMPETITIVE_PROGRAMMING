#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        bool flag = false;
        
        int count1 = 0, count0 = 0;
        for(char c : s){
            if(c == '1'){
                count1++;
            }
            else{
                count0++;
            }
        }

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                count0--;
            }
            else{
                count1--;
            }

            if(count0 < 0 || count1 < 0){
                flag = true;
                cout<<s.size()-i<<"\n";
                break;
            }
        }

        if(!flag){
            cout<<0<<"\n";
        }
    }
    return 0;
}