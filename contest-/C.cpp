#include<bits/stdc++.h>

using namespace std;

bool fn(string& a, string& b, int start, int k){
    int count_0 = 0;

    for(int i = start; i < a.size(); i+=k){
        if(a[i] == '0'){
            count_0++;
        }
        if(b[i] == '0'){
            count_0--;
        }
    }
    if(count_0 != 0){
        return false;
    }
    return true;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int size = n;
        string a;
        while(size--){
            char temp;
            cin>>temp;
            
            a.push_back(temp);
        }

        size = n;
        string b;
        while(size--){
            char temp;
            cin>>temp;
            
            b.push_back(temp);
        }   
        
        if(fn(a, b, 0, 1) && fn(a, b, 0, 2) && fn(a, b, 1, 2)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}