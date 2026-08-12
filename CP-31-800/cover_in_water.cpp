#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    int n;
    char curr;
    int count;
    int max_count;
    int consecutive;

    while(t--){
        cin>>n;
        max_count = 0;
        count = 0;
        consecutive = 0;

        while(n--){
            cin>>curr;
            
            if(curr == '.'){
                count++;
                consecutive++;
                max_count = max(max_count, consecutive);
                // cout<<max_count<<" ";
            }
            else{
                consecutive = 0;
            }
        }
        if(max_count >= 3){
            cout<<2<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
}